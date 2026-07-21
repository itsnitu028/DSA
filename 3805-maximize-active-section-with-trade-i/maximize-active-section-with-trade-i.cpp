class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int activeCount=0,n=s.length();
        vector<int> inactiveCount;
        activeCount=count(s.begin(),s.end(),'1');
        for(int i=0;i<n;i++){
          
            if(s[i]=='0'){
                  int start=i;
                  while(i < n && s[i] == '0')
                  i++;

                  inactiveCount.push_back(i-start);
            }else{
                continue;
            }
        }
        int maxPairSum = 0;
        //max(inactiveCount[i] + inactiveCount[i-1])
        for(int i = 1; i < inactiveCount.size(); i++) {
            maxPairSum = max(maxPairSum, inactiveCount[i] + inactiveCount[i-1]);
        }
        return activeCount+maxPairSum;
    }
};