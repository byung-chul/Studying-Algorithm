import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        String s = br.readLine();
        int index = Integer.parseInt(br.readLine());

        br.close();
        System.out.println(sb.append(s.charAt(index - 1)).toString());
    }
}
