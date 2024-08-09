import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int kindOfMoney = Integer.parseInt(st.nextToken());
        int total = Integer.parseInt(st.nextToken());
        List<Integer> money = new ArrayList<>();
        for (int i = 0; i < kindOfMoney; i++) {
            money.add(Integer.parseInt(br.readLine()));
        }

        int count = 0;

        for (int i = kindOfMoney - 1; i >= 0; i--) {
            if (total == 0) {
                break;
            }
            while (total - money.get(i) >= 0) {
                total -= money.get(i);
                count++;
            }
        }
        System.out.println(count);
    }
}