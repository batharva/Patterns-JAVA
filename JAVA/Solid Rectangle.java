import java.util.Scanner;

class SolidRectangle{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:\n");
        int rows=sc.nextInt();
        System.out.print("Enter No. Of Colums:\n");
        int colums=sc.nextInt();
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= colums; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}