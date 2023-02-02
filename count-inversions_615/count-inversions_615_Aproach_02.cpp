#include <bits/stdc++.h> 




// Time Complexity: O(N log(N)),  
// Auxiliary Space: O(n), 
// for more info https://www.geeksforgeeks.org/merge-sort/


long long merge_sort(vector<long long> &v, vector<long long> &temp, long long low, long long mid, long long high)
{
    long long i = low;
    long long j = mid;
    long long k = low;
    long long ans = 0;
    while (i <= mid - 1 && j <= high)
    {
        if (v[i] < v[j])
            temp[k++] = v[i++];
        else
            {
                temp[k++] = v[j++];
                ans += mid - i;
            }
    }
    while (i <= mid - 1)
        temp[k++] = v[i++];
    while (j <= high)
        temp[k++] = v[j++];
    for (long long l = low; l <= high; ++l)
        v[l] = temp[l];
    return ans;
}
long long  merge(vector<long long> &v, vector<long long> &temp, long long low, long long high)
{   long long ans = 0;
    if (low >= high)
        return 0;
    long long mid = (low + high) / 2;
    ans += merge(v, temp, low, mid);
    ans += merge(v, temp, mid + 1, high);
    ans += merge_sort(v, temp, low, mid + 1, high);
    return ans;
}
long long getInversions(long long *arr, long long n){
  
    vector<long long> v(n), temp(n);
    long long ans = 0;
    for(long long i = n-1; i >= 0; --i) v[i] = arr[i];
    return merge(v, temp, 0, n-1);
}
