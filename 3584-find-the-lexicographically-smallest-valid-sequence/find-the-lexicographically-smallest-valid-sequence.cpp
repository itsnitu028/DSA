class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<int> matchfromrighttoleft(n,0);
        vector<int> ans;

        int rightmatch=0;
        int i=n-1;
        int j=m-1;
        while(i>=0){
           if(j>=0&&word1[i]==word2[j]){
            rightmatch++;
            j--;
           }
           matchfromrighttoleft[i]=rightmatch;
           i--;
        }
        bool changepower=true; //can only change one character
        i=0;
        j=0;
        while(i<n && j<m){
            if(word1[i]==word2[j]){
                ans.push_back(i);
                j++;
            }else if(changepower&&i+1<n&&matchfromrighttoleft[i+1]>=m-j-1 ){
                ans.push_back(i);
                j++;
                changepower=false;
            }
            i++;
        }
        return j==m?ans:vector<int>();
    }
};