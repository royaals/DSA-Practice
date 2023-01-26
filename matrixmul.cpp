// matrix multiplication
#include <iostream>

using namespace std;

int main()
{
    int row1,col1,row2,col2;
    cout<<"Enter the rows and column of first matrix";
    cin>>row1>>col1;
    cout<<"Enter the rows and column of second matrix";
    cin>>row2>>col2;;
    int a[row1][col1];
    cout<<"enter the elements of first matrix";
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of second matrix";
    int b[row2][col2];
    int c[row1][col2]; 
    for(int i=0;i<row2;i++){
       for(int j=0;j<col2;j++){
           cin>>b[i][j];
       }   
    }
    if(col1!=row2){   //2*3 3*4 3=3
        cout<<" multiplication is not possible";
        
    }
    else{
        int c[row1][col2];
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                for(int k=0;k<col1;k++){    //col1=row2;
                    c[i][j]=a[i][k]*b[k][j];
                }
            }
            
        }
    }
    
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

