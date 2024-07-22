import java.util.*;

class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        int[] array_include_n = new int[array.length + 1];
        for (int i = 0; i < array_include_n.length - 1; i++) {
            array_include_n[i] = array[i];
        }
        array_include_n[array_include_n.length - 1] = n;
        Arrays.sort(array_include_n);
        
        int index_n = -1;
        for (int i = 0; i < array_include_n.length; i++) {
            if(array_include_n[i] == n) {
                index_n = i;
            }
        }
        
        if (index_n == 0) {
            return array_include_n[1];
        } else if (index_n == array_include_n.length - 1) {
            return array_include_n[array_include_n.length - 2];
        }
        int left_diff = n - array_include_n[index_n - 1];
        int right_diff = array_include_n[index_n + 1] - n;
        return left_diff > right_diff ? array_include_n[index_n + 1] : array_include_n[index_n - 1];
    }
}