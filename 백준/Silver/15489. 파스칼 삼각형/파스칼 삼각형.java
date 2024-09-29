import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] inpuStrings = br.readLine().split(" ");
        int r = Integer.parseInt(inpuStrings[0]);
        int c = Integer.parseInt(inpuStrings[1]);
        int w = Integer.parseInt(inpuStrings[2]);

        int[][] triangle = new int[r + w - 1][c + w - 1];
        triangle[0][0] = 1;
        int result = 0;

        for (int i = 1; i < r + w - 1; i++) {
            for (int j = 0; j < c + w - 1; j++) {
                if (j == 0 || j == c + w - 1) {
                    triangle[i][j] = 1;
                } else {
                    triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
            }
        }

        for (int i = 0; i < w; i++) {
            for (int j = 0; j <= i; j++) {
                result += triangle[r + i - 1][c + j - 1];
            }
        }

        System.out.println(result);
    }
}