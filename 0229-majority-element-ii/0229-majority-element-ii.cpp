class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct1= 0;
        int ct2 = 0;
        int n1 = -1;
        int n2 = -1;
        for(auto x : nums)
        {   
            if(n1 == x) ct1++;
            else if(n2 == x) ct2++;
            else if(ct1 == 0) {n1 = x; ct1++;}
            else if(ct2 == 0) { n2 = x; ct2++;}
            else {
                ct1--;
                ct2--;
            }
        }
        ct1=0;ct2=0;
        for(auto x : nums)
        {
            if(x == n1) ct1++;
            if(x == n2) ct2++;
        }
        vector<int> ans;
        cout<<ct1<<" "<<ct2<<endl;
        if(ct1>nums.size()/3 ) ans.push_back(n1);
        if(ct2>nums.size()/3 && n1 != n2) ans.push_back(n2);
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         map<int, int> m;
//         vector<int> ans;
//         for(auto x : nums) m[x]++;
//         for(auto x : m) if(x.second > nums.size()/3) ans.push_back(x.first);
//         return ans;
//     }
// };