#include <bits/stdc++.h>

using namespace std;

vector<int> subset;

void search(int k, int n)
{
    if (k == n)
    {
        if (subset.empty())
        {
            cout << "Φ";
        }
        for (auto it : subset)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    else
    {
        search(k + 1, n);
        subset.push_back(k);
        search(k + 1, n);
        subset.pop_back();
    }
}

int main()
{

    int k, n;
    cin >> n;
    search(0, n);
}