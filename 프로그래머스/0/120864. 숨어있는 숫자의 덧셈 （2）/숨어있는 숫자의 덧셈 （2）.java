class Solution {
    public int solution(String my_string) {
        int answer = 0;
        int prev = 0;
        for (char c : my_string.toCharArray()) {
            int intc = (int) c;
            if (intc < 48 || intc > 57) {
                answer += prev;
                prev = 0;
            } else if(prev != 0) {
                prev = prev * 10 + (c - '0');
            } else {
                prev += (c - '0');
            }
        }
        answer += prev;
        return answer;
    }
}