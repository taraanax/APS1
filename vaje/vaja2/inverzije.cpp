#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long count = 0;

vector<int> merge(vector<int> a, vector<int> b) {
    int i = 0, j = 0;
    vector<int> c;
    while (i < a.size() || j < b.size()) {
        if (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) c.push_back(a[i++]);
            else {
                c.push_back(b[j++]);
                count+= (a.size() - i);
            }
        } else if (i < a.size()) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    return c;
}


vector<int> mergesort(vector<int> sez) {
    int n = sez.size();
    if (n <= 1) return sez;
    vector<int> levo(sez.begin(), sez.begin() + n/2);
    vector<int> desno(sez.begin() + n/2, sez.end());
    levo = mergesort(levo);
    desno = mergesort(desno);
    return merge(levo, desno);
}


int main() {

    int n;
    cin >> n;

    vector<int> seznam;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        seznam.push_back(x);
    }

    mergesort(seznam);

    cout << count;

    return 0;
}