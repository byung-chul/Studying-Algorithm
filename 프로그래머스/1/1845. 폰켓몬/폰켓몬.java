import java.util.*;

class Solution {
    public int solution(int[] nums) {
        Set<Integer> ponketmon = new HashSet<>();
        for (int i : nums) {
            ponketmon.add(i);
        }
        return ponketmon.size() < (nums.length / 2) ? ponketmon.size() : nums.length / 2;
    }
}