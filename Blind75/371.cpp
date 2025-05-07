class Solution {
    public:
        int getSum(int a, int b) {
            while(b!=0){ //until no carry
                int carry= (a&b)<<1;
                a=a^b;
                b=carry;
            }
            return a;
        }
    };