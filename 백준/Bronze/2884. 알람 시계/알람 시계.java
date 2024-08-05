import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int hour = Integer.parseInt(input[0]);
        int min = Integer.parseInt(input[1]);
        int earlyTime = (hour * 60 + min) - 45;
        if (earlyTime < 0) {
            earlyTime += 1440;
        }
        System.out.println(earlyTime / 60 + " " + earlyTime % 60);
    }
}
