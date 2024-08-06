import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int count = Integer.parseInt(br.readLine());
        int max = Integer.MIN_VALUE;
        int[] scores = new int[count];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < count; i++) {
            int score = Integer.parseInt(st.nextToken());
            scores[i] = score;
            max = max < score ? score : max;
        }
        float total = 0;
        for (int i = 0; i < count; i++) {
            total += (float) scores[i] / max * 100;
        }
        br.close();
        System.out.println(sb.append(total / count).toString());
    }
}
