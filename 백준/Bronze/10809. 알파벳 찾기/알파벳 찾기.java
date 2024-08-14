import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int[] alph = new int[26];
        String input = br.readLine();
        for (char c : input.toCharArray()) {
            alph[c - 'a'] = input.indexOf(c) + 1;
        }
        for (int i = 0; i < alph.length; i++) {
            sb.append(alph[i] - 1).append(" ");
        }
        System.out.println(sb.toString());
    }
}