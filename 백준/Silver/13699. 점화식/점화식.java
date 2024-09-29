import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());
        long[] dp = new long[testCase + 1];
        dp[0] = 1;
        for (int i = 1; i < testCase + 1; i++) {
            long temp = 0;
            for (int j = 0; j < i; j++) {
                temp += dp[j] * dp[i - j - 1];
            }
            dp[i] = temp;
        }
        System.out.println(dp[testCase]);
    }
}