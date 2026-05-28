class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        int cnt=0;
        vector<int> lastSmall(26,-1);
        vector<int> firstCap(26,-1);
  
        for(int i=0;i<n;i++){
            char ch=word[i];
            
           if(islower(ch)){
            lastSmall[ch-'a']=i;
           }else{
            if(firstCap[ch-'A']==-1){
                firstCap[ch-'A']=i;
            }
           }
        }
        for(int i=0;i<26;i++){
            if(lastSmall[i]!=-1&&firstCap[i]!=-1&&lastSmall[i]<firstCap[i]){
                cnt++;
            }  
        }
        return cnt;

    }
};