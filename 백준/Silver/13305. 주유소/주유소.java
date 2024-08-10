import java.io.*;
import java.util.*;

class City {
    long oilCost;
    long distanceToNext;

    public City(long oilCost, long distanceToNext) {
        this.oilCost = oilCost;
        this.distanceToNext = distanceToNext;
    }
}

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        long cityCount = Integer.parseInt(br.readLine());
        StringTokenizer distanceToken = new StringTokenizer(br.readLine(), " ");
        StringTokenizer costToken = new StringTokenizer(br.readLine(), " ");
        List<City> cities = new ArrayList<>();
        for (int i = 0; i < cityCount; i++) {
            if (i != cityCount - 1) {
                cities.add(
                        new City(Long.parseLong(costToken.nextToken()), Long.parseLong(distanceToken.nextToken())));
            }
        }

        long minPrice = Integer.MAX_VALUE;
        long total = 0;
        for (int i = 0; i < cityCount - 1; i++) {
            if (minPrice > cities.get(i).oilCost) {
                minPrice = cities.get(i).oilCost;
            }
            total += minPrice * cities.get(i).distanceToNext;
        }
        System.out.println(total);
    }
}
