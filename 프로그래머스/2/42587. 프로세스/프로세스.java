import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
        // 큐에 프로세스와 인덱스를 저장하는 Pair 객체를 추가
        Queue<int[]> queue = new LinkedList<>();
        for (int i = 0; i < priorities.length; i++) {
            queue.offer(new int[] {i, priorities[i]});
        }

        int answer = 0; // 실행 순서를 추적할 변수

        while (!queue.isEmpty()) {
            // 큐에서 첫번째 프로세스를 꺼냄
            int[] current = queue.poll();
            boolean hasHigherPriority = false;

            // 큐 안에 현재 프로세스보다 중요도가 높은 것이 있는지 확인
            for (int[] process : queue) {
                if (process[1] > current[1]) {
                    hasHigherPriority = true;
                    break;
                }
            }

            if (hasHigherPriority) {
                // 우선순위가 더 높은 것이 있다면 다시 큐에 넣음
                queue.offer(current);
            } else {
                // 그렇지 않다면 해당 프로세스를 실행
                answer++;
                // 만약 실행된 프로세스가 우리가 찾는 location이라면
                if (current[0] == location) {
                    return answer;
                }
            }
        }

        return -1; // 만약 location을 찾지 못했을 경우 (이론상 도달하지 않음)
    }
}