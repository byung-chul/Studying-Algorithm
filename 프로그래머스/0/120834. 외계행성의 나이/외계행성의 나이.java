class Solution {
    public String solution(int age) {
        String answer = "";
        String age_int_str = age + "";
        for (char c : age_int_str.toCharArray()) {
            answer += (char)(c+1+'0');
        }
        return answer;
    }
}