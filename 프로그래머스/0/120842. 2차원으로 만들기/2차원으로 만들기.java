import java.util.*;
class Solution {
    public int[][] solution(int[] num_list, int n) {
        int one_dimension_size = num_list.length / n;
        int index = 0;
        int[][] answer = new int[one_dimension_size][n];
        
        for (int i = 0; i < one_dimension_size; i++) {
            for (int j = 0; j < n; j++) {
            	answer[i][j] = num_list[index++];
            }
        }
        return answer;
    }
}