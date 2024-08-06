import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int max = Integer.MIN_VALUE;
        int index = -1;

        for (int i = 0; i < 9; i++) {
            int number = Integer.parseInt(br.readLine());
            if (max < number) {
                max = number;
                index = i + 1;
            }
        }
        sb.append(max).append("\n").append(index);
        br.close();
        System.out.println(sb.toString());
    }
}
