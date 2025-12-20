import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int m = Integer.parseInt(br.readLine());

        boolean[] broken = new boolean[10];

        if (m > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < m; i++) {
                broken[Integer.parseInt(st.nextToken())] = true;
            }
        }

        int cnt = Math.abs(n - 100);

        for (int i = 0; i <= 1_000_000; i++) {
            String s = String.valueOf(i);
            boolean ok = true;

            for (int j = 0; j < s.length(); j++) {
                if (broken[s.charAt(j) - '0']) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                cnt = Math.min(cnt, Math.abs(n - i) + s.length());
            }
        }

        System.out.println(cnt);
    }
}