#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int km,m,cm,in,ft;
	cout<<"Janvi C. Vadhiya"<<endl;
	cout<<"220130318031"<<endl;
	cout<<"enter value in km for converting::";
	cin>>km;
	
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*1000<<endl;
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*100000<<endl;
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*39370.1<<endl;
	cout<<setfill('0')<<setw(8)<<setprecision(8)<<km*3280.84<<endl;
}
