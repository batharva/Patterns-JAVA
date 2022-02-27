import java.util.Scanner;

class ButterflyPattern {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:");
        int rows=sc.nextInt();
        //Up Ward.
        for (int i = 1; i <=rows; i++) 
        {
            for (int j = 1; j <=i; j++) 
            {
                System.out.print("*");
            }
            int spaces=2*(rows-i);
            for (int j = 1; j <=spaces; j++)
            {
                System.out.print(" ");
            }
            for (int j = 1; j <=i; j++) 
            {
                System.out.print("*");
            }
            System.out.println();
        }
        //Inverted.
        for (int i = rows; i >=1; i--) 
        {
            for (int j = 1; j <=i; j++) 
            {
                System.out.print("*");
            }
            int inverted_spaces=2*(rows-i);
            for (int j = 1; j <=inverted_spaces; j++) 
            {
                System.out.print(" ");
            }
            for (int j = 1; j <=i; j++) 
            {
                System.out.print("*");
            }
            System.out.println();
        
        }
    }
}
