//============================================================================
// Name        : 12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class complex
{
	float x;
	float y;
public:
	void input();
	friend complex sum(complex, complex);
	void show();
};

void complex::input()
{
	cout<<"Enter the real part of complex number : ";
	cin>>x;
	cout<<"Enter the imaginary part of complex number : ";
	cin>>y;
}

complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x = c1.x+c2.x;
	c3.y = c1.y+c2.y;
	return(c3);
}
void complex::show()
{
	if(y<0)
	{cout<<x<<" - j "<<(-1)*(y)<<"\n";}
	else
	cout<<x<<" + j "<<y<<"\n";
}

int main()
{
	complex X, Y, Z;

	X.input();
	Y.input();
	Z=sum(X, Y);

	cout<<"First Complex Number  = ";
	X.show();
	cout<<"Second Complex Number = ";
	Y.show();
	cout<<"Sum                   = ";
	Z.show();

	return 0;

}
