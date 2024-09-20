import java.io.*;
import java.util.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());
        int[] dp = new int[testCase + 1];
        dp[1] = 1;
        if (testCase > 1) {
            dp[2] = 3;
        }
        for (int i = 3; i < testCase + 1; i++) {
            dp[i] = (dp[i - 1] + (2 * dp[i - 2])) % 10007;
        }

        System.out.println(dp[testCase]);
    }
}