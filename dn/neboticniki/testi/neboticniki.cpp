#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main () {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> nebo;
    nebo.reserve(n);

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        nebo.push_back(x);
    }

    long long z = 0;

    stack <int> index;
    int max;
    for (int i = n - 1; i >= 0; i--) {
        
        while (!index.empty() && nebo[index.top()] <= nebo[i]) {
            index.pop();
        }
        
        if (index.empty()) max = n;
        else max = index.top();

        z += (max - i - 1);

        index.push(i);
    }

    //pucanje
    while (!index.empty()) index.pop();

    for (int i = 0; i < n; i++) {
        
        while (!index.empty() && nebo[index.top()] <= nebo[i]) {
            index.pop();
        }
        
        if (index.empty()) max = -1;
        else max = index.top();

        z += (i - max - 1);

        index.push(i);
    }

    cout << z << endl;
    
    return 0;
}