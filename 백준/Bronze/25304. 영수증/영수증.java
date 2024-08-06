import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int total = Integer.parseInt(br.readLine());
        int testCase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testCase; i++) {
            String[] input = br.readLine().split(" ");
            int cost = Integer.parseInt(input[0]);
            int count = Integer.parseInt(input[1]);
            total -= cost * count;
        }
        System.out.println(total == 0 ? "Yes" : "No");
    }
}
