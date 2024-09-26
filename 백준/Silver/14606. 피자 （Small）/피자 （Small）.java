import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] dp = new int[n + 1];
        dp[1] = 0;
        for (int i = 2; i < n + 1; i++) {
            dp[i] = dp[i - 1] + i - 1;
        }
        System.out.println(dp[n]);
    }
}