class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>> ans;
      int f = 0;
      int l = 0;
      int k = 0;
      sort(intervals.begin(), intervals.end());
      for(auto x : intervals)
      {   
            cout<<x[0]<<" "<<x[1]<<endl;
            if(k == 0)
            {
                f = x[0];
                l = x[1];
                k++;
            }
            else
            {
                if(l >= x[0]){ l = max(l, x[1]); f = min(f, x[0]);}
                else
                {
                    cout<<f<<"f"<<endl;
                    vector<int> ans1;
                    ans1.push_back(f);
                    ans1.push_back(l);
                    ans.push_back(ans1);
                    f = x[0];
                    l = x[1];
                }
            }
      }  
        vector<int> ans1;
      ans1.push_back(f);
                    ans1.push_back(l);
                    ans.push_back(ans1);
                    return ans;
    }
};