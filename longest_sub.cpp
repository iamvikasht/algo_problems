#include<iostream>
#include<vector>
using namespace std;

  int maxLen(vector<int>& nums,int index,int prev,vector<int>&memo){
        if(nums.size()-1<=index){
            return 1;
        }
        else{int taken=0;
            if(prev<nums[index]){
                 taken=maxLen(nums,index+1,nums[index],memo)+1;
            }
            int notSelected=maxLen(nums,index+1,prev,memo);
            memo[index]= max(taken,notSelected);
             return memo[index];
        }
    }

  int lengthOfLIS(vector<int>& nums) {
        vector<int>memo;
        memo.assign(nums.size(),0);
        memo[nums.size()-1]=1;
       return maxLen(nums,0,-1000000,memo);
    }
    
    
    int main(){

    vector<int> nums;
     int arr[]={10,9,2,5,3,7,101,18};   
     
     for(int i=0;i<6;i++){
       nums.push_back(arr[i]);
     } 
     cout<<lengthOfLIS(nums)<<endl;
     return 0;
    }