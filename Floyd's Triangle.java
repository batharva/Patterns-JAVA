import java.util.Scanner;

class FloydsTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. Of Rows:\n");
        int rows=sc.nextInt();
        int number=1;
        for (int i = 1; i <=rows; i++) {
            for (int j = 1; j <=i; j++) {
                System.out.print(number+" ");
                number++;
            }
            System.out.println();
        }
    }
}
