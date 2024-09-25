import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());

        if (testCase < 5) {
            int result = 0;
            if (testCase == 1 || testCase == 3) {
                result = -1;
            } else if (testCase == 4) {
                result = 2;
            } else {
                result = 1;
            }
            System.out.println(result);
            return;
        }

        int[] dp = new int[testCase + 1];
        dp[1] = -1;
        dp[2] = 1;
        dp[3] = -1;
        dp[4] = 2;
        dp[5] = 1;

        for (int i = 6; i < testCase + 1; i++) {
            int minus2 = dp[i - 2] == -1 ? Integer.MAX_VALUE : dp[i - 2];
            int minus5 = dp[i - 5] == -1 ? Integer.MAX_VALUE : dp[i - 5];
            dp[i] = Math.min(minus2, minus5) + 1;
        }
        System.out.println(dp[testCase]);
    }
}