import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int[] value = { 25, 10, 5, 1 };
        int testCase = Integer.parseInt(br.readLine());
        int total = 0;
        for (int i = 0; i < testCase; i++) {
            total = Integer.parseInt(br.readLine());
            for (int j = 0; j < value.length; j++) {
                sb.append(total / value[j]).append(" ");
                total = total % value[j];
            }
            sb.append("\n");
        }
        System.out.println(sb.toString());
    }
}
