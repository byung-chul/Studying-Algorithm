import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int length = Integer.parseInt(br.readLine());
        StringTokenizer stA = new StringTokenizer(br.readLine(), " ");
        StringTokenizer stB = new StringTokenizer(br.readLine(), " ");
        List<Integer> listA = new ArrayList<>();
        List<Integer> listB = new ArrayList<>();

        for (int i = 0; i < length; i++) {
            listA.add(Integer.parseInt(stA.nextToken()));
            listB.add(Integer.parseInt(stB.nextToken()));
        }
        Collections.sort(listA);
        Collections.sort(listB, Collections.reverseOrder());

        int result = 0;
        for (int i = 0; i < length; i++) {
            result += listA.get(i) * listB.get(i);
        }
        System.out.println(result);
    }
}