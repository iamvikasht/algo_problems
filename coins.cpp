#include<iostream>
#include<map>
using namespace std;
long long maxSum(long long money,map<long long,long long> &dict){
if(money<12){
    return money;
   }
   else{
       long long sum;
    if(dict.count(money)){
        sum=dict.at(money);
        return sum;
    }
    else{
        sum=max(money,(maxSum(money/2,dict)+maxSum(money/3,dict)+maxSum(money/4,dict)));
          dict[money]=sum;
         return sum;
        }
   }
}
int main(){
long long n;
while (cin>>n)
{  
    map <long long,long long>  dict;
     long long sum=maxSum(n,dict);
     cout<<sum<<endl;
}

}