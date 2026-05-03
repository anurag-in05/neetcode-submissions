class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        sort(s.rbegin(),s.rend());
        if(s[s.size()-1]=='1') return s;
        for(int i=n-2;i>=0;i--){
            if(s[i]=='1'){
                swap(s[i],s[n-1]);
            }
        }
        return s;
    }
};