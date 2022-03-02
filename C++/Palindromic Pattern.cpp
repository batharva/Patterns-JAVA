import java.util.Scanner;

class PalindromicPattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows = sc.nextInt();
        for (int i =1; i <=rows; i++) {
            //Spaces.
            int spaces = rows-i;
            for (int j =1; j <=spaces; j++) {
                System.out.print(" ");
            }
            //Number in First Half.
            for (int j = i; j >=1; j--) {
                System.out.print(j);
            }
            //Numbers in second Half.
            for (int j = 2; j <=i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
