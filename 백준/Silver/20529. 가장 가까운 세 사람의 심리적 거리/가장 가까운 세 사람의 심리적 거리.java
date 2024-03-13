import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");

            if (n > 32) {
                System.out.println(0);
                continue;
            }

            String[] mbti = new String[n];

            for (int j = 0; j < n; j++) {
                mbti[j] = st.nextToken();
            }
            int min_dist = 13;
            for (int a = 0; a < n; a++) {
                for (int b = a + 1; b < n; b++) {
                    for (int c = b + 1; c < n; c++) {
                        int dist = 0;
                        for (int k = 0; k < 4; k++) {
                            dist += mbti[a].charAt(k) != mbti[b].charAt(k) ? 1 : 0;
                            dist += mbti[a].charAt(k) != mbti[c].charAt(k) ? 1 : 0;
                            dist += mbti[b].charAt(k) != mbti[c].charAt(k) ? 1 : 0;
                        }
                        if (min_dist > dist)
                            min_dist = dist;
                    }
                }
            }
            System.out.println(min_dist);
        }
    }
}
