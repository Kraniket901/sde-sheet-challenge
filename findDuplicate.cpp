class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        } return slow;
    }
};

//gfg
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        set<int>s;
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                s.insert(arr[i]);
            }
        }
        if(s.empty()) s.insert(-1);
        vector<int>v(s.begin(), s.end()); // to insert set into vector
        return v;
    }
};