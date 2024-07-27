import java.util.*;

class Solution {
    public int solution(String[] friends, String[] gifts) {
        int answer = 0;
        int friends_count = friends.length;
        int[][] share_arr = new int[friends_count][friends_count];
        int[] gift_score = new int[friends_count];
        
        for (String gift : gifts) {
            String from = gift.split(" ")[0];
            String to = gift.split(" ")[1];
            int fromIndex = Arrays.asList(friends).indexOf(from);
            int toIndex = Arrays.asList(friends).indexOf(to);
            
            share_arr[fromIndex][toIndex]++;
            gift_score[fromIndex]++;
            gift_score[toIndex]--;
        }
        
        for (int i = 0; i < friends_count; i++) {
            int future_gift = 0;
            for (int j = 0; j < friends_count; j++) {
                if (i == j) continue;
                if ((share_arr[i][j] > 0 || share_arr[j][i] > 0) && share_arr[i][j] > share_arr[j][i]) {
                    future_gift++;
                } else if ((share_arr[i][j] == 0 && share_arr[j][i] == 0) || (share_arr[i][j] == share_arr[j][i])) {
                    //선물을 서로 주고 받은적이 없거나 선물 주고 받은 갯수가 같으면
                    if (gift_score[i] > gift_score[j]) {
                        future_gift++;
                    }
                }
            }
            answer = future_gift > answer ? future_gift : answer;
        }
        return answer;
    }
}