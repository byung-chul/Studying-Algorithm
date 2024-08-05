import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        long first = Long.parseLong(input[0]);
        long second = Long.parseLong(input[1]);
        long third = Long.parseLong(input[2]);

        System.out.println(first + second + third);
    }
}
