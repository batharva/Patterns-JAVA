import java.util.Scanner;

/**
 * Hollow Rectangle
 */
class HollowRectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:\n");
        int rows=sc.nextInt();
        System.out.print("Enter No. Of Colums:\n");
        int colums=sc.nextInt();
        for (int i = 1; i <=rows; i++) {
            for (int j = 1; j <=colums; j++) {
                if (i==1 || j==1 || j==colums || i==rows ) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
    
}