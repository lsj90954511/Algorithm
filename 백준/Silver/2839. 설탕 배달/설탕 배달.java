import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        if (n == 4)
        {
            bw.write(String.valueOf(-1));
            bw.flush();
            bw.close();
            br.close();
            return;
        }
        if (n == 7)
        {
            bw.write(String.valueOf(-1));
            bw.flush();
            bw.close();
            br.close();
            return;
        }
        int[] arr = new int[5001];
        Arrays.fill(arr, 5001);
        arr[3] = 1;
        arr[5] = 1;

        for (int i = 6; i <= n; i++)
        {
            arr[i] = min(arr[i - 3] + 1, arr[i - 5] + 1);
        }

        bw.write(String.valueOf(arr[n]));
        bw.flush();
        bw.close();
        br.close();
    }

    public static int min(int a, int b){
        return a < b ? a : b;
    }
}
