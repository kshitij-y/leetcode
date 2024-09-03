class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        vector<int> map(256, -1);
        int len = 0;
        int n = s.size();
        while(right < n){
            if(map[s[right]] != -1){
                left = max(map[s[right]]+1, left);
            }
            map[s[right]] = right;
            len = max(right-left + 1, len);
            right++;
        }
        return len;
    }
};
