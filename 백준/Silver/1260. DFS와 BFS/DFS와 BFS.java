import java.io.*;
import java.util.*;

public class Main {

    private static List<List<Integer>> graph;
    private static boolean[] visited;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int v = Integer.parseInt(st.nextToken());
        int e = Integer.parseInt(st.nextToken());
        int start = Integer.parseInt(st.nextToken());
        graph = new ArrayList<>();

        for (int i = 0; i < v + 1; i++) {
            graph.add(new ArrayList<>());
        }

        for (int i = 0; i < e; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int from = Integer.parseInt(st.nextToken());
            int to = Integer.parseInt(st.nextToken());
            graph.get(from).add(to);
            graph.get(to).add(from);
        }

        for (int i = 0; i < graph.size(); i++) {
            Collections.sort(graph.get(i));
        }

        visited = new boolean[v + 1];
        dfs(graph, start);

        Arrays.fill(visited, false);
        bfs(graph, start);
    }

    public static void bfs(List<List<Integer>> graph, int start) {
        Queue<Integer> queue = new LinkedList<>();
        StringBuilder sb = new StringBuilder();

        queue.add(start);
        visited[start] = true;

        while (!queue.isEmpty()) {
            int next = queue.poll();
            sb.append(next).append(" ");
            for (int adjacent : graph.get(next)) {
                if (!visited[adjacent]) {
                    queue.add(adjacent);
                    visited[adjacent] = true;
                }
            }
        }

        System.out.println(sb.toString());
    }

    public static void dfs(List<List<Integer>> graph, int start) {
        Stack<Integer> stack = new Stack<>();
        StringBuilder sb = new StringBuilder();

        stack.push(start);

        while (!stack.isEmpty()) {
            int next = stack.pop();
            if (!visited[next]) {
                visited[next] = true;
                sb.append(next).append(" ");
                for (int i = graph.get(next).size() - 1; i >= 0; i--) {
                    int adjacent = graph.get(next).get(i);
                    if (!visited[adjacent]) {
                        stack.push(adjacent);
                    }
                }
            }
        }

        System.out.println(sb.toString());
    }
}