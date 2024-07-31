import java.util.*;

class Solution {
    public int[] solution(long n) {
        int length = 0;
        ArrayList<Integer> digit = new ArrayList<>();
        while (n > 0) {
            length++;
            digit.add((int)(n%10));
            n = n / 10;
        }
        int[] answer = new int[length];
        for (int i = 0; i < length; i++) {
            answer[i] = digit.get(i);
        }
        return answer;
    }
}