import java.io.*;
import java.util.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] numbers = new int[n];
        int[] dp = new int[n];

        String[] inputs = br.readLine().split(" ");
        for (int i = 0; i < inputs.length; i++) {
            numbers[i] = Integer.parseInt(inputs[i]);
        }

        for (int i = 0; i < n; i++) {
            dp[i] = numbers[i];
        }

        for (int i = 1; i < n; i++) {
            dp[i] = Math.max(dp[i], dp[i - 1] + numbers[i]);
        }

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            max = Math.max(max, dp[i]);
        }
        System.out.println(max);
    }
}