class Solution {
public:
    int n;
    // int t[100001];
    // tle for memoization so apply dp
    // int solveMem(int i,vector<int>& prefix){
    //      if(i==n-1){
    //         return prefix[n-1];
    //      }
    //      if(t[i]!=-1)
    //      return t[i];
    //      int take=prefix[i]-solveMem(i+1,prefix);
    //      int skip=solveMem(i+1,prefix);
    //      return t[i]=max(take,skip);
    // }
    int stoneGameVIII(vector<int>& stones) {
       n=stones.size();
       vector<int> prefixSum(n,0);
       prefixSum[0]=stones[0];
       for(int i=1;i<n;i++){
          prefixSum[i]=stones[i]+prefixSum[i-1];
       }
    //    memset(t,0,sizeof(t));
    //    int ans= solveMem(1,prefixSum);
     int best=prefixSum[n-1];
      for(int i=n-2;i>=1;i--){
        int take=prefixSum[i]-best;
        int skip=best;
        best=max(take,skip);
      }
    //    return ans;
    return best;
    }
};