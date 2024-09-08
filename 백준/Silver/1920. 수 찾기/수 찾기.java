import java.util.*;
import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        int count = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        Set<Integer> numberSet = new HashSet<>();
        while (st.hasMoreTokens()) {
            int number = Integer.parseInt(st.nextToken());
            numberSet.add(number);
        }
        int testCase = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        while (st.hasMoreTokens()) {
            int number = Integer.parseInt(st.nextToken());
            if (numberSet.contains(number)) {
                sb.append(1).append("\n");
            } else {
                sb.append(0).append("\n");
            }
        }
        System.out.println(sb.toString());
        return;
    }
}