#include <iostream>
#include <string>
using namespace std;

int const m=50;
int count = 0;

class Items
{
	int itemcode;
	float itemprice;
public:
	void getitem(void);
	void displaysum(void);
	void remove(void);
	void displayitems(void);

};

Items order[100];

void Items ::getitem(void)
{
	cout<<"Enter item code : ";
	cin>> itemcode;

	cout<<"Enter item cost : ";
	cin>>itemprice;
	count++;
}

void Items ::displaysum()
{
	float sum = 0;
	for(int i=0; i<count; i++)
	{
		sum = sum + order[i].itemprice;

	}
	cout<<"\nTotal value : "<<sum;

}

void Items ::remove()
{
	int a;
	cout <<"Enter item code : ";
	cin>>a;

	for(int i=0; i<count; i++)
		if(order[i].itemcode == a)
			order[i].itemprice = 0;
}

void Items ::displayitems()
{
	cout<<"\nCode Price\n";

	for(int i=0; i<count; i++)
	{
		if(order[i].itemprice!=0){
		cout<<"\n"<<order[i].itemcode;
		cout<<"  "<<order[i].itemprice;
		}
	}

}
int main() {
	int x;

	do
	{
		cout<<"\nYou can do the following"<<"\nEnter the appropriate number";
		cout<<"\n1 : Add an item ";
		cout<<"\n2 : Display total value";
		cout<<"\n3 : Delete an item ";
		cout<<"\n4 : Display all items";
		cout<<"\n5 : Quit";
		cout<<"\nWhat is your option?";

		cin>>x;

		switch(x)
		{
		case 1 : order[count].getitem();
                cout<<count;
		break;
		case 2 : order[count].displaysum();
		break;
		case 3 : order[count].remove();
		break;
		case 4 : order[count].displayitems();
		break;
		case 5 : break;
		default : cout <<"Error in input, try again\n ;";
		}
	}while(x!=5);
	return 0;
}
