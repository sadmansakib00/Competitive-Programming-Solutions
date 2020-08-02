import java.util.Scanner;
import java.math.BigInteger;
public class IPChecking {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt(); sc.nextLine();
      String a,b;
      boolean flag;
      for(int i=1; i<=t; i++) {
         flag = true;
         a = sc.nextLine();
         b = sc.nextLine();
         String[] arrOfA = a.split("\\.");
         String[] arrOfB = b.split("\\.");
         for(int j=0; j<arrOfA.length; j++) {
            int tempA = Integer.parseInt(arrOfA[j]);
            BigInteger bbi = new BigInteger(arrOfB[j],2);
            int tempB = Integer.parseInt(bbi.toString(10));
            if(tempA != tempB) {
               flag = false;
               break;
            }
         }
         if(flag) {
            System.out.println("Case " + i + ": " + "Yes");
         } else {
            System.out.println("Case " + i + ": " + "No");
         }
      }
   }
}