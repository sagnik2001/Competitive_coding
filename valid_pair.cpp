// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


class Solution{

    public:
    long long ValidPair(int a[], int n)
    {
    	// Your code goes here
  sort(a,a+ n);//-2 1 3
    int i = 0;
    int j = n -1;
    long long count=0;

    while (i < j)//0<2
    {

       if(a[i] + a[j] <= 0)
         i = i+1;
       else{
           count+=j-i;
           j--;

       }

    }
    return count;



    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0;
}

  // } Driver Code Ends
