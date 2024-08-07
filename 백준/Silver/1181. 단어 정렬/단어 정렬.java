import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());
        HashSet<String> s_set = new HashSet<>();
        for (int i = 0; i < testCase; i++) {
            s_set.add(br.readLine());
        }
        List<String> s_list = new ArrayList<>();
        for (String s : s_set) {
            s_list.add(s);
        }

        List<String> newList = s_list.stream()
                .sorted((s1, s2) -> {
                    if (s1.length() != s2.length()) {
                        return s1.length() - s2.length();
                    } else {
                        return s1.compareTo(s2);
                    }
                })
                .collect(Collectors.toList());

        for (String s : newList) {
            sb.append(s).append("\n");
        }
        br.close();
        System.out.println(sb.toString());
    }
}
