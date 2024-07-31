class Solution {
    public boolean solution(int x) {
        int digit_sum = 0;
        int original_x = x;
        while (x > 0) {
            digit_sum += x % 10;
            x = x / 10;
        }
        return original_x % digit_sum == 0;
    }
}