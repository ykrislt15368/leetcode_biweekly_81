class Solution {
public:
    int countAsterisks(string s) {
        
        int n=s.size();
        
        int ans=0;
        
        bool as=true;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='|') as=!as;
            else
            {
                if(as && s[i]=='*') ans++;
            }
        }
        return ans;
        
    }
};
