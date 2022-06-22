import java.math.BigInteger;
import java.util.Scanner;

public class IsPrime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        BigInteger N = new BigInteger(input);
        boolean isPrime = N.isProbablePrime(1);
        String res = N.toString(); 
        System.out.println((isPrime) ? res + " is a prime number" 
                : res + " is a composite number");
    }
}
