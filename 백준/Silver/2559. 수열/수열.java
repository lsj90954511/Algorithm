import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] arr = new int[n];
        int[] hap = new int[n];
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++)
        {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        for (int i = 0; i <= n - k; i++)
        {
            int cnt = 0;
            for (int j = 0; j < k; j++)
            {
                cnt += arr[i + j];
            }
            if (max < cnt)
                max = cnt;
        }

        System.out.println(max);
    }
}
