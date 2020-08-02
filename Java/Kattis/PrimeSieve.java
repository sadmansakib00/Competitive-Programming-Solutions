import java.util.Scanner;
import java.util.BitSet;
public class PrimeSieve {
   static BitSet bs;
   static int pCount=0;
   static void sieve(int n) {
      bs.set(1,true);
      for(int i=4; i<=n; i+=2) {
         bs.set(i,true);
      }
      pCount++;
      for(int i=3; i<=n; i+=2) {
         if(!bs.get(i)) {
            pCount++;
            if((long)i*i<=n) {
               for(int j=i*i; j<=n; j+=i) {
                  bs.set(j,true);
               }
            }
         }
      }
   }
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n,q,temp;
      n = sc.nextInt();
      q = sc.nextInt();
      bs = new BitSet(n);
      sieve(n);
      System.out.println(pCount);
      while(q-- > 0) {
         temp = sc.nextInt();
         if(!bs.get(temp)) {
            System.out.println(1);
         } else {
            System.out.println(0);
         }
      }
   }
}