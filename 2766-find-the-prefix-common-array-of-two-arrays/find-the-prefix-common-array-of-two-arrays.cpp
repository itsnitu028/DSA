class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         int n=A.size();
        int count=0;
        unordered_map<int,int> um;
        vector<int> ans;
        for(int i=0;i<n;i++){
            um[A[i]]++;
            if(um[A[i]]==2)
            count++;
            um[B[i]]++;
            if(um[B[i]]==2)
            count++;
            ans.push_back(count);
        }
        return ans;
    }
};