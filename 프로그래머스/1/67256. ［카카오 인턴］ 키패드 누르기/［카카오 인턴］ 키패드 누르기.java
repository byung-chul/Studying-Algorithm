class Solution {
    public String solution(int[] numbers, String hand) {
        StringBuilder answerBuilder = new StringBuilder();
        int[][] pad = {{3, 1}, {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};
        
        int[] left = {3, 0};
        int[] right = {3, 2};
        
        boolean isRightHands = hand.equals("right");
        
        for (int i : numbers) {
            int[] target = pad[i];
            if (i == 1 || i == 4 || i == 7) {
                answerBuilder.append("L");
                left = target;
            } else if (i == 3 || i == 6 || i == 9) {
                answerBuilder.append("R");
                right = target;
            } else {
                int leftDist = getDistance(left, target);
                int rightDist = getDistance(right, target);
                
                if (leftDist < rightDist || (leftDist == rightDist && !isRightHands)) {
                    answerBuilder.append("L");
                    left = target;
                } else {
                    answerBuilder.append("R");
                    right = target;
                }
            }
        }
        return answerBuilder.toString();
    }
    
    private static int getDistance(int[] current, int[] target) {
        return Math.abs(current[0] - target[0]) + Math.abs(current[1] - target[1]);
    }
}