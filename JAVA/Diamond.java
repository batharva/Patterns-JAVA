import java.util.Scanner;

class diamond{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows = sc.nextInt();
        for (int i = 1; i <= rows; i++) {
            //Spaces
            int spaces = rows - i;
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }
            //Half Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            //Second half
            for (int j = 2; j <=i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        //Inverted Pyramind.
        for (int i = rows; i >= 1; i--) {
            //Spaces
            int spaces = rows - i;
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }
            //Half Stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            //Second half
            for (int j = 2; j <=i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}