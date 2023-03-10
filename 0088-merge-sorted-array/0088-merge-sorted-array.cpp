class Solution {
public:
    void merge(vector<int>& nm1, int m, vector<int>& nm2, int n) {
     
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i >= 0 && j >= 0)
        {
            if (nm1[i] >= nm2[j]) 
            {  
                nm1[k] = nm1[i];
                nm1[i] = 0;
                i--;
                k--;
            }
            else
            {
                nm1[k] = nm2[j];
                nm2[j] = 0;
                j--;
                k--;
            }
        }
        while(i >= 0) 
        {      
                nm1[k] = nm1[i];
                i--;
                k--;  
        }
        while(j >= 0)
        {
                nm1[k] = nm2[j];
                nm2[j] = 0;
                j--;
                k--;
        }
    }
};