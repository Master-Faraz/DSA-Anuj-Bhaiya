import java.util.Scanner;
import java.lang.reflect.Array;
import java.util.*;

public class Permutation_of_String {

    public static void main(String[] args) {
        // String s = "Faraz";

        // System.out.println("Enter a String ");
        // Scanner sc = new Scanner(System.in);
        // String s = sc.nextLine();

        // System.out.println(Palindrome_String_Iterative(s));
        // Palindrome_String_Reverse(s);
        // System.out.println(Palindrome_String_Recurssion(s, 0, s.length() - 1));

        // Powerset("abc", 0, "");

        // System.out.println(SWAP(s , 0 , 4));

        Permutation_STR("abc", 0);

    }

    public static boolean Palindrome_String_Iterative(String s) {
        int i = 0, j = s.length() - 1;

        while (j >= i) {
            if (s.charAt(i) != s.charAt(j))
                return false;

            i++;
            j--;
        }
        return true;

    }

    public static void Palindrome_String_Reverse(String s) {
        String temp = new String();

        // String new_String = s.join(" ", s, temp);
        // System.out.println(new_String);

        for (int i = 0; i < s.length(); i++)// . For Reversing a string
        {
            String str = Character.toString(s.charAt(i));
            temp = String.join("", str, temp);

        }
        System.out.println(temp);

        if (temp.equals(s))
            System.out.println("True");
        else
            System.out.println("False");

    }

    public static boolean Palindrome_String_Recurssion(String s, int l, int r) {
        if (r <= l)
            return true;

        if (s.charAt(l) != s.charAt(r))
            return false;

        return Palindrome_String_Recurssion(s, l + 1, r - 1);

    }

    public static void Powerset(String s, int n, String curr) {
        if (n == s.length()) {
            System.out.println(curr);
            return;
        }

        // permutation(s, n + 1, curr.join("", s.charAt(n)));
        Powerset(s, n + 1, curr + String.valueOf(s.charAt(n)));
        Powerset(s, n + 1, curr);
    }

    public static String SWAP(String s, int i, int j) {

        char[] arr = s.toCharArray(); // . String to array

        char t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;

        String temp = new String(arr); // . Array to String

        return temp;
    }

    public static void Permutation_STR(String s, int i) {

        if (i >= s.length()) {
            System.out.println(s);
            return;
        }

        for (int j = i; j <= s.length() - 1; j++) // . For Swapping to itself until hit base case and backtrack
        {
            s = SWAP(s, i, j);
            Permutation_STR(s, i + 1);
            s = SWAP(s, i, j);
        }

    }
}
