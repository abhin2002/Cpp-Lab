#include <iostream>
#include <string>
using namespace std;

class bank
{
	char cust_name[50], acc_type[50];
	int acc_no;
	double balance;
public:
	void add_acc();
	void withdrow();
	void deposit();
	void balnc_enqr();
	void acc_stmnt();

};

void bank::add_acc()
{
	cout <<"Enter the account holder name";
	cin >>cust_name;
	cout <<"Enter the account type";
	cin>>acc_type;
	cout <<"Enter the account number ";
	cin>>acc_no;
	cout <<"Enter the total deposited amount(minimum 500)";
	cin>>balance;
}

void bank ::withdrow()
{
	int b;
	cout<<"Enter the amount to withdraw";
	cin>>b;
	if(balance>b+500)
		balance=balance-b;
	else{
		cout<<"Insufficient balance";
		}
}


void bank :: deposit()
{
	float b;
	cout<<"Enter the amount to deposit : ";
	cin >>b;
	balance=balance+b;
	cout<<"Balance : "<<balance;

}

void bank::balnc_enqr()
{

	cout<<"Balance : "<<balance;
}

void bank::acc_stmnt()
{
	cout<<"Name : "<<cust_name;
	cout<<"\nAC No : "<<acc_no;
	cout<<"\nAC Type : "<<acc_type;
	cout<<"\nBalance : "<<balance;
}

int main()
{
	bank x;
	int n;
	for(int i=0; i<5; i++)
	{
		cout<<"\nYou can do the following"<<"\nEnter the appropriate number";
		cout<<"\n1 : Add an AC ";
		cout<<"\n2 : Withdrow";
		cout<<"\n3 : Deposite ";
		cout<<"\n4 : Balance Enquary";
		cout<<"\n5 : AC Statement ";
		cout<<"\n6 : Quit";
		cout<<"\nWhat is your option?";

		cin>>n;
		if(n==1)
			x.add_acc();
		else if(n==2)
			x.withdrow();
		else if(n==3)
			x.deposit();
		else if(n==4)
			x.balnc_enqr();
		else if(n==5)
			x.acc_stmnt();
		else if(n==6)
			cout<<"Thank you";
		else
			cout<<"Try again";

	}

		return 0;
}
