import java.io.*;
import java.util.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());
        long[] dp = new long[100];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        dp[4] = 2;
        for (int j = 5; j < 100; j++) {
            dp[j] = dp[j - 2] + dp[j - 3];
        }
        for (int i = 0; i < testCase; i++) {
            int n = Integer.parseInt(br.readLine());
            sb.append(dp[n - 1]).append("\n");
        }

        System.out.println(sb.toString());
    }
}