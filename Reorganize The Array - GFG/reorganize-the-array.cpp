//{ Driver Code Starts
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int * Rearrange(int *arr,int n);

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *b = Rearrange(a,n);
	    for(int i=0;i<n;i++)
	        cout << b[i] <<" ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


int * Rearrange(int *arr,int n){
  
      int i = 0;
    while (i < n) {
        int correct = arr[i];
        if (arr[i] != -1 && arr[i] != arr[correct]) {
          // if array element should be lesser than
          // size and array element should not be at
          // its correct position then only swap with
          // its correct position or index value
            swap(arr[i], arr[correct]);
        }
        else {
          // if element is at its correct position
          // just increment i and check for remaining
          // array elements
            i++;
        }
    }
    return arr;
   
    

}
