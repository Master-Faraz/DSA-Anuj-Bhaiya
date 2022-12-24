import java.util.Scanner;

class Josephus_Problem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter total people and killer present");
        int total_people = sc.nextInt(), killer = sc.nextInt();

        System.out.println("Winner is : " + jos(total_people, killer));

    }

    static int jos(int n, int k) {
        if (n == 1)
            return 0;
        else
            return (jos(n - 1, k) + k) % n;
    }
}