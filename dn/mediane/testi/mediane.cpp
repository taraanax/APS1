#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMedian(vector<int> &a, int n) {

    if (n % 2 == 0) {
        nth_element(a.begin(), a.begin() + n / 2, a.end());
        nth_element(a.begin(), a.begin() + (n - 1) / 2, a.end());
        return (int)(a[(n - 1) / 2]);
    } else {
        nth_element(a.begin(), a.begin() + n / 2, a.end());
        return (int)a[n / 2];
    }
}

int main () {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> zap;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        zap.push_back(x);
        cout << findMedian(zap, i+1) << endl;
    }

    return 0;
}