class Solution {
public:
    int maxDepth(string s) {
        int l=0,ans=0;
        for(auto it:s){
            if(it=='(') l++;
            else if(it==')') l--;
            ans=max(ans,l);
        }
        return ans;
    }
};