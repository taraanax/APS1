#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

struct Beseda {
    string niz;
    int teza;
    int index;
};

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

/*
levi otrok = 2i
desni otrok = 2i + 1
starš = i/2
*/
    vector<int> tree(b * 2, 0);
    int k = b;
    for (int i = 0; i < n; i++) {
        tree[k] = slovar[i].teza;
        k++;
    }

    for (int k = b - 1; k >= n + 1 ; k--) {
        tree[k] = max(tree[2 * k],tree[2 * k + 1]); 
    }

    

    return 0;
}