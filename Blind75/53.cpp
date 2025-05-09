class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int currentMax=nums[0];
            int outputMax=nums[0];
            for(int i=1;i<nums.size();i++){
                if(currentMax+nums[i]>nums[i])
                    currentMax=currentMax+nums[i];
                else
                    currentMax=nums[i];
                outputMax=max(currentMax,outputMax);
            }
            return outputMax;
        }
    };