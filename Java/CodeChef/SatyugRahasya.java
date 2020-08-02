import java.util.Scanner;
public class SatyugRahasya {
   public static void main(String[] args) {
      Scanner po = new Scanner(System.in);
      int tests,n,sum=0;
      String aStr = "";
      for(int m = 0; m<=10000; m++) {
         aStr += Integer.valueOf(m).toString();
         if(aStr.length()>=10002)
            break;
      }
      tests = po.nextInt();
      while(tests-- > 0) {
         n = po.nextInt();
         sum += aStr.charAt(n)-'0';
      }
      System.out.println(sum);
   }
}