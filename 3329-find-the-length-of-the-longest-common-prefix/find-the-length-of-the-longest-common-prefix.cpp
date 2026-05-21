class Solution {
public:
    int digits(int x){
        int cnt=0;
        while(x>0){
            cnt++;
            x/=10;
        }
        return cnt;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;
        int ans=0;
        for(auto val:arr1){
            while(!st.count(val) && val>0){
                st.insert(val);
                val=val/10;
            }
        }
           for(auto val:arr2){

            int len=digits(val);
            while(val>0){
                if(st.count(val)){
                    ans=max(ans,len);
                    break;
                }
                val/=10;
                len--;
            }
        }
        return ans;
    }
};