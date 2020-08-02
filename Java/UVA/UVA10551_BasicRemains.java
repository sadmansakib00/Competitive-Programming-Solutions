import java.math.BigInteger;
import java.util.Scanner;
public class UVA10551_BasicRemains {
  public static void main(String[] args) {
    Scanner po = new Scanner(System.in);
    int base;
    BigInteger insOfInt,m;
    while((base = po.nextInt()) != 0) {
      insOfInt = new BigInteger(po.next(),base);
      m = new BigInteger(po.next(),base);
      System.out.println(insOfInt.mod(m).toString(base));
    }
  }
}