import java.util.Scanner;

class SolidRhombus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:\n");
        int rows=sc.nextInt();
        int spaces=rows;
        for (int i = 1; i <= rows; i++) {
            for (int j =spaces; j >=1; j--) {
                System.out.print(" ");
            }
            for (int j = 1; j <=rows; j++) {
                System.out.print("*");
            }
            System.out.println();
            spaces--;
        }
    }
    
}
