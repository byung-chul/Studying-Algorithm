import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int people = Integer.parseInt(br.readLine());
        List<Integer> waiting = new ArrayList<>();
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int totalWaiting = 0;
        while (st.hasMoreTokens()) {
            waiting.add(Integer.parseInt(st.nextToken()));
        }

        waiting.sort(Comparator.naturalOrder());
        for (int i = 0; i < waiting.size(); i++) {
            for (int j = 0; j <= i; j++) {
                totalWaiting += waiting.get(j);
            }
        }
        System.out.println(totalWaiting);
    }
}