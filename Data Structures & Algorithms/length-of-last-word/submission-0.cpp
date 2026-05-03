class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,i=s.size()-1;
        while(s[i]==' ') i--;
        while(isalpha(s[i])){
            ans++;
            i--;
        }
        return ans;
    }
};