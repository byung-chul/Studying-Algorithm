import java.io.*;
import java.util.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());
        long[] dp = new long[testCase + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i < testCase + 1; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        System.out.println(dp[testCase]);
    }
}