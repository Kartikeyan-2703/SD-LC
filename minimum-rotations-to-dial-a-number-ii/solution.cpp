class Solution {
public:
    int minRotations(int n, string s) {
        auto dist=[](int a, int b){
            int d=abs(a-b);
            return min(d,10-d);
        };
        int tot=dist(0,s[0]-'0');
        for(int i=1;i<n;i++){
            tot+=dist(s[i-1]-'0', s[i]-'0');
        }
        int ans=tot;
        int cur=tot-dist(0,s[0]-'0')+dist(0,s[n-1]-'0');
        ans=min(ans,cur);
        for(int k=1;k<n;k++){
            int old=dist(s[k-1]-'0',s[k]-'0');
            int newc=dist(s[k-1]-'0',s[n-1]-'0');
            int cur=tot-old+newc;
            ans=min(ans,cur);
        }
        return ans;
    }
};