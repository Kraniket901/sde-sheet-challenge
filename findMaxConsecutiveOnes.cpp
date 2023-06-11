//lc
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
          cnt++;
        } else {
          cnt = 0;
        }

        maxi = max(maxi, cnt);
      }
      return maxi;
    }
};

//gfg
int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0,j=0;
    for( i=0;i<n;i++){
        if(arr[i]==0){
        k--;
        }
        if(k<0 && arr[j++]==0){
            k++;
        }
    }
    return i-j;
}
