//@Code_joker->Rohit Kumar
//Optimal appraoch (Using Kadane's algorithm) Time : O(n)
Why? Because in one traversal we can find maximum size window subarray.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxsum=INT_MIN;
        int n =nums.size();
        int sum=0;
        if(n==1) return nums[0];
       for(int i=0; i<n; i++)
       {
          sum+=nums[i];
           maxsum=max(maxsum,sum);
          if(sum<0)
          {
             sum=0;
          }
         
       }
        return maxsum;
    }
};
