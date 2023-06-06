//gfg
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
        int i=0;
	    int j=M-1;
	    while(i<N && j>=0) {
	        if(mat[i][j] == X) return 1;
	        else {
	            if(X < mat[i][j]) j--;
	            else if(X > mat[i][j]) i++;
	        }
	    }
	    return 0;
	}
};

//lc
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start = 0;
        int end = (n*m) - 1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(matrix[mid/m][mid%m] == target) return true;
            if(matrix[mid/m][mid%m] > target) end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};