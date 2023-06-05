class Solution {
private:
    vector<int> findRow(int row){
        vector<int>thisRow;
        thisRow.push_back(1);
        int ans = 1;
        for(int col = 1; col<row; col++){
            ans = ans * (row-col);
            ans = ans / col;
            thisRow.push_back(ans);
        }
        return thisRow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int i=1; i<=numRows; i++){
            res.push_back(findRow(i));
        }
        return res;
    }
};