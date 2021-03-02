#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxHotness(vector<int> men, vector<int> women)
{      
     sort(men.begin(), men.end());
     sort(women.begin(),women.end());
     int sum=0;
     for (size_t i = 0; i < men.size(); i++)
     {
         sum += men.at(i)*women.at(i);
     }
     cout<<sum<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        int loop = len;
        vector<int> men;
        vector<int> women;
        while (loop--)
        {
            int input;
            cin >> input;
            men.push_back(input);
        }
        loop = len;
        while (len--)
        {
            int input;
            cin >> input;
            women.push_back(input);
        }
        maxHotness(men, women);
    }
}


