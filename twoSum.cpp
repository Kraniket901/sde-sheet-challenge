// to find all possible pairs
vector<vector<int>> pairSum(vector<int> &arr, int s) {

  int cnt = 0;

  vector<vector<int>> ans;

  unordered_map<int, int> mp;

  for (int i = 0; i < arr.size(); i++) {

    if (mp[s - arr[i]]) {

      int val = mp[s - arr[i]];

      vector<int> output;

      while (val--) {

        output.push_back(min(arr[i], s - arr[i]));

        output.push_back(max(arr[i], s - arr[i]));

        ans.push_back(output);
      }
    }

    mp[arr[i]]++;
  }

  sort(ans.begin(), ans.end());

  return ans;
}

//to return only one pair index
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
    }
};

//to return to return true and false
string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}