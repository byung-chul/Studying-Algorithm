import java.util.*;

class Solution {
    public String[] solution(String[][] tickets) {
        // priority queue를 이용하여 알파벳 순
        Map<String, PriorityQueue<String>> graph = new HashMap<>();
        
        for (String[] ticket : tickets) {
            String from = ticket[0];
            String to = ticket[1];
            
            graph.putIfAbsent(from, new PriorityQueue<>());
            graph.get(from).offer(to);
        }
        List<String> result = new LinkedList<>();
        dfs("ICN", graph, result);
        
        int resultSize = result.size();
        String[] answer = new String[resultSize];
        for (int i = 0; i < resultSize; i++) {
            answer[i] = result.get(i);
        }
        return answer;
    }
    
    private void dfs(String from, Map<String, PriorityQueue<String>> graph, List<String> result) {
        PriorityQueue<String> dest = graph.get(from);
        
        while(dest != null && !dest.isEmpty()) {
            String nextDest = dest.poll();
            dfs(nextDest, graph, result);
        }
        result.add(0, from);
    }
}