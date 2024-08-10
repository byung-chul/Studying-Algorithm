import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int rowCount = Integer.parseInt(br.readLine());
        Integer[] rows = new Integer[rowCount];
        for (int i = 0; i < rowCount; i++) {
            rows[i] = Integer.parseInt(br.readLine());
        }
        Arrays.sort(rows);
        int maxWeight = 0;
        for (int i = 0; i < rowCount; i++) {
            int current = rows[i] * (rowCount - i);
            if (current > maxWeight) {
                maxWeight = current;
            }
        }
        System.out.println(maxWeight);
    }
}
