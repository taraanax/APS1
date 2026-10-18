#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

using Ceta = pair<int, int>;
using MejeCet = queue<Ceta>;

//najde cetice 
void isciCete(const vector<int> &zap, MejeCet &cete) {
    int n = zap.size();
    if (n == 0)
        return;

    int zac_i = 0;
    for (int i = 0; i < n - 1; i++) {
        if (zap[i] > zap[i + 1]) {
            cete.push({zac_i, i + 1});
            zac_i = i + 1;
        }
    }
    cete.push({zac_i, n});
}

//zdruzi cetice
Ceta zdruziCete(const vector<Ceta> &k_cet, vector<int> &zap) {
    if (k_cet.empty())
        return {0, 0};
    if (k_cet.size() == 1)
        return k_cet[0];

    int zac = k_cet[0].first;
    for (size_t i = 0; i < k_cet.size() - 1; i++) {
        int mid = k_cet[i].second;
        int kon_curr = k_cet[i + 1].second;
        // [a,b) + [b,c) klicem polimerizacijo
        inplace_merge(zap.begin() + zac, zap.begin() + mid, zap.begin() + kon_curr);
    }

    int kon = k_cet.back().second;

    return {zac, kon};
}

vector<int> zlivanje(vector<int> &zap, int k, int a) {
    if (zap.empty())
        return zap;
    if (k < 2)
        k = 2;

    MejeCet cete;
    isciCete(zap, cete);

    for (int korak = 0; korak < a && cete.size() > 1; korak++) {
        MejeCet nove_cete;

        while (!cete.empty()) {
            vector<Ceta> k_cet;

            for (int i = 0; i < k && !cete.empty(); i++) {
                k_cet.push_back(cete.front());
                cete.pop();
            }

            Ceta nova = zdruziCete(k_cet, zap);
            nove_cete.push(nova);
        }

        cete = nove_cete;
    }

    return zap;
}

void debug(MejeCet v) {
    while (!v.empty()) {
        Ceta par = v.front();
        v.pop();
        cout << "[" << par.first << ", " << par.second << ")\n";
    }

    return;
}

int main() {

    int n, k, a;
    cin >> n >> k >> a;

    vector<int> zap;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        zap.push_back(x);
    }

    zlivanje(zap, k, a);

    for (int i = 0; i < n; i++) {
        cout << zap[i];

        if (i == n - 1)
            cout << "";
        else
            cout << " ";
    }

    return 0;
}