import static java.lang.System.*;
import java.util.Scanner;
public class problem1101 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int m = po.nextInt();
      int n = po.nextInt();
      int sum = 0;
      if(m<=0 || n<=0) {
        break;
      }
      else if(m>n) {
        for(int j=n; j<=m; j++) {
          out.print(j+" ");
          sum += j;
        }
      }
      else {
        for(int j=m; j<=n; j++) {
          out.print(j+" ");
          sum += j;
        }
      }
      out.println("Sum="+sum);
    }
  }
}