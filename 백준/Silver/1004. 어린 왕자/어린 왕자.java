import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = scanner.nextInt();

        for (int i = 0; i < t; i++) {
            int x1 = scanner.nextInt();
            int y1 = scanner.nextInt();
            int x2 = scanner.nextInt();
            int y2 = scanner.nextInt();
            int n = scanner.nextInt();
            int count = 0;
            for (int j = 0; j < n; j++) {
                int cx = scanner.nextInt();
                int cy = scanner.nextInt();
                int r = scanner.nextInt();

                double dist1 = Math.pow((x1 - cx), 2) + Math.pow((y1 - cy), 2);
                double dist2 = Math.pow((x2 - cx), 2) + Math.pow((y2 - cy), 2);
                if (Math.pow(r, 2) > dist1 && Math.pow(r, 2) > dist2)
                    continue;
                else if (Math.pow(r, 2) > dist1)
                    count++;
                else if (Math.pow(r, 2) > dist2)
                    count++;
            }
            System.out.println(count);
        }
    }
}
