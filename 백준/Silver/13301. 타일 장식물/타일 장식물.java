import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());
        if (testCase == 1) {
            System.out.println(4);
            return;
        } else if (testCase == 2) {
            System.out.println(6);
            return;
        }

        long[] dp = new long[testCase + 1];
        dp[1] = 4;
        dp[2] = 6;
        for (int i = 3; i < testCase + 1; i++) {
            dp[i] = dp[i - 2] + dp[i - 1];
        }
        System.out.println(dp[testCase]);
    }
}