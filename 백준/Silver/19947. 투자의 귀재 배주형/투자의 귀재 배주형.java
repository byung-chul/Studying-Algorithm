import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] inputs = br.readLine().split(" ");
        int h = Integer.parseInt(inputs[0]);
        int y = Integer.parseInt(inputs[1]);
        int[] dp = new int[y + 1];
        dp[0] = h;
        for (int i = 1; i < y + 1; i++) {
            dp[i] = (int) (dp[i - 1] * 1.05);

            if (i >= 3) {
                dp[i] = Math.max(dp[i], (int) (dp[i - 3] * 1.2));
            }
            if (i >= 5) {
                dp[i] = Math.max(dp[i], (int) (dp[i - 5] * 1.35));
            }
        }
        System.out.println(dp[y]);
    }
}