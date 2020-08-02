import static java.lang.System.*;
import java.util.Scanner;
public class problem2636 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    //long x = 0;
    for(;;) {
      long n = po.nextLong();
      if(n==0) {
        break;
      }
      long p = 0;
      long q = 0;
      long r = 0;
      boolean flagP = true;
      boolean flagQ = true;
      boolean flagR = true;
      int primeCheck = 0;
      for(long count=1; count<=Math.sqrt(n); count++) {
        if(n/2==0) {
          break;
        }
        primeCheck = 0;
        if(n%count==0) {
          if(count%2!=0) {
            //x = (int)((count/2)+1);
            for(long countTwo=1; countTwo<=count; countTwo++) {
              if(count%countTwo==0) {
                primeCheck++;
              }
              if(primeCheck>2) {
                break;
              }
            }
            if(primeCheck==2) {
              if(q != 0 && flagR == true) {
                r = count;
                flagR = false;
              }
              if(p != 0 && flagQ == true) {
                q = count;
                flagQ = false;
              }
              if(p == 0 && flagP == true) {
                p = count;
                flagP = false;
              }
            }
          }
        }
        if(flagP == false && flagQ == false && flagR == false) {
          break;
        }
      }
      if(flagP == false && flagQ == false && flagR == false && p*q*r==n) {
        out.println(n+" = "+p+" x "+q+" x "+r);
      }
    }
  }
}