class Solution
{
public:
void func(vector<int>&arr, int N, int ind, int sum, vector<int>&res){
    if(ind==N){
        res.push_back(sum);
        return;
    }
    func(arr, N, ind+1, sum+arr[ind], res);
    func(arr, N, ind+1, sum, res);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum = 0;
        vector<int>res;
        func(arr, N, 0, sum, res);
        return res;
    }
};