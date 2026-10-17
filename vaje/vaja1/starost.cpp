#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void izpis(vector<pair<int, string>> osebe, int n, int k)
{

    // for (const auto& o : osebe) kao bol c++ verzija
    for (int i = n - k; i < n; i++)
    {
        cout << osebe[i].second << "\n";
    }

    return;
}

int main()
{

    int n, k;
    cin >> n >> k;

    vector<pair<int, string>> osebe;
    string ime;
    int starost;
    for (int i = 0; i < n; i++)
    {
        cin >> ime >> starost;
        osebe.push_back({starost, ime});
    }

    sort(osebe.begin(), osebe.end());
    sort(osebe.begin() + (n - k), osebe.end(), [](const auto &a, const auto &b)
         { return a.second < b.second; });
    /*
    const - a in b samo beremo
    auto - ne rabs pisat tipa
    & - referenca
    */

    izpis(osebe, n, k);

    return 0;
}