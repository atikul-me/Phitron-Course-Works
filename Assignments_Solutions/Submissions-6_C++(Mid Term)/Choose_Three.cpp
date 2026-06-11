#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, s;
    cin >> n >>s;
    
    vector<int> a(n);
    for(int i =0; i<n; i++)
    {
        cin >> a[i];
    } 
    if(n<3)
    {
        cout << "NO\n";
        return;
    }
    bool possible = false;
    for(int i =0; i<n-2; i++)
    {
        for(int j = i+1; j<n-1; j++)
        {
            for (int k = j+1; k<n; k++)
            {
                if(a[i]+a[j]+a[k] == s)
                {
                    possible = true;
                    break;
                }
            }
            if(possible) break;
        }
        if(possible) break;
    }
    if(possible)
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n";
    }
}

int main()
{
    // Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
