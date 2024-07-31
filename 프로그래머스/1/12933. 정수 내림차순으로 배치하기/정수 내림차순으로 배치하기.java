import java.util.*;

class Solution {
    public long solution(long n) {
        String[] n_strings = (n + "").split("");
        Arrays.sort(n_strings, Comparator.reverseOrder());
        StringBuilder sb = new StringBuilder();
        for (String s : n_strings) {
            sb.append(s);
        }
        return Long.parseLong(sb.toString());
    }
}