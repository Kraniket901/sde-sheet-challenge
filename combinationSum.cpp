class Solution {
public:
void func(int ind, vector<int>& candidates, int target, vector<vector<int>>&res, vector<int>&v){
    if(ind==candidates.size()){
        if(target==0){
            res.push_back(v);
        }
        return;
    }
    if(target>=candidates[ind]){
        v.push_back(candidates[ind]);
        func(ind, candidates, target-candidates[ind], res, v);
        v.pop_back();
    }
    func(ind+1, candidates, target, res, v);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>res;
         vector<int>v;
         func(0, candidates, target, res, v);
         return res;
    }
};