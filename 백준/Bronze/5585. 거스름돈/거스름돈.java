import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int c = Integer.parseInt(br.readLine());
        int total = 1000 - c;
        int[] value = { 500, 100, 50, 10, 5, 1 };
        int result = 0;
        for (int i = 0; i < value.length; i++) {
            result += total / value[i];
            total = total % value[i];
        }
        System.out.println(result);
    }
}
