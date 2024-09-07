import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        Map<String, Integer> completionMap = new HashMap<>();
        for (String c : completion) {
            completionMap.put(c, completionMap.getOrDefault(c, 0) + 1);
        }
        for (String p : participant) {
            if (completionMap.get(p) == null || completionMap.get(p) == 0) {
                return p;
            }
            completionMap.put(p, completionMap.get(p) - 1);
        }
        return "";
    }
}