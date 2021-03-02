#include<iostream>
using namespace std;
void printGraph(pair<int,int>cordinates){
    if((cordinates.first-cordinates.second!=2 &&cordinates.first-cordinates.second!=0 )|| cordinates.second>cordinates.first)
        {
        cout<<"No Number"<<endl;
        return;
        }
    int result = (cordinates.first==cordinates.second)? 0 : 2 ;
        for (size_t i = 1 ; i <= cordinates.second; i++)
        {
            if(i%2==0){
                result += 3;
            }
            else
            {
                 result +=1 ;
            }
        }
        cout<<result<<endl;
        return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        pair<int,int>cordinates;
        cin>>cordinates.first>>cordinates.second;
        printGraph(cordinates);
    }
    return 0;
}