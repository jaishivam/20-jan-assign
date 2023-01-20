#include<iostream>
using namespace std;
class consumer
{
	public:
		int acc_no;
		char holder_name[40];
		char acc_type[40];
	
	void cred()
	{
		cout<<"Enter the account no ";
		cin>>acc_no;
		cout<<"Name ";
		cin>>holder_name;
		cout<<"account type ";
		cin>>acc_type;
	}
};
class record:public consumer
{
	public:
		int balance;
		int depositamount;
		int withdraw;
		void rec()
		{
			cout<<"balance";
			cin>>balance;
			cout<<"deposit amount ";
			cin>>depositamount;
			cout<<"withdraw ";
			cin>>withdraw;
			
		} 
		
		void rem_amount()
		{
			balance=balance+depositamount-withdraw;
			
		}
		void display()
		{
			cout<<"account number :"<<acc_no<<endl<<"account holder name :"<<holder_name<<endl<<"account type "<<acc_type<<endl<<"balance = "<<endl<<balance;
		}
	
};
main()
{
	record r;
     r.cred();
     r.rec();
     r.rem_amount();
     r.display();
}
