import java.util.Scanner;

class InvertedHalfPyramidAndRotated180 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows=sc.nextInt();
        for (int i = 1; i <=rows; i++) {
            for (int j = 1; j <=rows-i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}