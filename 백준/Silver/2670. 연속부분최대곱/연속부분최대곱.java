import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());
        double[] input = new double[testCase];
        for (int i = 0; i < testCase; i++) {
            input[i] = Double.parseDouble(br.readLine());
        }
        double current = input[0];
        double max = input[0];

        for (int i = 1; i < testCase; i++) {
            current = Math.max(input[i], current * input[i]);
            max = Math.max(current, max);
        }
        System.out.printf("%.3f", max);
    }
}