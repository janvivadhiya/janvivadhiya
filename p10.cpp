#include<iostream>
using namespace std;
int multi(int &,int &);
int main()
{
	int no1,no2;
	cout<<"enter the value of no1::";
	cin>>no1;
	cout<<"enter the value of no2::";
	cin>>no2;
	
	cout<<multi(no1,no2);
}
int multi(int &a,int &b)
{
	return a*b;
}
