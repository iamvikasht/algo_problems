#include<iostream>
using namespace std;
bool isInputvalid(float input[3]){
    if(input[0]==0 && input[1]==0 && input[2]==0){
        return false;
    }
    else 
    return true;
}

void evaluateSeries(float input[3]){
    float nextDigit;
    if(input[1]*input[1]==input[0]*input[2]){//b/a==c/b
       float ratio=input[1]/input[0];
       nextDigit = ratio*input[2];
       cout<<"Gp "<<nextDigit<<endl;
    }
    else{
        float d = input[1]-input[0];
        nextDigit=input[0]+3*d;
        cout<<"AP "<<nextDigit<<endl;
    }

}

int main(){
    float input[3];
    cin>>input[0]>>input[1]>>input[2];
     while(isInputvalid(input)){
      evaluateSeries(input);
       cin>>input[0]>>input[1]>>input[2];
  }
  return 0;
}