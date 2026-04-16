class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        vector<int> result;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]].push_back(i);
        }
        for(int i=0;i<queries.size();i++){
            int ele=nums[queries[i]];
            vector<int> &vec=mp[ele];
            int sz=vec.size();
            if(sz==1){
                result.push_back(-1);
                continue;
            }
             int pos = lower_bound(begin(vec), end(vec), queries[i])- begin(vec)  ; //log(n)
            int res = INT_MAX;

            //Right Neighbour - pos+1
            int right = vec[(pos+1)%sz];
            int d = abs(queries[i] - right);//straught forqward distance
            int circularDist = n-d;
            res = min({res, d, circularDist});


            //Left Neighbour - pos-1
            int left = vec[(pos-1+sz)%sz];
            d = abs(queries[i] - left);//straught forqward distance
            circularDist = n-d;
            res = min({res, d, circularDist});

            result.push_back(res);


        }
        return result;
    }
};