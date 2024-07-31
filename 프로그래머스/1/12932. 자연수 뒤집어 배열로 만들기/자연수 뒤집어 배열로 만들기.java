import java.util.*;

class Solution {
    public int[] solution(long n) {
        String[] n_string = (n + "").split("");
        int[] answer = new int[n_string.length];
        for (int i = 0; i < n_string.length; i++) {
            answer[i] = Integer.parseInt(n_string[n_string.length - 1 - i]);
        }
        return answer;
    }
}