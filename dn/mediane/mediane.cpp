#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

using min_heap = priority_queue<int, vector<int>, greater<int>>;
using max_heap = priority_queue<int>;

int main () {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    max_heap sp;
    min_heap zg;
    int x;
    int mediana = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;

        //vstavljanje
        if(sp.empty()) sp.push(x);
        else if(zg.empty()) {
            if(x > sp.top()) {
                zg.push(x);
            } else {
                zg.push(sp.top());
                sp.pop();
                sp.push(x);
            }
        } else {
            if (x <= mediana) {
                sp.push(x);
            } else {
                zg.push(x);
            }
        }

        while (sp.size() < zg.size() || sp.size() > zg.size() + 1) { 
            if (sp.size() < zg.size()) {
            sp.push(zg.top());
            zg.pop();
            } else {
                zg.push(sp.top());
                sp.pop();
            }
        }

        mediana = sp.top();
        cout << mediana << '\n';
    }

    return 0;
}