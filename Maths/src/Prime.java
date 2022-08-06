import java.lang.Math;
import java.util.Arrays;

public class Prime {
    public static void main(String[] args) {
//        for(int i=0;i<10;i++)
//        {
//            System.out.println(i + "\t" +prime(i));
//        }
        boolean arr[] = Steve_of_EratoSthenes(12);
        for(int i=0;i<=12;i++)
        {
            System.out.println(i+"\t" + arr[i]);
        }
    }

    static boolean prime(int n)
    {
        if(n<=1) return false ;
        for(int i=2;i<=Math.sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }

    static boolean [] Steve_of_EratoSthenes(int n)
    {
        boolean arr[] = new boolean[n+1];
        Arrays.fill(arr , true);

        arr[0] =false;
        arr[1] =false;

        for(int i=2;i<=Math.sqrt(n) ; i++)
        {
            for(int j= i*2 ; j<=n;j+=i)
            {
                arr[j] = false;
            }

        }

        return arr;
    }
}
