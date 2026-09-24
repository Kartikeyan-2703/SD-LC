class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int r = 0;
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        while (r < nums.size()) {
            if (nums[r] == 0) {
                sum = sum - 1;
            }
            else {
                sum = sum + 1;
            }
            if (mp.find(sum) != mp.end()) {
                int previousIndex = mp[sum];
                int length = r - previousIndex;
                if (length > ans) {
                    ans = length;
                }
            }
            else {
                mp[sum] = r;
            }
            r++;
        }
        return ans;
    }
};