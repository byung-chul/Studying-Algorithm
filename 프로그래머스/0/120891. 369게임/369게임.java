class Solution {
    public int solution(int order) {
        int answer = 0;
        String order_string = Integer.toString(order);
        for (char c : order_string.toCharArray()) {
            if (c == '3' || c == '6' || c == '9') {
                answer++;
            }
        }
        return answer;
    }
}