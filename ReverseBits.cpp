#Reverse bits of a given 32 bits unsigned integer.

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        int i;
        for(i = 0; i < 32; i++) {
            if( n & 1 ) {
                ret |=  1 << ( 31 - i );                
            }
        n >>= 1;
        }
        
        return ret;
    }
};
