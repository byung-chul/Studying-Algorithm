import java.util.*;

class Solution {
    public int solution(int n, int[][] computers) {
        int answer = 0;
        boolean[] checked = new boolean[n];
        
        for (int i = 0; i < n; i++) {
            if (!checked[i]) {
                bfs(n, computers, checked, i);
                answer++;
            }
        }
        return answer;
    }
    
    private void bfs(int n, int[][] computers, boolean[] checked, int start) {
        Queue<Integer> q = new LinkedList<>();
        q.add(start);
        checked[start] = true;
        
        while (!q.isEmpty()) {
            int current = q.poll();
            for (int i = 0; i < n; i++) {
                if (computers[current][i] == 1 && !checked[i]) {
                    q.add(i);
                    checked[i] = true;
                }
            }
        }
        
    }
}