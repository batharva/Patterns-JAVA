import java.util.Scanner;

class HollowButterfly {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows= sc.nextInt();
        //Half Hollow Pyramid.
        for (int i = 1; i <=rows; i++) {
            for (int j = 1; j <=i; j++) {
                if (j==i || j == 1) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            int spaces =2* (rows - i);
            for (int j = 1; j <=spaces; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <=i; j++) {
                if (j==i || j == 1) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        //Inverted Half Hollow Pyramid.
        for (int i = rows; i >=1; i--) {
            for (int j = 1; j <=i; j++) {
                if (j==i || j == 1) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            int spaces =2* (rows - i);
            for (int j = 1; j <=spaces; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <=i; j++) {
                if (j==i || j == 1) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
    
}