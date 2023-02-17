//infix conversions
#include <iostream>
#include<stack>
#include<string.h>
#include<climits>
using namespace std;
int precedence(int ch){
    if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else{
        return 0;
    }
        
    
}

int main()
{
    string expression;
    getline(cin,expression);
    cin.ignore(INT_MAX,'\n');
    stack<char> oper;
    stack<string> prefix;
    stack<string> postfix;
    for(int i=0;i<expression.length();i++){
        char ch=expression.at(i);
        
        if(ch=='('){
            oper.push(ch);
        }
        else if((ch>='0' && ch<='9')||(ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')){
            prefix.push(ch+""); //char to string
            postfix.push(ch+"");
        }
        else if(ch==')'){
            while(oper.top()!='('){
                char opt=oper.top();
                oper.pop();
                string p1=prefix.top();
                prefix.pop();
                string p2=prefix.top();
                prefix.pop();
                string preans=opt+p1+p2;
                prefix.push(preans);
                
                
                string pos1=postfix.top();
                postfix.pop();
                string pos2=postfix.top();
                postfix.pop();
                string posans=pos1+pos2+opt;
                postfix.push(posans);
                
            }
            oper.pop();//'('
        }
        else if(ch=='+' || ch=='-'|| ch=='*' || ch=='/'){
            while(oper.size()!=0 && oper.top()!='(' && precedence(ch)<=precedence(oper.top())){
                char opt=oper.top();
                oper.pop();
                string p1=prefix.top();
                prefix.pop();
                string p2=prefix.top();
                prefix.pop();
                string preans=opt+p1+p2;
                prefix.push(preans);
                
                
                string pos1=postfix.top();
                postfix.pop();
                string pos2=postfix.top();
                postfix.pop();
                string posans=pos1+pos2+opt;
                postfix.push(posans);
                
            }
        }
    }
    while(oper.size()!=0){
                char opt=oper.top();
                oper.pop();
                string p2=prefix.top();
                prefix.pop();
                string p1=prefix.top();
                prefix.pop();
                string preans=opt+p1+p2;
                prefix.push(preans);
                
                
                string pos2=postfix.top();
                postfix.pop();
                string pos1=postfix.top();
                postfix.pop();
                string posans=pos1+pos2+opt;
                postfix.push(posans);
    }
    cout<<prefix.top();
    cout<<postfix.top();
    return 0;
}



