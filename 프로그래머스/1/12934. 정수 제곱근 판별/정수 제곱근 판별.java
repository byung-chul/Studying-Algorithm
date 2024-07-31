import java.util.*;

class Solution {
    public long solution(long n) {
        for (long i = 0; i <= Math.sqrt(n); i++) {
            if(i * i == n) {
                return (i+1) * (i+1);
            }
        }
        return -1;
    }
}