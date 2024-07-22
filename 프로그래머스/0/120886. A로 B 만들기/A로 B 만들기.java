class Solution {
    public int solution(String before, String after) {
        int[] before_arr = new int[26];
        int[] after_arr = new int[26];
        
        for (int i = 0; i < before.length(); i++) {
            int before_index = before.charAt(i) - 'a';
            int after_index = after.charAt(i) - 'a';
            before_arr[before_index]++;
            after_arr[after_index]++;
        }
        
        for (int i = 0; i < 26; i++) {
            if(before_arr[i] != after_arr[i]) {
                return 0;
            }
        }
        return 1;
    }
}