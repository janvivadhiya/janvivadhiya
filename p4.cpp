#include<iostream>
#include<string>
using namespace std;
class contact_list
{
	private:
		string name;
		long long int phone_no;
		long long int additional_no;
		
	public:
			void putdata();
			void getdata();
		
};
void contact_list::putdata()
{
	cout<<"Enter your name::";
	cin>>name;
	cout<<"Enter your contact_no ::";
	cin>>phone_no;
	cout<<"Enter additional contact no::";
	cin>>additional_no;
}
void contact_list::getdata()
{
	cout<<"enter your name::"<<name<<endl;
	cout<<"enter your contact_no::"<<phone_no<<endl;
	cout<<"enter additional contact_no::"<<additional_no<<endl;
}
int main()
{
	cout<<"tanya a. sumra"<<endl;
	cout<<"220230318009"<<endl;
	contact_list A;
	A.putdata();
	A.getdata();	
}
