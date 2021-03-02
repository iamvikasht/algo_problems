#include<iostream>
#include<stack>
using namespace std;
 
void PrintStack(stack<char> s)
{
    // If stack is empty then return
    if (s.empty()) 
        return;
     
 
    char x = s.top();
 
    // Pop the top element of the stack
    s.pop();
 
    // Recursively call the function PrintStack
    PrintStack(s);
 
    // Print the stack element starting
    // from the bottom
    cout << x << " ";
 
    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}

void ONP(string exp){
  stack<char> algexp;
  stack<char> result;
  int count=0;
for(char x : exp){
    if(x=='*'|| x == '/' || x =='-' || x=='+'|| x== '%' || x=='^'){
      algexp.push(x);
    }
    else if(isalpha(x)){
        result.push(x);
    }
    else if(x=='(')
    count++;
    else if(x==')'){
     count--; 
     char ex=algexp.top();
     algexp.pop();
     result.push(ex);
    }
}
 PrintStack(result);
}

int main(){
    string exp="((a+t)*((b+(a+c))^(c+d)))";
    ONP(exp);
}