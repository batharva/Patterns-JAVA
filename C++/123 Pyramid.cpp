import java.util.Scanner;

class Pyramid123 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows = sc.nextInt();
        for (int i = 1; i <=rows; i++) {
            //Spaces.
            int spaces = rows-i;
            for (int j = 1; j <=spaces; j++) {
                System.out.print(" ");
            }
            //Numbers.
            for (int j = 1; j <= i; j++) {
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}