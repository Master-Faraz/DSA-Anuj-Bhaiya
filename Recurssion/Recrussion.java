import java.util.Scanner;
import java.lang.*;

public class Recrussion {
    public static void main(String[] args) {

        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter a number ");
        // int n = sc.nextInt();
        // System.out.println("\n");

        // System.out.println("Sum is : " + Sum_of_natural_numbers(n));

        // fun_forward(n);
        // fun(n);

        // int x = power(5, 3);
        // System.out.println(x);

        // int fact = factorial(10);
        // System.out.println(fact);

        // int x = fibonacchi(7);
        // for (int i = 0; i < 10; i++) {
        // System.out.println(fibonacchi(i));
        // }

        // System.out.println(Fast_Power(2, 5));
        // System.out.println(Matrix_Path(4, 2));
        // Josephus_Problem_iteration(6, 3);
        // System.out.println(Josephus_Problem(5, 3));

    }

    static Boolean Palindrome_String_Iteration(String s) {
        String temp = new String();
        for (int i = s.length() - 1; i >= 0; i--) {

                        
        }
        return true;
    }

    static int Josephus_Problem(int n, int k) {
        if (n == 1)
            return 0;
        else
            return ((Josephus_Problem(n - 1, k) + k) % n);
    }

    static int Matrix_Path(int n, int m) // . Only right and bottum is allowed
    {
        if (n == 1 || m == 1)
            return 1;
        else
            return Matrix_Path(n - 1, m) + Matrix_Path(n, m - 1);
    }

    static int Fast_Power(int a, int b) {
        if (b == 1)
            return a;
        else {
            if ((b & 1) == 0)
                return Fast_Power(a * a, b >> 1);
            else
                return a * Fast_Power(a, b - 1);
        }
    }

    public static int Sum_of_natural_numbers(int n) {
        if (n == 1)
            return 1;
        else
            return n + Sum_of_natural_numbers(n - 1);
    }

    public static void fun(int n) // . 9 8 7 6 5 4 3 2 1
    {
        if (n == 0)
            return;
        else {
            System.out.println(n);
            fun(n - 1); // . Returning Time
        }
    }

    public static void fun_forward(int n) // . 1 2 3 4 5 6 7 8 9
    {
        if (n == 0)
            return;
        else {
            fun_forward(n - 1);
            System.out.println(n);
        }
    }

    public static int power(int element, int n) {
        if (n == 0)
            return 1;
        else
            return element * power(element, n - 1);
    }

    public static int factorial(int n) {
        if (n == 1)
            return 1;
        else
            return factorial(n - 1) * n;
    }

    public static int fibonacchi(int n) {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;

        else
            return (fibonacchi(n - 1) + fibonacchi(n - 2));
    }

    public static int Taylors_series(int n) {
        if (n == 0)
            return 1;
        else
            return (power(n, n - 1));
    }
}