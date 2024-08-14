import java.io.*;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;
        int testCase = Integer.parseInt(br.readLine());

        for (int i = 0; i < testCase; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int repeat = Integer.parseInt(st.nextToken());
            String text = st.nextToken();
            for (char c : text.toCharArray()) {
                for (int j = 0; j < repeat; j++) {
                    sb.append(c);
                }
            }
            sb.append("\n");
        }
        System.out.print(sb.toString());
    }
}