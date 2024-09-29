import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int days = Integer.parseInt(br.readLine());
        int[] prices = new int[days];
        String[] inputs = br.readLine().split(" ");

        for (int i = 0; i < days; i++) {
            prices[i] = Integer.parseInt(inputs[i]);
        }

        int max = 0;
        int minPrice = prices[0];

        for (int i = 1; i < days; i++) {
            max = Math.max(max, prices[i] - minPrice);
            minPrice = Math.min(minPrice, prices[i]);
        }

        System.out.println(max);
    }
}