class Solution {
    public int solution(int n) {
        int answer = 0;
        int factorial = 1;
        while(factorial <= n) {
            if(factorial * answer + 1 > n) {
                break;
            }
            answer++;
            factorial = factorial * answer;
        }
        return answer;
    }
}