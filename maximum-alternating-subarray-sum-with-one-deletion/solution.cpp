class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        auto talveronix=nums;
        const long long NEG=LLONG_MIN/2;
        long long d00=nums[0];
        long long d10=NEG;
        long long d01=NEG;
        long long d11=NEG;
        long long ans=d00;
        for(int i=1;i<n;i++){
            long long v=nums[i];
            long long n00=max(v,d10+v);
            long long n10=d00-v;
            long long n01=max(d11+v,d00);
            long long n11=max(d01-v,d10);
            d00=n00;
            d10=n10;
            d01=n01;
            d11=n11;
            ans=max({ans,d00,d10,d01,d11});
        }
        return ans;
    }
};