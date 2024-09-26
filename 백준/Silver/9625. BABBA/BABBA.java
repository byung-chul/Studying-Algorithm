import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());
        if (testCase == 1) {
            System.out.println(0 + " " + 1);
            return;
        }
        int[] dpA = new int[testCase + 1];
        int[] dpB = new int[testCase + 1];
        dpA[0] = 1;
        dpA[1] = 0;
        dpB[0] = 0;
        dpB[1] = 1;
        for (int i = 2; i < testCase + 1; i++) {
            dpA[i] = dpA[i - 2] + dpA[i - 1];
            dpB[i] = dpB[i - 2] + dpB[i - 1];
        }
        System.out.println(dpA[testCase] + " " + dpB[testCase]);
    }
}