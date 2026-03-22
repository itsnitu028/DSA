class Solution {
public:
    void rotate(vector<vector<int>>& mat){
        //problem 1886
        //how to rotate step 1 :transpose step 2 :reverse row
        //transpose
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        //reverse row
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for(int c=1;c<=4;c++){   //360 degree=4 rotation
            bool equal=true;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(mat[i][j]!=target[i][j]){
                       equal=false;
                       break;
                    }
                }
                if(!equal){
                    break;
                }
               
            }
             if(equal)
                return true;

                rotate(mat);
        }
        return false;
    }
};