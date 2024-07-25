class Solution {
    public int solution(int i, int j, int k) {
        int answer = 0;
        for (int index = i; index < j + 1; index++) {
            int current = index;
            while (current != 0) {
                int digit = current % 10;
                if (digit == k) {
                    answer++;
                }
                current = current / 10;
            }
            
        }
        return answer;
    }
}