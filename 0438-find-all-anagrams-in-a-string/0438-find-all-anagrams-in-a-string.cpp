class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    
        // // map< char , int > mp;
        // sort(p.begin(), p.end());
        // vector<int> ans;
        // for(int i =0 ; i + p.size() <= s.size(); ++i)
        // {     
        //        string k = s.substr(i, p.size());
        //        sort(k.begin(), k.end());
        //        if( p == k) ans.push_back(i);
        // }
        // return ans;
        
        
        // map< char , int > mp, kp;
        // vector<int> ans;
        // for(int i = 0; i < 26; ++i) mp[i + 'a'] = 0;
        // for(int i = 0; i < 26; ++i) kp[i + 'a'] = 0;
        // for(auto x : p) mp[x]++;
        // for(int i = 0; i < s.size(); ++i)
        // {
        //     kp[s[i]]++;
        //     if(i >= p.size())
        //     {
        //        kp[s[i-p.size()]]--;
        //        // if(kp[s[i-p.size()]]==0) kp.erase(s[i-p.size()]);
        //     }
        //     if(kp==mp) ans.push_back(i-p.size()+1);
        // }
        // return ans;
        
        vector<int> mp(26), kp(26);
        vector<int> ans;
        for(int i = 0; i < 26; ++i) mp[i] = 0;
        for(int i = 0; i < 26; ++i) kp[i] = 0;
        for(auto x : p) mp[x - 'a']++;
        for(int i = 0; i < s.size(); ++i)
        {
            kp[s[i] - 'a']++;
            if(i >= p.size())  kp[s[i-p.size()] - 'a']--;
            if( kp == mp ) ans.push_back(i-p.size()+1);
        }
       
        return ans;
    }
};