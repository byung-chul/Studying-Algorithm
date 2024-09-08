class Solution {
    public int solution(int[][] dots) {
        // 1,2 and 3,4
        if (slope(dots[0], dots[1]) == slope(dots[2], dots[3])) {
            return 1;
        }
        // 1,3 and 2,4
        if (slope(dots[0], dots[2]) == slope(dots[1], dots[3])) {
            return 1;
        }
        // 1,4 and 2,3
        if (slope(dots[0], dots[3]) == slope(dots[1], dots[2])) {
            return 1;
        }
        return 0;
    }
    private float slope(int[] x, int[] y) {
        if (y[0] - x[0] == 0) {
            return Float.MAX_VALUE;
        }
        return (float) (y[1] - x[1]) / (y[0] - x[0]);
    }
}