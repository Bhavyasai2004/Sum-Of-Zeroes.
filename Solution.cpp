#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int o=mat.size();
    int ans=0;
    for(int i=0;i<o;i++)
    {
        int in=mat[i].size();
        for(int j=0;j<in;j++)
        {
            //cout << mat[i][j] << " ";
            if(mat[i][j]==0)
            {
                if(i-1>=0 && mat[i-1][j]==1)
                ans++;
                if(i+1<o && mat[i+1][j]==1)
                ans++;
                if(j-1>=0 && mat[i][j-1]==1)
                ans++;
                if(j+1<in && mat[i][j+1]==1)
                ans++;

                
            }
        }
        

    }
    return ans;
}
