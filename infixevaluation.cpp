
//infix evaluation
#include <iostream>
#include<stack> 
#include<string.h>
#include<ctype.h>
using namespace std;

int precedence(char ch){
    if(ch=='+'|| ch=='-'){
        return 1;
    }
    else if(ch=='*'||ch=='/'){
        return 2;
    }
    else{
        return 0;
    }
}

int operation(int v1,int v2,char ch){
    if(ch=='+'){
        return v1+v2;
    }
    else if(ch=='-'){
        return v1-v2;
        
    }
    else if(ch=='*'){
        return v1*v2;
        
    }
    else if(ch=='/'){
       return v1/v2; 
    }
    else{
    return 0;
    }
}

int main()
{    string expresion;
    getline(cin,expresion);
    stack<char> opera;
    stack<int> operend;
    
    for(int i=0;i<expresion.size();i++){
         char ch=expresion.at(i);
        if(ch=='('){
            opera.push(ch);
        }else if(ch==')'){
            while(opera.top()!='('){
                char opt=opera.top();
                opera.pop();
                int var2=operend.top();
                operend.pop();
                int var1=operend.top();
                operend.pop();
                int eval1=operation(var1,var2,opt);
                operend.push(eval1);
            }
            opera.pop(); //'('
        }
        else if(isdigit(ch)){
            operend.push(ch);
        }
        else if(ch=='+'||ch=='-'|| ch=='*'||ch=='/'){
        while(operend.size()!=0 && opera.top()!='(' && precedence(ch)<=precedence(opera.top())){
             char operat=opera.top();
                opera.pop();
                int vari2=operend.top();
                operend.pop();
                int vari1=operend.top();
                operend.pop();
                int evalu= operation(vari1,vari2,operat);
               
                operend.push(evalu);
        }
        opera.push(ch);
        }
            
        }
        while(opera.size()!=0){
                char opter=opera.top();
                opera.pop();
                int variab2=operend.top();
                operend.pop();
                int variab1=operend.top();
                operend.pop();
                int evalua=operation(variab1,variab2,opter);
                operend.push(evalua);
            }
            cout<<operend.top();
         return 0;
    }
   




