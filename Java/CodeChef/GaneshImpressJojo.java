import java.math.BigInteger;
import java.util.Scanner;
public class GaneshImpressJojo {
   public static void main(String[] args) {
      Scanner po = new Scanner(System.in);
      int test = Integer.parseInt(po.next());
      BigInteger num1,num2,sum;
      StringBuilder aSB;
      while(test-- > 0) {
         aSB = new StringBuilder(po.next());
         num1 = new BigInteger(aSB.reverse().toString());
         aSB.delete(0,aSB.length());
         aSB.append(po.next());
         num2 = new BigInteger(aSB.reverse().toString());
         sum = num1.add(num2);
         aSB.delete(0,aSB.length());
         aSB.append(sum.toString());
         aSB = aSB.reverse();
         boolean flag = true;
         for(int m=0; m<aSB.length(); m++) {
            if(aSB.charAt(m) != '0')
               flag = false;
            if(flag && aSB.charAt(m)=='0')
               continue;
            else
               System.out.print(aSB.charAt(m));
         }
         System.out.println();
      }
   }
}