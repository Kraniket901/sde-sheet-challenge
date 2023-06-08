class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int num : nums){
            s.insert(num);
        }
        int a = 0;
        for(int num : nums){
            if(!s.count(num - 1)){
                int temp = num;
                int b = 1;
                while(s.count(temp + 1)){
                    temp++;
                    b++;
                }
                a = max(a, b);
            }
        }
        return a;
    }
};