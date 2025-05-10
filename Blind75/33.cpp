class Solution {
    public:
        int search(vector<int>& nums, int target) {
            vector<int> newNums = nums;    // 複製一份
            sort(newNums.begin(), newNums.end());  // 對複製品排序（in-place）
            int i=0, k=newNums.size()-1, output;
            while(i<=k){
                int m = (i+k)/2;
                if(newNums[m]==target){
                    for(int j=0;j<nums.size();j++){
                        if(nums[j]==newNums[m])
                            return j;
                    }
                }
                else if(newNums[m]>target)
                    k=m-1;
                else
                    i=m+1;
            }
            return -1;
        }
    };