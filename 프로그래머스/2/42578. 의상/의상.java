import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        if (clothes.length == 0) {
            return 0;
        }
        // 옷 종류 별 가짓 수
        Map<String, Integer> clothMap = new HashMap<>();
        
        for (String[] s : clothes) {
            // 종류
            String cloth = s[1];
            clothMap.put(cloth, clothMap.getOrDefault(cloth, 0) + 1);
        }
        
        int result = 1;
        for (int count : clothMap.values()) {
            result *= count + 1;
        }
        return result - 1;
        
    }
}