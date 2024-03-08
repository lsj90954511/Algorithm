import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        long s = scanner.nextLong();
        long temp = 0, cnt = 0;

        while(temp <= s)
        {
            cnt++;
            temp += cnt;
        }

        System.out.println(cnt - 1);
    }
}
