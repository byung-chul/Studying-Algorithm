import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int number = Integer.parseInt(br.readLine());

        int count = 0;
        while (number > 0) {
            if (number % 5 == 0) {
                count += number / 5;
                number = 0;
            } else {
                number -= 3;
                count++;
            }
        }

        if (number != 0) {
            System.out.println(-1);
        } else {
            System.out.println(count);
        }
    }
}