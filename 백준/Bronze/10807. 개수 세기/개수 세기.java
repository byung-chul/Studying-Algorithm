import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int length = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        int target = Integer.parseInt(br.readLine());
        int count = 0;

        while (st.hasMoreTokens()) {
            if (Integer.parseInt(st.nextToken()) == target) {
                count++;
            }
        }
        bw.write(count + "\n");
        br.close();
        bw.flush();
        bw.close();
    }
}
