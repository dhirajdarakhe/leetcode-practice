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
  
    for(int i = 0; i < n; i+=0)
    {   
         if(arr[i] != -1 && arr[i] != i) swap(arr[i], arr[arr[i]]);
         else i++;
    }
    return arr;
   
    

}
