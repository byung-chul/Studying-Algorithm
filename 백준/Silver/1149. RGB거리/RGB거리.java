import java.util.*;
import java.io.*;

class Main {

    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        int house = Integer.parseInt(br.readLine());
        int[][] cost = new int[house][3];
        for (int i = 0; i < house; i++) {
            st = new StringTokenizer(br.readLine());
            cost[i][0] = Integer.parseInt(st.nextToken());
            cost[i][1] = Integer.parseInt(st.nextToken());
            cost[i][2] = Integer.parseInt(st.nextToken());
        }

        int[][] dpCost = new int[house][3];
        dpCost[0][0] = cost[0][0];
        dpCost[0][1] = cost[0][1];
        dpCost[0][2] = cost[0][2];

        for (int i = 1; i < house; i++) {
            dpCost[i][0] = Math.min(dpCost[i - 1][1], dpCost[i - 1][2]) + cost[i][0];
            dpCost[i][1] = Math.min(dpCost[i - 1][0], dpCost[i - 1][2]) + cost[i][1];
            dpCost[i][2] = Math.min(dpCost[i - 1][0], dpCost[i - 1][1]) + cost[i][2];
        }
        System.out.println(Math.min(Math.min(dpCost[house - 1][0], dpCost[house - 1][1]), dpCost[house - 1][2]));
    }
}