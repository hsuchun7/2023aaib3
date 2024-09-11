// LeetCode 2220.
//使用大一教過的[剝皮法]
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start>0 || goal>0){
            if(start%2 != goal%2) ans++;
            start /= 2;
            goal /= 2;
        }
        return ans;
    }
};