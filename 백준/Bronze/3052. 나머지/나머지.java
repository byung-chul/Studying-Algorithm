import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int[] numbers = new int[42];
        int count = 0;

        for (int i = 0; i < 10; i++) {
            int number = Integer.parseInt(br.readLine());
            numbers[number % 42]++;
        }

        for (int i = 0; i < 42; i++) {
            if (numbers[i] > 0) {
                count++;
            }
        }
        br.close();
        System.out.println(sb.append(count).toString());
    }
}
