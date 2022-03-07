#include <iostream>
#include <cstring>

using namespace std;

class String
{
	char *str;
	int length;
public:
	String(){
		length=0;
		str=new char[length+1];
	}
	String(const char *s)
	{
		length=strlen(s);
		str = new char[length+1];
		strcpy(str,s);
	}
	void get_string(){cin>>str;}
	void display(){cout<<str<<endl;}
	void concate(String a,String b);
	void stlength();
	void compare(String s1,String S2);
};

void String::concate(String a,String b)
{
	length=a.length+b.length;
	delete str;
	str=new char[length+1];
	strcpy(str,a.str);
	strcat(str,b.str);
}

void String::stlength()
{
	count<<strlen(str);
}

void String::compare(String s1, String s2)
{
	int m,n;
	m=strlen(s1.str);
	n=strlen(s2.str);
	if(m<=n)
		cout<<s1.str<<" is smaller than "<<s2.str<<"\n";
	else
		cout<<s1.str<<" is smaller than "<<s2.str<<"\n";
}

int main()
{
	String Str1, Str2, Str3;
	cout<<"Enter the first string : ";
	Str1.get_string();
	cout<<"\nEnter second string : ";
	Str2.get_string();
	cout<<"First string : ";
	Str1.display();
	cout<<"Second Sttring is : ";
	Str2.display();
	Str3.concate(Str1,Str2);
	cout<<"After concatination : ";
	Str3.display();
	cout<<"\nLength of first string : ";
	Str1.stlength();
	cout<<"\nlength of second string : ";
	Str2.stlength();
	cout<<"\nLength of concatenated string : ";
	Str3.stlength();
	cout<<"Comparison of string : ";
	Str3.compare(Str1,Str2);
	return 0;

}
