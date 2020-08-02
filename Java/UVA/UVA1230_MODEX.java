import java.util.Scanner;
import java.math.BigInteger;
class UVA1230_MODEX {
  public static void main(String[] args) {
    Scanner po = new Scanner(System.in);
    int tests = po.nextInt();
    BigInteger x,n,y;
    while(tests-- > 0) {
      x = new BigInteger(po.next());
      y = new BigInteger(po.next());
      n = new BigInteger(po.next());
      System.out.println(x.modPow(y,n));
    }
  }
}