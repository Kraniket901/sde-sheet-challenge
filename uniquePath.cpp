//dp
#include <bits/stdc++.h> 
int func(int n, int m, vector<vector<int>>&dp){
	if(n<0 || m<0){
		return 0;
	}
	if(n==0 && m==0){
		return 1;
	}
	if(dp[n][m]!=-1) return dp[n][m];
	int up = func(n-1,m,dp);
	int left = func(n,m-1,dp);
	return dp[n][m]=up+left;
}

int uniquePaths(int n, int m) {
	// Write your code here.
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return func(n-1,m-1,dp);
}

//formula
int uniquePaths(int n, int m) {
	// Write your code here.
	int N = n+m-2;
	int r = m-1;
	int res = 1;
	//finding ncr
	for(int i=1; i<=r; i++){
		res=res*(N-r+i)/i;
	}
	return res;
}