class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       
        stack <int> st;
        int n = nums.size();
        vector<int> ans(n);
        for(int  i = (2 * n)-1; i >= 0; --i)
        {  
            while(!st.empty() && st.top() <= nums[i%n])st.pop();
            if(i < n && st.empty()) ans[i%n] = -1;
            else if(i < n && st.size()) ans[i%n] = st.top();
            st.push(nums[i%n]);
        }
        return ans;
    }
};