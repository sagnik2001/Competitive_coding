// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
		{


            arr[i][j]=a[i][j];
        }
        }
        	int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
        	int count=0;
	while(row_start<=row_end && col_start<=col_end)
	{
		// for row start
		for(int col=col_start;col<=col_end;col++)// 1 2 3
		{
			count++;// 3
			if(count==k)
			return arr[row_start][col];
		}
		row_start++;
		// for coloumn end
		for(int row=row_start;row<=row_end;row++)
		{

			count++;//4
			if(count==k)
			return arr[row][col_end];
		}
		col_end--;
		// for row end
		for(int col=col_end;col>=col_start;col--)
		{

			count++;
			if(count==k)
			return arr[row_end][col];
		}
		row_end--;
		// for coloumn start
		for(int row=row_end;row>=row_start;row--)
		{

			count++;
			if(count==k)
			return arr[row][col_start];
		}
		col_start++;
	}




    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";


    }
}  // } Driver Code Ends
