import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        Queue<Integer> q = new LinkedList<>();
        for (int i = 0; i < progresses.length; i++) {
            int days = (100 - progresses[i]) % speeds[i] == 0 ? (100 - progresses[i]) / speeds[i] : (100 - progresses[i]) / speeds[i] + 1;
            q.add(days);
        }
        
        List<Integer> temp = new ArrayList<>();
        while (!q.isEmpty()) {
            int current = q.poll();
            int count = 1;
            while (!q.isEmpty() && q.peek() <= current) {
                q.poll();
                count++;
            }
            temp.add(count);
        }
        
        int[] answer = new int[temp.size()];
        for (int i = 0; i < temp.size(); i++) {
            answer[i] = temp.get(i);
        }
        return answer;
    }
}