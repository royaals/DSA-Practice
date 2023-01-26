#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    int num;
    cout<<"Enter the string size ";
    cin>>num;
     char exp[num];
     cout<<"Enter a reverse polish notation"<<endl;
     for(int i=0;i<num;i++){
        cin>>exp[i];
     }     
     stack<int> s;
     int op1,op2,result;
     for(int i=0;i<num;i++)
     {
        if(exp[i]=='+'){
            op2=s.top();
            s.pop();
            op1=s.top();
            s.pop();
            result=op1+op2;
            s.push(result);
        }
        else if(exp[i]=='-'){
            op2=s.top();
            s.pop();
            op1=s.top();
            s.pop();
            result=op1-op2;
            s.push(result);
        
        }
        else if(exp[i]=='*'){
            op2=s.top();
            s.pop();
            op1=s.top();
            s.pop();
            result=op1*op2;
            s.push(result);
        }
        else if(exp[i]=='/'){
            op2=s.top();
            s.pop();
            op1=s.top();
            s.pop();
            result=op1/op2;
            s.push(result);
        }
        else {
            
            s.push(exp[i]-'0');
        }
     }
     cout<<s.top();
    return 0;
}


