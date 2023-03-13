//   https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=striver-sde-sheet-problems&leftPanelTab=0


#include <bits/stdc++.h> 
void sortStack(stack<int> &s)
{
	// Write your code here

	stack<int> st;
	while(!s.empty())
	{
		int t = s.top();
		s.pop();
		while(!st.empty() && st.top() > t)
		{
				s.push(st.top());
				st.pop();
	    }st.push(t);		
	}
	s = st;
}
