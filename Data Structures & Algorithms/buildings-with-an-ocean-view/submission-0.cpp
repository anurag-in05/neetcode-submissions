class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> ans;
        int n=heights.size(),t=heights[n-1];
        ans.push_back(n-1);
        for(int i=n-2;i>=0;i--){
            if(t<heights[i]){
                t=heights[i];
                ans.push_back(i);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};