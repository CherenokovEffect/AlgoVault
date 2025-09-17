#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
     int  MaxDistance = 0 ;
    for (int i = 0; i < n-1 ; i++)
    {   
        int Distance = 0 ;
        for (int j = i + 1; j < n; j++)
        {
            Distance =  ((x[j]-x[i])*(x[j]-x[i]))+((y[j]-y[i])*(y[j]-y[i])) ;
            MaxDistance = max(Distance,MaxDistance) ;
        }
    }

    cout << MaxDistance ;
}

