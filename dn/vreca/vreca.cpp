#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <functional>
#include <utility>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> vhod;
    for (int i = 0; i < n; i++) {
        int s, x;
        cin >> s >> x;
        vhod.push_back({s, x});
    }

    multiset<int> vreca;
    int a, b;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (vhod[i].first == 0) {
            auto it1 = vreca.find(vhod[i].second);
            if (it1 == vreca.end()) continue;
            vreca.erase(it1);
        }
        else if (vhod[i].first < 0) {
            vreca.insert(vhod[i].second);
        }
        else if (vhod[i].first > 0) {
            a = min(vhod[i].first, vhod[i].second);
            b = max(vhod[i].first, vhod[i].second);

            while (a <= b) {
                auto it2 = vreca.lower_bound(a);
                if (it2 != vreca.end() && *it2 <= b) {
                    sum += vreca.count(*it2);
                    a = *it2 + 1;
                } else break;
            }
        }
    }

    cout << sum << '\n';

    return 0;
}