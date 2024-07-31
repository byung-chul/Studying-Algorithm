class Solution {
    boolean solution(String s) {
        int p_count = 0;
        int y_count = 0;
        
        for (char c : s.toCharArray()) {
            if (c == 'p' || c == 'P') {
                p_count++;
            } else if (c == 'y' || c == 'Y') {
                y_count++;
            }
        }

        return p_count == y_count ? true : false;
    }
}