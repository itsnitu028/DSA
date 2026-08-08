class Solution {
public:
    int findprod(int n){
        int prod=1;
        while(n){
            prod=prod * (n%10);
            if(prod==0)
            return 0;

            n/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int num=n;num<=n+10;num++){
            if(findprod(num)%t==0)
            return num;
        }
        return -1;
    }
};