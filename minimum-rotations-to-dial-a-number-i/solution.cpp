class Solution {
public:
    int minRotations(string s) {
        int cur=0;
        int ans=0;
        for(char c : s){
            int nx=c-'0';
            int dif=abs(cur-nx);
            ans+=min(dif,10-dif);
            cur=nx;
        }
        return ans;
    }
};