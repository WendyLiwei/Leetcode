class Solution {
    public:
        int lengthOfLIS(vector<int>& nums) {
            vector<int> output(nums.size(),1);
            for(int i=1;i<nums.size();i++){
                for(int j=0;j<i;j++){
                    if(nums[j]<nums[i])
                        output[i]=max(output[i],output[j]+1);
                }
            }
            return *max_element(output.begin(), output.end());
        }
    };