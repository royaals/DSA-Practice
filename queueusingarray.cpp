
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
       rear++;
       size++;
       arr[rear]=item;
       if(front==-1){
           front++;
       }
   }
      void pop(){
          if(front==-1 || front>rear){
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
          return arr[front];
      }
      
      bool  isempty(){
          if(front==-1 ||front>rear){
              return true;
          }
          return false;
      }
      
      void display(){
          for(int i=front;i<=rear;i++){
              cout<<arr[i]<<" ";
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
    
    
    cout<<q.Size()<<endl;
    q.display();
    q.pop();
    q.pop();
    cout<<q.Size()<<endl;
    q.display();
    cout<<q.isempty()<<endl;
     cout<<q.top();

    return 0;
}



