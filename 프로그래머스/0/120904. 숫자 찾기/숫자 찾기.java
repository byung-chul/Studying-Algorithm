class Solution {
    public int solution(int num, int k) {
        int answer = -1;
        String num_str = num + "";
        String k_str = k + "";
        answer = num_str.indexOf(k_str);
        return answer < 0 ? answer : answer + 1;
    }
}