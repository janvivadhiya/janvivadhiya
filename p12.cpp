#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0)
{
	return(x+y+z+w);
}
int main()
{
	cout<<sum(20,10)<<endl;
	cout<<sum(20,10,10)<<endl;
	cout<<sum(20,10,10,20)<<endl;
	return 0;
}
