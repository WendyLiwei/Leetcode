class Solution {
    public:
        vector<int> countBits(int n) {
            vector <int>output(n+1,0);
            for(int i=1;i<=n;i++){
                if(i%2==0)
                    output[i]=output[i/2];
                else
                    output[i]=output[i-1]+1;
            }
            return output;
        }
    };