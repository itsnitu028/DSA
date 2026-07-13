class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue <int> q;
        for(int i=1;i<=8;i++){
            q.push(i);
        }
        vector<int> result;
        while(!q.empty()){
            int num=q.front();
            q.pop();
          
            if(num>=low&&num<=high){
                result.push_back(num);
            }
            int last_digit=num%10;
            if(last_digit+1<=9){
                q.push((10*num)+(last_digit+1));
            }

        }
        return result;
    }
};