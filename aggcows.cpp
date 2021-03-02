#include<iostream>
#include<vector>
using namespace std;

bool canplacecow(int64_t mid,int64_t c,vector<int64_t> points,int64_t n){
int64_t last=points.at(0),placed=1;
for (size_t i = 1; i < n; i++)
{
    if(points.at(i)-last>=mid){
        last=points.at(i);
        placed++;
    }
     if(placed==c){
            return true;
        }
}
    return false;

}
int main(){
int t;
cin>>t;
while(t--){
    int64_t n,c;
    cin>>n>>c;
    vector<int64_t> points;
    for(int i=0;i<n;i++){
        int64_t point;
        cin>>point;
        points.push_back(point);
    }
   sort(points.begin(),points.end());
   int64_t min_low=0,min_hi=points.at(n-1)-points.at(0),min_mid;
   while(min_hi-min_low>1){
    min_mid=min_low + (min_hi-min_low)/2;
    if(canplacecow(min_mid,c,points,n)){
        min_low=min_mid;
    }
    else{
        min_hi=min_mid;
    }
   }
   cout<<min_low<<endl;

}
return 0;
}