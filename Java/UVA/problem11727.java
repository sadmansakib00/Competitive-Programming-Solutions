import static java.lang.System.*;
import java.util.Scanner;
public class problem11727 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int r = 0;
    for(int m=1; m<=n; m++) {
      int x = po.nextInt();
      int y = po.nextInt();
      int z = po.nextInt();
      if((x>y && x<z) || (x<y && x>z))
        r = x;
      else if((y>x && y<z) || (y<x && y>z))
        r = y;
      else if((z>x && z<y) || (z<x && z>y))
        r = z;
      out.println("Case "+m+": "+r);
    }
  }
}
  