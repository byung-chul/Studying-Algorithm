import java.util.*;

class Solution {
    public int solution(int[][] rectangle, int characterX, int characterY, int itemX, int itemY) {
        int answer = 0;
        int[][] map = new int[101][101];
        boolean[][] checked = new boolean[101][101];
        int[][] directions = {{-1, 0},{1, 0},{0, -1},{0, 1}};
        Queue<int[]> q = new LinkedList<>();
        
        for (int i = 0; i < rectangle.length; i++) {
            int lx = rectangle[i][0] * 2;
            int ly = rectangle[i][1] * 2;
            int rx = rectangle[i][2] * 2;
            int ry = rectangle[i][3] * 2;
            
            // 사각형 위아래 +1;
            for (int j = lx; j <= rx; j++) {
                for (int k = ly; k <= ry; k++) {
                    if (j == lx || j == rx || k == ly || k == ry) {
                        if (map[j][k] == 0) {
                            map[j][k] = 1;
                        }
                    } else{
                        map[j][k] = 2;
                    }
                }
            }
        }
        characterX *= 2;
        characterY *= 2;
        itemX *= 2;
        itemY *= 2;
        
        q.add(new int[] {characterX, characterY, 0});
        checked[characterX][characterY] = true;
        
        while (!q.isEmpty()) {
            int[] current = q.poll();
            int cx = current[0];
            int cy = current[1];
            int distance = current[2];
            
            if (cx == itemX && cy == itemY) {
                return distance / 2;
            }
            
            for (int[] direction : directions) {
                int nx = cx + direction[0];
                int ny = cy + direction[1];
                
                if (nx >= 0 && nx <= 100 && ny >= 0 && ny <= 100 && map[nx][ny] == 1 && !checked[nx][ny]) {
                    q.add(new int[]{nx, ny, distance + 1});
                    checked[nx][ny] = true;
                }
            }
        }
        
        return answer;
    }
}