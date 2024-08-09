import java.io.*;
import java.util.*;

class Conference implements Comparable<Conference> {
    int start;
    int end;

    Conference(int start, int end) {
        this.start = start;
        this.end = end;
    }

    @Override
    public int compareTo(Conference a) {
        if (this.end == a.end) {
            return this.start - a.start;
        }
        return this.end - a.end;
    }
}

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int confernceCount = Integer.parseInt(br.readLine());
        StringTokenizer st;
        List<Conference> cList = new ArrayList<>();
        for (int i = 0; i < confernceCount; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            cList.add(new Conference(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken())));
        }

        Collections.sort(cList);

        int count = 0;
        int current = 0;
        for (Conference c : cList) {
            if (c.start >= current) {
                count++;
                current = c.end;
            }
        }
        System.out.println(count);
    }
}