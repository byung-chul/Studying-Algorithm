import java.util.*;
import java.io.*;

class Main {

    public static int combination(int N, int M) {
        if (N == M) {
            return 1;
        }

        int[][] combination_dp = new int[M + 1][N + 1];
        for (int i = 0; i < M + 1; i++) {
            combination_dp[i][0] = 1;
            for (int j = 1; j < N + 1 && j <= i; j++) {
                combination_dp[i][j] = combination_dp[i - 1][j - 1] + combination_dp[i - 1][j];
            }
        }
        return combination_dp[M][N];
    }

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());

        for (int i = 0; i < testCase; i++) {
            st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            sb.append(combination(N, M)).append("\n");
        }
        System.out.println(sb.toString());
    }
}