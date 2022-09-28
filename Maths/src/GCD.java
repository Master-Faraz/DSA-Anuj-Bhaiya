import java.util.Scanner;

public class GCD {
    public static void main(String[] args) {

        System.out.println(GCD(12,27));
        System.out.println(GCD(42,27));
        System.out.println(GCD(52,27));

//        Scanner sc = new Scanner(System.in);

    }

    static int GCD(int a , int b)
    {
        if(b==0) return a;

        return GCD(b , a%b);

    }
}
