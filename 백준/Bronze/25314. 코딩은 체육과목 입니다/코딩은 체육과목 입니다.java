import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int totalByte = Integer.parseInt(br.readLine());
        for (int i = 0; i < totalByte / 4; i++) {
            System.out.print("long ");
        }
        System.out.println("int");
    }
}
