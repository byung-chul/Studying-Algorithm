import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int hour = Integer.parseInt(input[0]);
        int min = Integer.parseInt(input[1]);
        int needTime = Integer.parseInt(br.readLine());
        int result = (hour * 60 + min) + needTime;
        if (result >= 1440) {
            result -= 1440;
        }
        System.out.println(result / 60 + " " + result % 60);
    }
}
