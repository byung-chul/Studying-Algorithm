import java.io.*;
import java.util.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testCase; i++) {
            int count = Integer.parseInt(br.readLine());
            int[] coins = new int[count];
            String[] inputs = br.readLine().split(" ");
            for (int j = 0; j < count; j++) {
                coins[j] = Integer.parseInt(inputs[j]);
            }
            int total = Integer.parseInt(br.readLine());
            long[] dp = new long[total + 1];
            dp[0] = 1;

            for (int coin : coins) {
                for (int k = coin; k < total + 1; k++) {
                    dp[k] += dp[k - coin];
                }
            }
            sb.append(dp[total]).append("\n");
        }

        System.out.println(sb.toString());
    }
}