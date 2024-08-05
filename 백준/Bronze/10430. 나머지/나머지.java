import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int first = Integer.parseInt(input[0]);
        int second = Integer.parseInt(input[1]);
        int third = Integer.parseInt(input[2]);

        System.out.println((first + second) % third);
        System.out.println(((first % third) + (second % third)) % third);
        System.out.println((first * second) % third);
        System.out.println(((first % third) * (second % third)) % third);
    }
}
