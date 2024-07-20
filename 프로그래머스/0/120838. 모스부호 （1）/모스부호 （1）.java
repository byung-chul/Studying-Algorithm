import java.util.*;

class Solution {
    public String solution(String letter) {
        List<String> morse = Arrays.asList(".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..");
        StringBuilder sb = new StringBuilder();
        String[] split_letter = letter.split(" ");
        for (String c : split_letter) {
            sb.append((char) (97 + morse.indexOf(c)));
        }
        return sb.toString();
    }
}