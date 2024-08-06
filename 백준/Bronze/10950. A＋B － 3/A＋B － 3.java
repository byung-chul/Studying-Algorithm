import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testcase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testcase; i++) {
            String[] testInput = br.readLine().split(" ");
            int first = Integer.parseInt(testInput[0]);
            int second = Integer.parseInt(testInput[1]);
            System.out.println(first + second);
        }
    }
}
