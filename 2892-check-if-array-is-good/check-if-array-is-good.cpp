class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0)
        return 0;
        unordered_map<int,int> um;
        for(auto it:nums){
            um[it]++;
            if(um[it]==2){
                if(it!=n){
                return 0;
                }
            }
        }
       for(int i=1;i<=n-1;i++){
        if(um[i]!=1)
        return 0;
       }
       return um[n]==2;
    }
};