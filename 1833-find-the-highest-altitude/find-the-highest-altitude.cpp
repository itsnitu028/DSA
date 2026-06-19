class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int ans=0;
        for(int i=0;i<gain.size();i++){
                maxi+=gain[i];
                ans=max(maxi,ans);
                
              
        }
        return ans;
    }
};