class Solution {
    public:
        int findMin(vector<int>& nums) {
            while(nums[0]>nums[nums.size()-1]){
                int k = nums[0];
                for(int i=0;i<nums.size()-1;i++){
                    nums[i]=nums[i+1];
                }
                nums[nums.size() - 1]=k;
            }
            return nums[0];
        }
    };