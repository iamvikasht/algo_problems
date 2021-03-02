#include<iostream>
using namespace std;
int main(){
int n,i=1,j=1;
cin>>n;
int count =0;
 for ( i=1 ; i <= sqrt(n); i++)
 {
     for (j = i+1; j*i<=n ; j++)
     {
       count++;
     }
 }
 count += sqrt(n);
 cout<<count<<endl;
 
}