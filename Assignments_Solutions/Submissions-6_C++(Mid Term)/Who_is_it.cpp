#include <bits/stdc++.h>

using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int total_marks;
};
void solve()
{
    Student s1, s2, s3;
    
    cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
    cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
    cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;
    
    Student best = s1;
    
    if(s2.total_marks > best.total_marks)
    {
        best = s2;
    }
    else if (s2.total_marks == best.total_marks) 
    {
        if(s2.id < best.id)
        {
            best = s2;
        }
    }
    if(s3.total_marks > best.total_marks)
    {
        best =s3;
    }
    else if(s3.total_marks == best.total_marks)
    {
        if(s3.id < best.id)
        {
            best = s3;
        }
    }
    cout << best.id << " " <<best.name <<" " << best.section << " "<< best.total_marks << "\n";
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
