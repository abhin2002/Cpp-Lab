#include <iostream>
using namespace std;

int const size = 3;

class vector
{
    int v[size];
    public:
    vector();
    friend float operator *(vector a, vector b);
    friend istream & operator >> (istream &, vector &);
    friend ostream & operator << (ostream &, vector &);
};

vector :: vector()
{
    for(int i=0; i<size; i++)
        v[i]=0;
}

float operator *(vector a, vector b)
{
    float c, sum=0;
    for(int i=0; i<size; i++){
        c =a.v[i]*b.v[i];
        sum=sum+c;
    }
    return sum;
}

istream & operator >> (istream &din, vector &b)
{
    for(int i=0; i<size; i++)
        din >> b.v[i];
    return(din);
}

ostream & operator << (ostream &dout, vector &b)
{
    cout << "(" << b.v[0];
    for(int i=1; i<size; i++)
        dout << ", " << b.v[i];
    dout << ")";
    return(dout);
}

int main()
{
	int choice=1;
	while(choice==1)
	{	
    vector m;
    cout<<"Enter elements of vector m " <<endl;
    cin>>m;
    cout<<endl;
    cout<<"m = "<< m << endl;
    vector n;
    cout<<"Enter elements of vector n : ";
    cin>>n;
    float p;
    p = n*m;
    cout<<"\n";
    cout <<m<< " * "<<n<<" = " << p <<endl;
	char c2;
	cout<<"\n\nDo you want to continue\nPress y to continue or any other key to exite\n";
	cin>>c2;
	if(c2!='y')
		break;
	}

	cout<<"\n~~~~~Thank You~~~~~\n";
    return 0;
}
