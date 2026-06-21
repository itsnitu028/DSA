class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
         sort(costs.begin(),costs.end());
        int ans=0;
        vector<int> v; 
        if(coins>costs[0])
        {
        for(int i=0;i<costs.size()&&coins!=0;i++)
        {
            if(coins-costs[i]>=0)
            {
                ans++;
                coins=coins-costs[i];
            }
            else break;
        }
        }
        return ans;
    }
};