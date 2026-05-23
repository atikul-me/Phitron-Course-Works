#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    int a = 10, b = 11, c = 12;
    
    
    cout << min({a, b, c}) << endl;
    cout << max({a, b, c}) << endl; 
    
    swap (a,b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}
