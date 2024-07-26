import java.util.*;

class Solution {
    public String solution(String bin1, String bin2) {
        String answer = "";
        int first = 0;
        int second = 0;
        for (int i = bin1.length() - 1; i >= 0; i--) {
            if (bin1.charAt(i) == '1') {
            	first += Math.pow(2, bin1.length() - 1 - i);
            }
        }
        for (int i = bin2.length() - 1; i >= 0; i--) {
            if (bin2.charAt(i) == '1') {
                second += Math.pow(2, bin2.length() - 1 - i);
            }
        }
        return Integer.toBinaryString(first + second);
    }
}