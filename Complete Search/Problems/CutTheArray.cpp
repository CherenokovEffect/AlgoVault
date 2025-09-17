#include <bits/stdc++.h>

using namespace std;

int prefix[200005];

/*
 */

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s1 = 0, s2 = 0, s3 = 0;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int ind1 = 0, ind2 = 0;
        bool flag = false;

        int m1 = 0, m2 = 0, m3 = 0;

        for (int l = 1; l < n - 1; l++)
        {
            for (int r = l + 1; r < n; r++)
            {
                for (int x = 1; x <= l; x++)
                {
                    s1 += a[x];
                }

                for (int y = l + 1; y <= r; y++)
                {
                    s2 += a[y];
                }

                for (int z = r + 1; z <= n; z++)
                {
                    s3 += a[z];
                }
                m1 = s1 % 3;
                m2 = s2 % 3;
                m3 = s3 % 3;

                // cout << m1 << " " << m2 << " " << m3 << "\n";

                if (m1 == m2 && m2 == m3 && m1 == m3)
                {
                    ind1 = l;
                    ind2 = r;
                    flag = true;
                }
                else if (m1 != m2 && m2 != m3 && m1 != m3)
                {
                    ind1 = l;
                    ind2 = r;
                    flag = true;
                }
                else
                {
                }

                s1 = 0;
                s2 = 0;
                s3 = 0;

                break;
            }
            if (flag == true)
                break;
            // cout << "\n";
        }

        if (flag)
        {
            cout << ind1 << " " << ind2 << "\n";
        }
        else
        {
            cout << 0 << " " << 0 << "\n";
        }
    }
}