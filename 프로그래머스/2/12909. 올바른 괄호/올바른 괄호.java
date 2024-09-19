import java.util.*;

class Solution {
    boolean solution(String s) {
        Stack<Character> cs = new Stack<>();
        
        for (char c : s.toCharArray()) {
            if (c == ')') {
                if(cs.isEmpty()) {
                    return false;
                }
                cs.pop();
            } else {
                cs.add(c);
            }
        }
        return cs.isEmpty();
    }
}