import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int input = Integer.parseInt(br.readLine());
        int temp = input;
        int cycle = 0;
        while (true) {
            int first = temp % 10;
            int second = (temp % 10) + (temp / 10);
            if (second >= 10) {
                second = second % 10;
            }
            temp = (first * 10) + second;
            cycle++;
            if (temp == input) {
                break;
            }
        }
        System.out.println(cycle);
    }
}