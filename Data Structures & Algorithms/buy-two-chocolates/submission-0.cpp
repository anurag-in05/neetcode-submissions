class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mine=INT_MAX,mine2=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(mine>prices[i]){
                mine2=mine;
                mine=prices[i];
            }
            else if(mine2>=prices[i]){
                mine2=prices[i];
            }
        }
        if(money<mine+mine2) return money;
        money-=(mine+mine2);
        return money;
    }
};