class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int outputProduct=nums[0];
            int maxProduct=nums[0];
            int minProduct=nums[0];
            for(int i=1;i<nums.size();i++){
                int preMax=maxProduct;
                int preMin=minProduct;
                maxProduct=max(max(nums[i],nums[i]*preMax),nums[i]*preMin);
                minProduct=min(min(nums[i],nums[i]*preMin),nums[i]*preMax);
                outputProduct=max(maxProduct,outputProduct);
            }
            return outputProduct;
        }
    };