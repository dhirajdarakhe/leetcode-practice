class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx1 = n - 2;
        for(; idx1 >= 0 && nums[idx1] >= nums[idx1+1]; --idx1);
        cout<<idx1<<" idx1 ";
        if(idx1 >= 0)
        {
            int idx2 = n - 1;
            for(; idx2 > idx1 && nums[idx2] <= nums[idx1]; --idx2);
            cout<<idx2<<" idx2 ";
            swap(nums[idx1], nums[idx2]);
        }
        reverse(nums.begin()+idx1+1 , nums.end());
    }
};