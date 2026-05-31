#include <bits/stdc++.h>
using namespace std;
class Student  // Class start from here
{
	public:
		int roll;
		int cls;
		float gpa; 
		
	Student(int c, int r, float g) // Constructor declare
	{
		roll = r;
		cls = c;
		gpa = g;  // Constructor declare ended
	} 
};                // Public class end
int main()
{
	Student rahim(5, 15, 4.5);
	
	Student karim(5, 20, 4.33);
			
	cout<<rahim.cls<<" "<<rahim.roll<<" "<<rahim.gpa<<endl;
	cout<<karim.cls<<" "<<karim.roll<<" "<<karim.gpa<<endl;
		
	return 0;
}
