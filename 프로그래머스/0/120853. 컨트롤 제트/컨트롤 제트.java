class Solution {
    public int solution(String s) {
        int answer = 0;
        String[] s_arr = s.split(" ");
        answer += Integer.parseInt(s_arr[0]);
        for (int i = 1; i < s_arr.length; i++) {
            if (s_arr[i].equals("Z")) {
                answer = answer - Integer.parseInt(s_arr[i - 1]);
            } else {
                answer += Integer.parseInt(s_arr[i]);
            }
        }
        return answer;
    }
}