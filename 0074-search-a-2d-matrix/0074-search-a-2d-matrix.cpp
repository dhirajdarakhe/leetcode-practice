class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int target) {
       int n = mt.size();
        int m = mt[0].size();
        int low = 0, high = n -1;
         int mid = 0;
        mid = (low+high)/2;
        while(high>=low)
        {   
            int R = mt[mid][0];
            if(R == target) return 1;
            if(R > target) high = mid - 1;
            else low = mid + 1;
            mid = ( low + high ) / 2;
        }
        cout<<mid<<" mid"<<endl;
        low=mid;
        int lo = 0;
        int hi = m-1;
        int md = (lo+hi)/2;
        while(lo<=hi)
        {    
              cout<<lo<<" "<<hi<<" "<<mt[low][md]<<" "<<md<<endl;
            if(mt[low][md] == target) return true;
            else if(mt[low][md] < target) lo = md+1;
            else hi = md-1;
            md = (lo+hi)/2;
        }
        return false;
    }
};