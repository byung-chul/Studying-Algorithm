import java.io.*;
import java.util.*;

public class Main {

    private static int[][] map;
    private static boolean[][] visited;
    private static int[] dx = { -1, 1, 0, 0 };
    private static int[] dy = { 0, 0, -1, 1 };

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        map = new int[n][m];
        visited = new boolean[n][m];

        for (int i = 0; i < n; i++) {
            String input = br.readLine();
            for (int j = 0; j < m; j++) {
                map[i][j] = input.toCharArray()[j] - '0';
            }
        }
        System.out.println(bfs(n, m));
    }

    public static int bfs(int n, int m) {
        Queue<int[]> queue = new LinkedList<>();

        queue.add(new int[] { 0, 0 });
        visited[0][0] = true;

        while (!queue.isEmpty()) {
            int[] current = queue.poll();
            int cx = current[0];
            int cy = current[1];
            if (cx == n - 1 && cy == m - 1) {
                return map[cx][cy];
            }
            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && map[nx][ny] == 1) {
                    queue.add(new int[] { nx, ny });
                    visited[nx][ny] = true;
                    map[nx][ny] = map[cx][cy] + 1;
                }
            }
        }
        return -1;
    }
}