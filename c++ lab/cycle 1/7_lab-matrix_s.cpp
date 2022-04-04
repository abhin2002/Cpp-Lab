#include<iostream>
using namespace std;
class matrix
{int **m;
int row,col;
public:
matrix()
{
}
matrix(int r,int c);
void getmatrix(int i,int j,int value)
{
m[i][j]=value;
}
void displaymatrix(int i,int j)
{cout<<"Displaying matrix:\n";
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
{
cout<<m[i][j]<<" ";
}cout<<endl;
}
}
void matrix_add(matrix &,matrix &);
void matrix_mult(matrix &,matrix &);
void matrix_transpose(matrix);
void matrix_trace(matrix);
/*~matrix()
{
for(int i=0;i<row;i++)
    {delete m[i];}
    delete m;
}*/
};
matrix::matrix(int r,int c)
{
row=r;
col=c;
m=new int *[row];
for(int i=0;i<row;i++)
{m[i]=new int [col];
}
}

void matrix::matrix_add(matrix &m1,matrix &m2)
{int i,j;
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
{m[i][j]=m1.m[i][j]+m2.m[i][j];
}
}
cout<<"Resultant matrix is:\n";
for(int i=0;i<row;i++)
{for(int j=0;j<col;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;
}
}
void matrix::matrix_mult(matrix &m3,matrix &m4)
{int i,j,k;
/*if(m3.col!=m4.row)
{cout<<"Matrix multiplication not possible\n";
 return;
 }
else*/
 row=m3.row;
 col=m4.col;
for(i=0;i<row;i++)
 for(j=0;j<col;j++)
{m[i][j]=0;
 for(k=0;k<col;k++)
  m[i][j]+=m3.m[i][k]*m4.m[k][j];
}
cout<<endl;
cout<<"Resultant matrix is:\n";
for(int i=0;i<row;i++)
{for(int j=0;j<col;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;
}
}
void matrix::matrix_transpose(matrix m5)
{int i,j;int trans;
cout<<"Resultant transpose matrix:\n";
row=m5.col;
col=m5.row;
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
{trans=m5.m[j][i];
cout<<trans<<" ";
}
cout<<endl;
}
}
void matrix::matrix_trace(matrix m6)
{int i,j;int trace=0;
row=m6.row;
for(i=0;i<row;i++)
{for(j=0;j<row;j++)
{if(i==j)
 {trace=trace+m6.m[i][j];
 cout<<endl;
 }
}
}
cout<<"Trace of matrix:";
cout<<trace;
}
int main()
{int ans;int row1,col1,row2,col2,i,j,value;
do{cout<<"\nMATRIX OPERATIONS\n";
cout<<"1.Addition of matrices\n";
cout<<"2.Matrix multiplication\n";
cout<<"3.Transpose of matrix\n";
cout<<"4.Trace of the matrix\n";
cout<<"Enter choice:\n";
cin>>ans;
switch(ans)
{
case 1:{cout<<"1.Add matrix:\n";
      cout<<"Enter rows and columns of the first matrix:\n";
      cin>>row1>>col1;
      matrix m1(row1,col1);
      cout<<"Enter first matrix elements:\n";
      for(i=0;i<row1;i++)
       {for(j=0;j<col1;j++)
        {cout<<"Enter["<<i+1<<"]["<<j+1<<"]element:";
        cin>>value;
        m1.getmatrix(i,j,value);
    
        }
       }
       m1.displaymatrix(i,j);
       cout<<"Enter rows and columns of second matrix:\n";
       cin>>row2>>col2;
       matrix m2(row2,col2);
       cout<<"Enter second matrix elements:\n";
       for(i=0;i<row2;i++)
        {for(j=0;j<col2;j++)
         {
          cout<<"Enter["<<i+1<<"]["<<j+1<<"]element:";
          cin>>value;
          m2.getmatrix(i,j,value);
          
         }
        }
        m2.displaymatrix(i,j);
       matrix M(row1,col1);
       if(row1==row2 && col1==col2)
         {cout<<"\nAddition of matrix:\n";
          M.matrix_add(m1,m2);
         }
      else
        cout<<"Matrix addition not possible!!\n";
      }break;
      
case 2:{cout<<"2.Multiplication of matrix:\n";
       cout<<"Enter rows and columns of the first matrix:\n";
       cin>>row1>>col1;
       matrix m3(row1,col1);
      cout<<"Enter first matrix elements:\n";
      for(i=0;i<row1;i++)
       {for(j=0;j<col1;j++)
        {cout<<"Enter["<<i+1<<"]["<<j+1<<"]element:";
         cin>>value;
        m3.getmatrix(i,j,value);
        
        }     
       }
       m3.displaymatrix(i,j);
 
       cout<<"Enter rows and columns of second matrix:\n";
       cin>>row2>>col2;
       matrix m4(row2,col2);

       cout<<"Enter second matrix elements:\n";
       for(i=0;i<row2;i++)
        {for(j=0;j<col2;j++)
         {cout<<"Enter["<<i+1<<"]["<<j+1<<"]element:";
         cin>>value;
         m4.getmatrix(i,j,value);
         }    
        }
        m4.displaymatrix(i,j);
      if(col1==row2)
        {matrix M(row1,col1);
        M.matrix_mult(m3,m4);
        }
      else
       {cout<<"Matrix multiplication not possible\n";}
       }break;
case 3:{cout<<"3.Transpose of the matrix:\n";
        cout<<"Enter rows and columns of a matrix:\n";
       cin>>row1>>col1;
       matrix m5(row1,col1);
       cout<<"Enter first matrix elements:\n";
       for(i=0;i<row1;i++)
        {for(j=0;j<col1;j++)
         {cout<<"Enter["<<i+1<<"]["<<j+1<<"]element:";
         cin>>value;
         m5.getmatrix(i,j,value);
         }
        }
        m5.displaymatrix(i,j);
        matrix M(row1,col1);
       M.matrix_transpose(m5);
       }break;
case 4:{cout<<"Enter size of a square matrix:\n";
      cin>>row1>>col1;
      matrix m6(row1,col1);
      if(row1==col1)
      {for(i=0;i<row1;i++)
     {for(j=0;j<row1;j++)
      {cout<<"Enter["<<i+1<<"]["<<j+1<<"]element:";
       cin>>value;
       m6.getmatrix(i,j,value);
      }
     }
     m6.displaymatrix(i,j);
     matrix M(row1,col1);
     M.matrix_trace(m6);
     cout<<endl;
     }
     else 
     cout<<"Trace cannot be calculated!\n";
     }break;
default:cout<<"Incorrect option!!\n";
}
}while(ans!=4);
return 0;
}