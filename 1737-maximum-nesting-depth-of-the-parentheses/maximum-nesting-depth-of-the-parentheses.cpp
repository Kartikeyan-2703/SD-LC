class Solution {
public:
    int maxDepth(string s) {
        int curr = 0, maxDepth = 0;

        for (char c : s) {
            if (c == '(') {
                curr++;
                maxDepth = max(maxDepth, curr);
            } 
            else if (c == ')') {
                curr--;
            }
        }
        return maxDepth;
    }
};
