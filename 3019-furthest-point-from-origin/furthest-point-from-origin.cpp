class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        int l=0,r=0,notlr=0;
        for(int i=0;i<moves.length();i++){
              if(moves[i]=='L'){
                l++;
              }
              if(moves[i]=='R'){
                r++;
              }
        }
        notlr=n-(l+r);
        if(l==r){
            return notlr;
        }
        else{
            return abs(l-r)+notlr;
        }
    }
};