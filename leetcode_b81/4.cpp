class Solution {
public:
    int dp[10001][7][7];
    int distinctSequences(int n,int p=0,int pp=0) {
        if(n==0) return 1;
        
        if(!dp[n][p][pp])
            for(int k=1;k<7;k++)
               if(k!=p && k!=pp && (gcd(p,k) ==1 || p==0)) 
                 dp[n][p][pp]=(dp[n][p][pp]+distinctSequences(n-1,k,p))%1000000007;
        return dp[n][p][pp];
    }

};
