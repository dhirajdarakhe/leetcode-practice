// https://www.codingninjas.com/codestudio/problems/615?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0


#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    set<long long> st;
    long long ans = 0;
    for(long long i = n-1; i >= 0; --i)
    {  
         st.insert(arr[i]);
        auto id = st.lower_bound(arr[i]);
        long long num = distance(st.begin(), id);
        ans += num;
    }
   return ans;
}
