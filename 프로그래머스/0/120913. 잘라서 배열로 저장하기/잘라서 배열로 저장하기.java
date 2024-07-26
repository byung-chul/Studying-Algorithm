import java.util.*;

class Solution {
    public String[] solution(String my_str, int n) {
        String[] answer = {};
        ArrayList<String> answer_list = new ArrayList<>();
        
        int index = 0;
        while(index < my_str.length()) {
            if (index + n > my_str.length()) {
            	System.out.println(my_str.substring(index, my_str.length()));
                answer_list.add(my_str.substring(index, my_str.length()));
                break;
            }
            System.out.println(my_str.substring(index, index+n));
            answer_list.add(my_str.substring(index, index+n));
            index += n;
        }
        answer = new String[answer_list.size()];
        for (int i = 0; i < answer.length; i++) {
            answer[i] = answer_list.get(i);
        }
        return answer;
    }
}