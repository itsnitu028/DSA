class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> temp(arr);
        
        sort(temp.begin(),temp.end());
        int rank=1;
        unordered_map<int,int> mp;
        vector<int> result(n);
        for(int i=0;i<n;i++){
             if(i > 0 && temp[i] > temp[i-1]) {
                rank++;
            }
            mp[temp[i]]=rank;
        }
         for(int i = 0; i < n; i++) {
            result[i] = mp[arr[i]];
        }
        return result;
    }
};