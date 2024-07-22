import java.util.*;

class Solution {
    public String solution(String s) {
        int[] char_count = new int[26];
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            char_count[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if(char_count[i] != 1) {
                continue;
            }
            sb.append(Character.toString((char) ('a' + i)));
        }
        //String[] sa = sb.toString().split("");
        //Arrays.sort(sa);
        
        //sb.setLength(0);
        //for (String split_s : sa) {
        //    sb.append(split_s);
        //}
        return sb.toString();
    }
}