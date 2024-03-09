import java.io.IOException;
import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        double credit_hap = 0, temp = 0;

        for (int i = 0; i < 20; i++)
        {
            String subject, level;
            double credit;
            subject = scanner.next();
            credit = scanner.nextDouble();
            level = scanner.next();

            if (level.equals("P"))
                continue;

            credit_hap += credit;
            switch (level) {
                case "A+":
                    temp += credit * 4.5;
                    break;
                case "A0":
                    temp += credit * 4.0;
                    break;
                case "B+":
                    temp += credit * 3.5;
                    break;
                case "B0":
                    temp += credit * 3.0;
                    break;
                case "C+":
                    temp += credit * 2.5;
                    break;
                case "C0":
                    temp += credit * 2.0;
                    break;
                case "D+":
                    temp += credit * 1.5;
                    break;
                case "D0":
                    temp += credit * 1.0;
                    break;
                case "F":
                    temp += credit * 0.0;
                    break;
            }
        }
        scanner.close();

        System.out.printf("%.6f", temp / credit_hap);
    }
}