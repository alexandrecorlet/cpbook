/*
 * CP4 book - Exercise 1.3.4.1 - 1: Using Java, read in a double, echo it,
 * but with a minimum field width of 7 and 3 digits after the decimal point.
 */

import java.util.Scanner;

class EchoDouble {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double n = sc.nextDouble();
        System.out.printf("'%7.3f'%n", n);
    }
}
