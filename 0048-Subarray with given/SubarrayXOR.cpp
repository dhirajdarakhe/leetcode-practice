https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    map<int, int> mp;
    int ct = 0, ans = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        ct ^= A[i];
        if(ct==B) ans++;
        if(mp.find(ct^B) != mp.end()) ans += mp[ct^B];
        mp[ct]++;
    }
    return ans;
}
