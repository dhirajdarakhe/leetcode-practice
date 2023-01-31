
//https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ct(A.size()+1, 0), ans;
    for(auto x : A)  ct[x]++;
    for(int i = 1; i <= A.size(); ++i) if(ct[i] == 2) ans.push_back(i);
    for(int i = 1; i <= A.size(); ++i) if(ct[i] == 0) ans.push_back(i);
    return ans;
}
