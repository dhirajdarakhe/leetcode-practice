class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        map<char,int> mp;
        int ans = 0;
        int mx = 0;
        int n = s.size();
        int j =0;
        for(int i = 0; i < n; ++i)
        {
            while(mp[s[i]]==1)
            {
                mp.erase(s[j]);
                j++;
                ans--;
            }
            mp[s[i]]=1;
            ans++;
            mx=max(mx, ans);
        }
        return mx;
    }
    
};