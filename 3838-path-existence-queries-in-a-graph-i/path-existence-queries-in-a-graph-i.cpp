
 class DSU{
        vector<int> parent;
        public: 
        DSU(int n){
            parent.resize(n);
            for(int i=0;i<n;i++){
              parent[i]=i;
            }
        }

        int find(int x){
            if(parent[x]==x)
            return x;

            return parent[x]=find(parent[x]);
        }
        void Union (int x, int y) {
             int x_parent = find(x);
	         int y_parent = find(y);

             if(x_parent == y_parent)
	          return;
	        
            parent[y_parent]=x_parent;
	
        }
    };
class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        
        DSU dsu(n);
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        vector<bool> result(queries.size(),false);
        pair<int,int> top=pq.top();
        pq.pop();
        while(!pq.empty()){
            pair<int,int> secondtop=pq.top();
            pq.pop();
            if(top.first-secondtop.first<=maxDiff){
                dsu.Union(top.second,secondtop.second);
            }
            top=secondtop;
        }
        for(int i=0;i<queries.size();i++){
            int one=queries[i][0];
            int second=queries[i][1];
            if(dsu.find(one)==dsu.find(second))
            result[i]=true;
        }
        return result;

    }
};