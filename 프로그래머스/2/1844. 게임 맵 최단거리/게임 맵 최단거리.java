import java.util.*;

class Solution {
    public int solution(int[][] maps) {
        int n = maps.length;
        int m = maps[0].length;
        boolean[][] checked = new boolean[n][m];
        Queue<int[]> q = new LinkedList<>();
        int[][] directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        q.add(new int[] {0, 0, 1});
        checked[0][0] = true;
        
        while (!q.isEmpty()) {
            // 현재 위치
            int[] current = q.poll();
            int x = current[0];
            int y = current[1];
            int dist = current[2];
            if (x == n-1 && y == m-1) {
                // 끝 지점 도달
                return dist;
            }
            
            for (int[] direction : directions) {
                int nx = x + direction[0];
                int ny = y + direction[1];
                
                if (nx >= 0 && nx < n && ny >= 0 && ny < m
                   && maps[nx][ny] == 1
                   && !checked[nx][ny]) {
                    q.add(new int[] {nx, ny, dist+1});
                    checked[nx][ny] = true;
                }
            }
        }
        
        return -1;
    }
}