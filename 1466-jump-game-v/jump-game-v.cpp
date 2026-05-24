class Solution {
public:
    int n;
    int solveMem(vector<int>& arr, int i,int d,vector<int>& dp){
        if(dp[i]!=-1)
        return dp[i];
        int res=1;
        //left
        for(int j=i-1;j>=max(0,i-d);j--){
            if(arr[j]>=arr[i])
            break;
            res=max(res,1+solveMem(arr,j,d,dp));
        }

            //right
        for(int j=i+1;j<=min(n-1,i+d);j++){
            if(arr[j]>=arr[i])
            break;
            res=max(res,1+solveMem(arr,j,d,dp));
        }
        return dp[i]=res;
    }
    int maxJumps(vector<int>& arr, int d) {
        n=arr.size();
        vector<int> dp(n+1,-1);
        int ans=1;
        for(int i=0;i<n;i++){
            ans=max(ans,solveMem(arr,i,d,dp));
        }
        
        return ans;
    }
};