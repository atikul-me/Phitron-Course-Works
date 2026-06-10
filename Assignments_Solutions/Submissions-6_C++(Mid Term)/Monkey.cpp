#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string line;
    while (getline(cin, line))
    {
        string clean_word = "";
        
        for(char c : line)
        {
            if(c!= ' ')
            {
                clean_word += c;
            }
        }
        sort(clean_word.begin(), clean_word.end());
        cout<<clean_word<<"\n";
    }
    return 0;
}
