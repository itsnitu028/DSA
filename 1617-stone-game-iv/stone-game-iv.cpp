class Solution {
public:
    vector<int> t;

    bool solve(int n){
        if(n==0)
        return false;
        if(t[n]!=-1){
            return t[n]==1?true:false;
        }
        for(int k=1;k*k<=n;k++){
            if(solve(n-(k*k))==false){ //bob turn
                return t[n]=true;   //bob lost so alice won the game
            }
        }
        return t[n]=false;
    }
    bool winnerSquareGame(int n) {
        t.resize(n+1,-1);
        return solve(n); //alice turn
    }
};