import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        StringBuilder sb = new StringBuilder();

        int count = 0;

        for (char c : s.toCharArray()) {

            if (c == 'X') {
                count++;
            } else {
                if (count > 0) {
                    if (count % 2 != 0) {
                        System.out.println(-1);
                        return;
                    }
                    while (count >= 4) {
                        sb.append("AAAA");
                        count -= 4;
                    }
                    if (count == 2) {
                        sb.append("BB");
                    }
                    count = 0;
                }
                sb.append(c);
            }
        }

        if (count > 0) {
            if (count % 2 != 0) {
                System.out.println(-1);
                return;
            }
            while (count >= 4) {
                sb.append("AAAA");
                count -= 4;
            }
            if (count == 2) {
                sb.append("BB");
            }
        }

        System.out.println(sb.toString());
    }
}