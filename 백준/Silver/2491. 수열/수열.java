import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());
        int[] input = new int[testCase];
        String[] inputStrings = br.readLine().split(" ");
        for (int i = 0; i < testCase; i++) {
            input[i] = Integer.parseInt(inputStrings[i]);
        }
        int ascLength = 1;
        int descLength = 1;
        int max = 1;
        for (int i = 1; i < testCase; i++) {
            if (input[i] >= input[i - 1]) {
                ascLength++;
            } else {
                ascLength = 1;
            }

            if (input[i] <= input[i - 1]) {
                descLength++;
            } else {
                descLength = 1;
            }

            max = Math.max(max, Math.max(ascLength, descLength));
        }
        System.out.println(max);
    }
}