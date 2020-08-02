import static java.lang.System.*;
import java.util.Scanner;
public class problem11172 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int a=1; a<=n; a++) {
      int x = po.nextInt();
      int y = po.nextInt();
      if(x>y) {
        out.println(">");
      }
      else if(x<y) {
        out.println("<");
      }
      else {
        out.println("=");
      }
    }
  }
}