import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int first = Integer.parseInt(br.readLine());
        int second = Integer.parseInt(br.readLine());
        int quarter = 0;
        if (first > 0) {
            if (second > 0) {
                quarter = 1;
            } else {
                quarter = 4;
            }
        } else {
            if (second > 0) {
                quarter = 2;
            } else {
                quarter = 3;
            }
        }
        System.out.println(quarter);
    }
}
