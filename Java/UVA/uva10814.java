import java.util.Scanner;
import java.math.BigInteger;
public class uva10814 {
  /*static int[] primes = new int[664579];
  public static void seive() {
    boolean flag[] = new boolean[10000001];
    int limit = (int)Math.sqrt(10000001);
    for(int m=2; m<limit; m++) {
      if(!flag[m]) {
        for(int n=m; n*m<10000001; n++) {
          flag[n*m]=true;
        }
      }
    }
    for(int m=2,n=0; m<10000001; m++) {
      if(!flag[m]) {
        primes[n]=m;
        ++n;
      }
    }
  }*/
  public static void main(String[] args) {
    Scanner po = new Scanner(System.in);
    //seive();
    int tests = po.nextInt();
    BigInteger p,q,gcd;
    while(tests-- > 0) {
      p = new BigInteger(po.next());
      po.next();
      q = new BigInteger(po.next());
      gcd = p.gcd(q);
      /*for(int m=0; m<664579; m++) {
        if(p.compareTo(BigInteger.valueOf(m)) == -1
             || q.compareTo(BigInteger.valueOf(m)) == -1)
          break;
        if(p.mod(BigInteger.valueOf(primes[m])).equals(BigInteger.ZERO)
             && q.mod(BigInteger.valueOf(primes[m])).equals(BigInteger.ZERO)) {
          p = p.divide(BigInteger.valueOf(primes[m]));
          q = q.divide(BigInteger.valueOf(primes[m]));
          m=-1;
        }
      }*/
      System.out.println(p.divide(gcd)+" / "+q.divide(gcd));
    }
  }
}