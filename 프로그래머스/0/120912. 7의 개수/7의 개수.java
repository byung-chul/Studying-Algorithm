class Solution {
    public int solution(int[] array) {
        int answer = 0;
        for (int i = 0; i < array.length; i++) {
            int current = array[i];
            while (current != 0) {
                if (current % 10 == 7) {
                    answer++;
                }
                current = current / 10;
            }
        }
        return answer;
    }
}