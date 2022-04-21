#include <iostream>
using namespace std;

class matrix{
	int **p;
	int d1,d2;
public:
	matrix(int x,int y){
		cout<<"\n\nCreates an array pointer and creates space for each row by constructor\n"<<endl;
		d1 = x;
		d2 = y;
		p = new int *[d1];
		for (int i = 0; i < d1; ++i) {
			p[i] = new int [d2];
		}
	}
	void get_data();
	void put_data();
	~matrix(){
		cout<<"\n\nMemory released using destructor\n\n"<<endl;
	}
};

void matrix::get_data(){
	cout<<"Enter the Elements Row by Row"<<endl;
	for (int i = 0; i < d1; ++i) {
		for (int j = 0; j < d2; ++j) {
			cin>>p[i][j];
		}
	}
}

void matrix::put_data(){
	for (int i = 0; i < d1; ++i) {
		for (int j = 0; j < d2; ++j) {
			cout<<p[i][j]<<"  ";
		}
		cout<<endl;
	}
}



int main() {
	int row,col;
	cout<<"Enter the rows and coloumns of the matrix"<<endl;
	cin>>row>>col;
	matrix m(row,col);
	m.get_data();
	cout<<"\n\nMATRIX : \n";
	m.put_data();
	return 0;
}