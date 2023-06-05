//90 cw
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

//90 ac
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<(n/2); i++){
            for(int j=0; j<n; j++){
                swap(matrix[i][j], matrix[n-1-i][j]);
            }
        }
    } 
};

//non 90 cw
class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> Mat) {
        // code here
               int left = 0, right = N-1, top = 0, bottom = M-1;
        while(left < right && top < bottom){
            int prev = Mat[top+1][left];
            
            for(int i=left;i<=right;i++) swap(prev, Mat[top][i]);
            top++;
            
            for(int i=top;i<=bottom;i++) swap(prev, Mat[i][right]);
            right--;
            
            for(int i=right;i>=left;i--) swap(prev, Mat[bottom][i]);
            bottom--;
            
            for(int i=bottom;i>=top;i--) swap(prev, Mat[i][left]);
            left++;
        }
        return Mat;
    }
};