import java.util.*;

class Solution {
    public int[] solution(int n) {
        int[] answer = {};
        ArrayList<Integer> arr = new ArrayList<>();
        int start = 2;
        while (n != 0) {
            if (n % start == 0) {
                arr.add(start);
                n = n / start;
                while(n % start == 0) {
                	n = n / start;
                }
            } 
            if(start > n) {
            	break;
        	}
            start++;
        }
        
        if (arr.size() == 0) {
            arr.add(n);
        }
        answer = new int[arr.size()];
        
        
        for (int i = 0; i < arr.size(); i++) {
            answer[i] = arr.get(i).intValue();
        }
        return answer;
    }
}