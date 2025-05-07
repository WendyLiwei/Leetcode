class Solution {
    public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> output(nums.size(),1);
    
        int left=1;
        for(int i=0;i<nums.size();i++){
            output[i]=output[i]*left;
            left=left*nums[i];
        }
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            output[i]=output[i]*right;
            right=right*nums[i];
        }
        return output;
    }
    /*        
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> outputs(n);
            for (int i = 0; i < n; i++) {
                int product = 1;
                for (int j = 0; j < n; j++) {
                    if (j != i) 
                        product *= nums[j];
                }
                outputs[i] = product;
            }
            return outputs;
        } */
    
    };