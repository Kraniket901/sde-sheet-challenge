class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt = 0;
        int right = 0;
        int left = 0;
        vector<int>m(256,-1);
        while(right < s.size()){
            if(m[s[right]]!=-1) left = max(left, m[s[right]]+1);
            m[s[right]]=right;
            cnt=max(cnt, right-left+1);
            right++;
        }
        return cnt;
    }
};