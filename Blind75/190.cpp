class Solution {
    public:
        uint32_t reverseBits(uint32_t n) {
            uint32_t output=0;
            for(int i=0;i<32;i++){
                int reverse=n&1;            //把最右邊抓出來
                output=(output<<1)|reverse; 
                n=n>>1;
            }
            return output;
        }
    };