class Solution {
    public int solution(int[] numbers, int k) {
        int answer = 0;
        int count = 0;
        int target = 0;
        int index = 1;
        
        while(true) {
            target = index + 2;
            count++;
            if (target > numbers.length) {
                target -= numbers.length;
            }
            if (count == k) {
                break;
            }
            answer = numbers[target-1];
            index = target;
        }
        return answer;
    }
}