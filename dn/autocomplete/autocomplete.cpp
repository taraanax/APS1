#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>
#include <utility>
#include <functional>

using namespace std;

struct Beseda {
    string niz;
    int teza;
    int index;
};

int maxTeza(const vector<pair<int, int>>& tree, int b, int levi, int desni) {
    int l = b + levi;
    int d = b + desni;
    pair<int,int> max = {0, 0};

    while (l <= d) {
        if (l % 2 != 0) {
            if (tree[l].first > max.first) {
                max.first = tree[l].first;
                max.second = tree[l].second;
            }
            l += 1;
        }
        if (d % 2 == 0) {
            if (tree[d].first > max.first) {
                max.first = tree[d].first;
                max.second = tree[d].second;
            }
            d -= 1;
        }
        d /= 2;
        l /= 2;
    }

    return max.second;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//slovar
    int n;
    cin >> n;

    vector<Beseda> slovar;
    slovar.reserve(n);
    Beseda x;
    for (int i = 0; i < n; i++) {
        cin >> x.niz >> x.teza;
        x.index = i + 1;
        slovar.push_back(x);
    }

    sort(slovar.begin(), slovar.end(),
        [](const Beseda& a, const Beseda& b) {
            return a.niz < b.niz;
        }
    );

//input besede
    int m;
    cin >> m;

    vector<string> besede;
    besede.reserve(m);
    string y;
    for (int i = 0; i < m; i++) {
        cin >> y;
        besede.push_back(y);
    }

//segment tree
    int b = 1;
    while (b < n) b = b * 2;

    vector<pair<int, int>> tree(b * 2, {0, 0});
    int k = b;
    for (int i = 0; i < n; i++) {
        tree[k].first = slovar[i].teza;
        tree[k].second = slovar[i].index;
        k++;
    }

    for (int k = b - 1; k >= 1 ; k--) {
        tree[k] = max(tree[2 * k],tree[2 * k + 1]); 
    }

    for (const string& y : besede) {
    //binary search
        auto levi = lower_bound(slovar.begin(), slovar.end(), y,
            [](const Beseda& a, const string& b) {
            return b > a.niz;
            }
        );

        auto desni = lower_bound(slovar.begin(), slovar.end(), y + "{",
            [](const Beseda& a, const string& b) {
            return b > a.niz;
            }
        );

        if (levi == slovar.end() || levi->niz.compare(0, y.size(), y) != 0) cout << "0" << '\n';
        else cout << maxTeza(tree, b, levi - slovar.begin(), (desni - slovar.begin()) - 1) << '\n';
    }
    return 0;
}