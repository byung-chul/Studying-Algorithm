import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        int count = Integer.parseInt(br.readLine());
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        st = new StringTokenizer(br.readLine());

        while (st.hasMoreTokens()) {
            int number = Integer.parseInt(st.nextToken());
            max = max < number ? number : max;
            min = min > number ? number : min;
        }
        sb.append(min).append(" ").append(max);
        br.close();
        System.out.println(sb.toString());
    }
}
