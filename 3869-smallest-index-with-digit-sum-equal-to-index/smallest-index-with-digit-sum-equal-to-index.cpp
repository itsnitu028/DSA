class Solution {
public:
    int sumofdig(int n){
        int sum=0,rem=0;
        while(n){
            rem=n%10;
            sum+=rem;
            n=n/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1,sum=0;
        for(int i=0;i<n;i++){
           sum= sumofdig(nums[i]);
            if(sum==i){
                ans=i;
                return i;
            }
        }
        return ans;
    }
};