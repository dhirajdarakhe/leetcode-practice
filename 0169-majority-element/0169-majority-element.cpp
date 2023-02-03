class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // o(nlogn)
//         sort(nums.begin(), nums.end());
//         int mx = INT_MIN;
//         int ans = 0;
//         int ct = 0;
//         int i = 0;
//        for( i=1;i<nums.size();++i)
//        {
//            if(nums[i-1] == nums[i]) ct++;
//            else{
//                if(ct >= nums.size()/2)
//                {
//                    ans = nums[i-1];
                   
//                }
//                ct =0;
//            }
//        }
//               if(ct >= nums.size()/2)
//                {
//                    ans = nums[i-1];
                   
//                }
//         return ans;
         // o(n)
        int ct = 0;
        int element = 0;
        for(auto x : nums)
        {
            if(ct) 
            {
               if(element==x) ct++;
                else ct--;
            }
            else 
            {
                ct++;
                element=x;
            }
        }
        return element;
        
    }
};