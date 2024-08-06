import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();

        st = new StringTokenizer(br.readLine());
        int length = Integer.parseInt(st.nextToken());
        int[] baskets = new int[length];
        int testCase = Integer.parseInt(st.nextToken());

        for (int i = 0; i < testCase; i++) {
            st = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());
            int number = Integer.parseInt(st.nextToken());
            for (int j = start - 1; j < end; j++) {
                baskets[j] = number;
            }
        }

        for (int i = 0; i < length; i++) {
            sb.append(baskets[i]).append(" ");
        }
        br.close();
        System.out.println(sb.toString());
    }
}
