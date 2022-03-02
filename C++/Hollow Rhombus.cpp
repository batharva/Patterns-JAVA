import java.util.Scanner;

class HollowRhombus{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows = sc.nextInt();
        for (int i = 1; i <=rows; i++) {
            //Spaces
            for (int j = rows-i; j >=1; j--) {
                System.out.print(" ");
            }
            
            //Stars
            for (int j = 1; j <=rows; j++) {
                if (i==1 || j==1 || i==rows || j==rows) {
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}