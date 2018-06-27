#include<iostream>
using namespace std;
void main()
{
	int x,y,z;
	char a;
	cout<<"Enter Distances:"
	cin>>a>>x>>y>>z;
	switch(a)
	{
	case'x>y':
		cout<<x<<"is The Longest Distance";
		break;
	case'y>z':
		cout<<y<<"is The Longest Distance"; break;
	case'z>x':
		cout<<z<<"is The Longest Distance"; break;
	case'z>y':
		cout<<z<<"is The Longest Distance"; break;
	default:
		cout<<"Enter A Valid Input";
	}
	cin.get();
	cin.ignore();
}