// A program to compute n! using BigInteger library

import java.util.Scanner;
import java.math.BigInteger;

/**
 * compute n!
 * 
 * @author alexandrecorlet
 */
class Factorial {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int n = scanner.nextInt();
        System.out.println("factorial(n) = " + factorial(n));
    }

    private static BigInteger factorial(int n) {
        BigInteger fac = BigInteger.ONE;
        for (int i = 1; i <= n; ++i)
            fac = fac.multiply(BigInteger.valueOf(i));
        return fac;
    }

}
