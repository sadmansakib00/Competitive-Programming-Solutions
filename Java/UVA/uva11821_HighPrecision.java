import java.util.Scanner;
import java.math.BigDecimal;
public class uva11821_HighPrecision {
  public static void main(String[] args) {
    Scanner po = new Scanner(System.in);
    int tests = po.nextInt();
    BigDecimal sum;
    BigDecimal temp;
    while(tests-- > 0) {
      sum = new BigDecimal("0");
      temp = new BigDecimal(po.next());
      for(; temp.equals(BigDecimal.ZERO)==false; ) {
        sum = sum.add(temp);
        temp = new BigDecimal(po.next());
      }
//      try {
//        System.out.println(sum.toBigIntegerExact());
//      } catch(Exception e) {
//        System.out.println(sum);
//      }
      System.out.println(sum.stripTrailingZeros().toPlainString());
    }
  }
}