import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int testCase = Integer.parseInt(br.readLine());
        String[] inpuStrings = br.readLine().split(" ");

        int minValue = Integer.parseInt(inpuStrings[0]);
        int diff = 0;
        sb.append(diff).append(" ");

        for (int i = 1; i < testCase; i++) {
            int currentValue = Integer.parseInt(inpuStrings[i]);

            minValue = Math.min(currentValue, minValue);
            diff = Math.max(currentValue - minValue, diff);
            sb.append(diff).append(" ");
        }

        System.out.println(sb.toString());
    }
}