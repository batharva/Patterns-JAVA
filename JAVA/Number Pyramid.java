import java.util.Scanner;

class NumberPyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows=sc.nextInt();
        for (int i = 1; i <= rows; i++) {
            //Spaces
            int spaces = rows-i;
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }
            //Numbers.
            for (int j = 1; j <=i; j++) {
                System.out.print(i+" ");
            }
            System.out.println();
        }
        //Inverted
        // for (int i = rows; i >= 1; i--) {
        //     //Spaces
        //     int spaces = rows-i;
        //     for (int j = 1; j <= spaces; j++) {
        //         System.out.print(" ");
        //     }
        //     //Numbers.
        //     for (int j = 1; j <=i; j++) {
        //         System.out.print(i+" ");
        //     }
        //     System.out.println();
        // }
    }
}
