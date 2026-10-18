#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

using Ceta = pair<int, int>;
using MejeCet = queue<Ceta>;

void isciCete (const vector<int>& zap, MejeCet &cete) {
    int n = zap.size();
    if (n == 0) return;

    int zac_i = 0;
    for (int i = 0; i < n - 1; i++) {
        if (zap[i] > zap[i + 1]) {
            cete.push({zac_i, i + 1});
            zac_i = i + 1;
        }
    }
    cete.push({zac_i, n});
}

Ceta zdruziCete (vector<Ceta> k_cet, vector<int> &zap) {
    if (k_cet.empty()) return {0, 0};
    if (k_cet.size() == 1) return k_cet[0];
    int zac = k_cet[0].first;

    int zac_curr, mid, kon_curr;
    for (int i = 0; i < k_cet.size() - 1; i++) {
        zac_curr = zac;
        mid = k_cet[i].second;
        kon_curr = k_cet[i + 1].second;
        inplace_merge(zap.begin() + zac, zap.begin() + mid, zap.begin() + kon_curr);
    }

    int kon = k_cet[k_cet.size() - 1].second;
    Ceta nova = {zac, kon};
    return nova;
}

vector<int> zlivanje(vector<int> &zap, int k) {

    MejeCet cete;
    isciCete(zap, cete);

    while (cete.size() > 1) {
        vector<Ceta> k_cet;
        for (int i = 0; i < k && !cete.empty(); i++) {
            k_cet.push_back(cete.front());
            cete.pop();
        }

    Ceta nova = zdruziCete(k_cet, zap);
    cete.push(nova);
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

    zlivanje(zap, k);

    for (int el : zap) {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}