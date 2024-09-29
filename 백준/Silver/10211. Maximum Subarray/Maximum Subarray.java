import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());

        for (int i = 0; i < testCase; i++) {
            int n = Integer.parseInt(br.readLine());
            int[] input = new int[n];
            String[] inpuStrings = br.readLine().split(" ");
            for (int j = 0; j < n; j++) {
                input[j] = Integer.parseInt(inpuStrings[j]);
            }
            int current = input[0];
            int max = input[0];

            for (int j = 1; j < n; j++) {
                current = Math.max(input[j], current + input[j]);
                max = Math.max(max, current);
            }

            System.out.println(max);
        }
    }
}