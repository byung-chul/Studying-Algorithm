import java.io.*;
import java.util.*;

public class Main {

    private static List<List<Integer>> graph;
    private static boolean[] visited;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int number = Integer.parseInt(br.readLine());
        int connect = Integer.parseInt(br.readLine());
        graph = new ArrayList<>();
        visited = new boolean[number + 1];

        for (int i = 0; i <= number; i++) {
            graph.add(new ArrayList<>());
        }
        for (int i = 0; i < connect; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int first = Integer.parseInt(st.nextToken());
            int second = Integer.parseInt(st.nextToken());
            graph.get(first).add(second);
            graph.get(second).add(first);
        }

        System.out.println(bfs(1));
    }

    public static int bfs(int start) {
        Queue<Integer> queue = new LinkedList<>();
        int count = 0;

        queue.add(start);
        visited[start] = true;

        while (!queue.isEmpty()) {
            int current = queue.poll();

            for (int adjacent : graph.get(current)) {
                if (!visited[adjacent]) {
                    queue.add(adjacent);
                    visited[adjacent] = true;
                    count++;
                }
            }
        }
        return count;
    }
}