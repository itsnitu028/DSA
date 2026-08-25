class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> um(nums.begin(), nums.end());
        int curr=k;
        while(um.find(curr) != um.end()){
            curr+=k;
        }
        return curr;
    }
};