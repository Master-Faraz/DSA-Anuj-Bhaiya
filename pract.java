public class pract {
    public static int temp;

    public static int Leader(int arr[]) {
        temp = arr[0];

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > temp) {
                temp = arr[i];
            }
        }
        return temp;
    }

    public static void main(String[] args) {

        int arr[] = { 99, 88, 1, 1000, 45, 64, 36 };

        System.out.println(Leader(arr));
        System.out.println(temp);

    }

}
