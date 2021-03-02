#include<iostream>
#include<string>
using namespace std;

    bool containRepeating(int current,int start,string s){
        for(int i=start;i<current;i++){
            for(int j=i+1;j<current;j++){
                if(s.at(i)==s.at(j))
                    return true;
            }
        }
        return false;
    }
    int lengthOfLongestSubstring(string s) {
        int max_so_far=0;
        int max_till=0;
        int start_index=0;
        for(int i=1;i<s.length();i++){
            if(containRepeating(i,start_index,s)){
                max_till=1;
                start_index=i;
            }
            else{
                max_till++;
            }
            if(max_till>max_so_far){
                max_so_far=max_till;
            }
        }
        return max_so_far;
    }
    int main(){
        string s="aaa";
        int res =lengthOfLongestSubstring(s);
        cout<<res<<endl;
        return 1;
    }