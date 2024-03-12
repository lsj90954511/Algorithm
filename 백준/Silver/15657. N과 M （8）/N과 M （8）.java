import java.io.*;
import java.util.*;

public class Main {
    static int n, m;
    private static int[] arr = new int[10];
    private static int[] nums = new int[10];

    public static void bfs(int a, int dep) {
        if (dep == m)
        {
            for (int i = 0; i < m; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
            return;
        }
        for (int i = a; i < n; i++)
        {
            arr[dep] = nums[i];
            bfs(i, dep + 1);
        }
    }

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        Arrays.fill(nums, 10001);
        n = scanner.nextInt();
        m = scanner.nextInt();

        for (int i = 0; i < n; i++)
        {
            nums[i] = scanner.nextInt();
        }
        scanner.close();

        Arrays.sort(nums);

        bfs(0, 0);
    }
}
