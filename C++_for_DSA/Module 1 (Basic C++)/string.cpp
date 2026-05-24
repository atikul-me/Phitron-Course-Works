#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cin.ignore(); // fgets e jhamela kora sei enter chapa seta ignore korte 
    char s[100];
    cin.getline(s,100); // space soho print korte smoothly
    cout <<a << endl << s <<endl;
    return 0;
}

/* Also in C++ there is already a string named data type
that can be write down like this : 

string s;
cin>>s;
cout<<s<<endl;

but this will not allow space */