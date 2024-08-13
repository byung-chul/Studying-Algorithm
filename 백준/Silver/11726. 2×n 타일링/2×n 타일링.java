import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int input = Integer.parseInt(br.readLine());
        int[] dp = new int[input + 1];
        
        // 초기값 설정
        dp[1] = 1;
        if (input > 1) {
            dp[2] = 2;
        }
        
        // DP 점화식 적용
        for (int i = 3; i <= input; i++) {
            dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
        }
        
        // 최종 결과 출력
        System.out.println(dp[input]);
    }

}