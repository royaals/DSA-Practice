
#include <iostream>

using namespace std;
# define n 5
 class stack{
    
    
    public:
    int top=-1;
    int a[n];
    
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        a[top]=x;
        
    }
    
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        top--;
    }
    
    int  Top(){
        if(top==-1){
            cout<<"stack is empty";
            return 0;
        }
        return a[top];
    }
    bool empty(){
      if(top==-1){
          return true;
      }
      return false;
    }
    
    void display(){
        if(top==-1){
            cout<<"stack underflow \n";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<a[i]<<" ";
        }
    }
 };

int main()
{
  stack b;
  b.push(3);
  b.push(4);
   b.push(5);
   b.push(6);
   b.display();
  cout<<b.Top()<<endl;
  b.pop();
  cout<<b.Top()<<endl;
  b.pop();
  cout<<b.Top()<<endl;
  b.pop();
  cout<<b.Top()<<endl;
  b.pop();
  b.pop();
   cout<<b.Top()<<endl;
  cout<<b.empty();

    return 0;
}



