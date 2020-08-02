import static java.lang.System.*;
import java.math.BigInteger;
import java.util.Scanner;
public class veryEasy {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n,a;
    BigInteger answer,temp;
    while(po.hasNext()) {
      n = po.nextInt();
      a = po.nextInt();
      answer = new BigInteger("0");
      temp = new BigInteger(new Integer(a).toString());
      for(int m=1; m<=n; m++)
        answer = answer.add(BigInteger.valueOf(m).multiply(temp.pow(m)));
      out.println(answer);
    }
  }
}