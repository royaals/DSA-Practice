

#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    int i,j;
    for( i=0;i<row;i++){
        for( j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
      i=0;
      j=0;
     while(j<col){
         
         if(j%2==0){
         i=0;
         while(i<row){
             cout<<arr[i][j]<<" ";
             i++;
             
         }
         
      }else{
          i=row-1;
          while(i>=0){
              cout<<arr[i][j]<<" ";
              i--;
          }
      }
      j++;
     }
    return 0;
}


