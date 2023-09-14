#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int no=5454;
	cout<<"after applying setfill::"<<setfill('*')<<setw(10)<<no;
	return 0; 
}
