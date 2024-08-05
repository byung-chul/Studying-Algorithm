import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int first = Integer.parseInt(br.readLine());
        int second = Integer.parseInt(br.readLine());

        int tmp = second;
        while (tmp > 0) {
            int digit = tmp % 10;
            tmp = tmp / 10;
            System.out.println(digit * first);
        }
        System.out.println(first * second);
    }
}
