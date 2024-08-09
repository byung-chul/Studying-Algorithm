import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

class Conference {
    int start;
    int end;

    Conference(int start, int end) {
        this.start = start;
        this.end = end;
    }
}

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int conferenceCount = Integer.parseInt(br.readLine());
        Conference[] conferences = new Conference[conferenceCount];

        for (int i = 0; i < conferenceCount; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());
            conferences[i] = new Conference(start, end);
        }

        Arrays.sort(conferences, (a, b) -> {
            if (a.end == b.end) {
                return Integer.compare(a.start, b.start);
            }
            return Integer.compare(a.end, b.end);
        });

        int count = 0;
        int currentEndTime = 0;
        
        for (Conference c : conferences) {
            if (c.start >= currentEndTime) {
                count++;
                currentEndTime = c.end;
            }
        }

        System.out.println(count);
    }
}