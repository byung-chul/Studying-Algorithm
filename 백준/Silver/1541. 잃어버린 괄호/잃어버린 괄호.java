import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();
        String[] split_by_minus = S.split("-");
        int total = 0;
        for (int i = 0; i < split_by_minus.length; i++) {
            int sub_total = 0;
            String[] split_by_plus = split_by_minus[i].split("\\+");
            for (String sub : split_by_plus) {
                sub_total += Integer.parseInt(sub);
            }
            if (i == 0) {
                total += sub_total;
            } else {
                total -= sub_total;
            }
        }

        System.out.println(total);
    }
}