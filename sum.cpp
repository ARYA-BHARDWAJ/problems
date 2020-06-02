#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> nums;
    int n, target;
    map<int, int> tmp;
    vector<int> ans;

    //size of array;
    cin >> n;


    //taking input in nums array
    while (n--)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    
    //target value 
    cin >> target;


    for (int i = 0; i < nums.size(); i++)
    {
        int key = target - nums[i];
        if (tmp.find(key) != tmp.end())
        {
            ans.push_back(tmp[key]);
            ans.push_back(i);
        }
        else
            tmp[nums[i]] = i;
    }

    //output
    for(auto i : ans){
        cout << i << " ";
    }
}