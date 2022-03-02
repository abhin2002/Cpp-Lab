#include <iostream>
using namespace std;

class complex
{
	float a, b;
public:
	complex(){};
	complex(float x) {a=b=x;}
	complex(float real, float imaginary)
	{
		a=real; b=imaginary;
	}

	friend complex sum(complex, complex);
	friend void show(complex);
};


complex sum(complex c1, complex c2)
{
	complex c3;
	c3.a = c1.a + c2.a;
	c3.b = c1.b + c2.b;
	return c3;
}

void show(complex c)
{
	cout << c.a <<" + j" << c.b<<endl;
}


int main(){

	float a, b;
	cout <<"Enter the real part of complex number";
    cin >>a;
	cout <<"Enter the imaginary part of complex number";
	cin >>b;

	float c, d;
	cout <<"Enter the real part of complex number";
	cin >>c;
	cout <<"Enter the imaginary part of complex number";
	cin >>d;



	complex X, Y, Z;
	X = complex(a,b);
	Y = complex(c,d);
	Z = sum(X,Y);

	cout << "X : ";
	show(X);
	cout << "Y : ";
	show(Y);
	cout << "Z : ";
	show(Z);
}
