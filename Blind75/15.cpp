class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result;
            sort(nums.begin(),nums.end());
            for(int first=0;first<nums.size()-2;first++){
                if (first > 0 && nums[first] == nums[first - 1]) 
                continue;
                int snd=first+1;
                int trd=nums.size()-1;
                while(trd>snd){
                    int sum=nums[first]+nums[snd]+nums[trd];
                    if(sum==0){
                        result.push_back({nums[first], nums[snd], nums[trd]});
                        while (snd < trd && nums[snd] == nums[snd + 1]) 
                            snd++;
                        while (snd < trd && nums[trd] == nums[trd - 1]) 
                            trd--;
                        snd++;
                        trd--;
                    }
                    else if(sum<0)
                        snd++;
                    else
                        trd--;
                }
            }
            return result;
        }
    };