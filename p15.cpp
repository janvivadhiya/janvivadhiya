#include<iostream>
using namespace std;
class square
{
	private:
		int n,r;
		float n1,r1;
	public:
		void input();
	void calc();
		void display();
	
};
inline void square::input()
{
	cout<<"enter an integer::";
	cin<<n;
	cout<<"\nenter a float no.::";
	cin>>n1;
}
inline void square::calc()
{
	r=n*n;
	r1=n1*n1;
}

