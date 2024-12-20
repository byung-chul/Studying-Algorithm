import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        Stack<Integer> s = new Stack<>();
        for (int i = 0; i < arr.length; i++) {
            if(s.isEmpty() || s.peek() != arr[i]) {
                s.push(arr[i]);
            }
        }
        
        return s.stream().mapToInt(Integer::intValue).toArray();
    }
}