import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        long s = scanner.nextLong();
        long temp = 0, cnt = 0;

        for (long i = 1; i < s; i++)
        {
            if (temp + i <= s)
            {
                temp += i;
                cnt++;
            }
        }
        if (s == 1)
            cnt = 1;
        System.out.println(cnt);
    }
}
