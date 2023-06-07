class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1;
        int el2;
        int c1=0;
        int c2=0;
        for(int i=0; i<nums.size(); i++){
            if(c1==0 && el2!=nums[i]){
                c1++;
                el1=nums[i];
            }else if(c2==0 && el1!=nums[i]){
                c2++;
                el2=nums[i];
            }else if(el1==nums[i]){
                c1++;
            }else if(el2==nums[i]){
                c2++;
            }else{
                c1--;
                c2--;
            }
        }
        vector<int>v;
        int cnt1=0;
        int cnt2=0;
        for(int i=0; i<nums.size(); i++){
            if(el1==nums[i]){
                cnt1++;
            }
            if(el2==nums[i]){
                cnt2++;
            }
        }
        int mini = (int)(nums.size()/3)+1;
        if(cnt1>=mini) v.push_back(el1);
        if(cnt2>=mini) v.push_back(el2);
        return v;
    }
};