class Solution {
public:
    int f(int W,vector<int>& wt, int D)
    {
        int total = 0;
        int day = 1;
        for(int i =0;i <wt.size(); ++i)
        {
            if(wt[i]>W) return 0;
            if(total+wt[i]<=W) total += wt[i];
            else
            {
                total=wt[i];
                day++;
            }
        }
        return (day <= D);
    }
    int shipWithinDays(vector<int>& wt, int D) {
        
        int low = 1;
        int high = 500 * 5 * 1e4;
        int mid = 0;
        while(low < high)
        {
            if(f(mid, wt, D))  high = mid;
            else low = mid + 1;
            mid = (low + high)/2;
        }
        return mid;
    }
};