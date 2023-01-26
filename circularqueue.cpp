
#include <iostream>
#define n 5
using namespace std;
 class queue{
   public:
   int front =-1;
   int rear=-1;
   int size=0;
   int arr[n];
   void add(int item){
       if(size==n){
           cout<<"queue overflow";
           return;
       }
       
       
       rear=(front+size)%n;
       arr[rear]=item;
       size++;
       if(front==-1){
           front++;
       }
   }
      void pop(){
          if(size==0){
              cout<<"no ele";
              return;
          }
          front++;
          size--;
      }
      
      int Size(){
          return size;
      }
      
      int top(){
          if(size==0){
              cout<<"no ele ";
              return 0;
          }
          return arr[front];
      }
      
      bool  isempty(){
          if(size ==0){
              return true;
          }
          return false;
      }
      
      void display(){
          for(int i=0;i<n;i++){
              int idx=(front+i)%n;
              cout<<arr[idx];
          }
          cout<<endl;
         
      }
 };

int main()
{
    queue q;
    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);
    
    
    
    q.display();
    q.pop();
    q.pop();
    cout<<q.Size()<<endl;
    q.display();
    cout<<q.isempty()<<endl;
     cout<<q.top();

    return 0;
}




