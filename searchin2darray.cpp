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
     j=col-1;
    int ele;
    cin>>ele;
    while(j>=0){
        if(ele==arr[i][j]){
            cout<<i<<" "<<j;
            exit(0);
        }
        else if(ele<arr[i][j]){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"not found";
    return 0;
}    
    