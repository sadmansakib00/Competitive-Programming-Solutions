import static java.lang.System.*;
import java.util.Scanner;
public class problem2760 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    String x = po.nextLine();
    String y = po.nextLine();
    String z = po.nextLine();
    out.println(x+y+z);
    out.println(y+z+x);
    out.println(z+x+y);
    out.printf(("%.10s"),x);
    out.printf(("%.10s"),y);
    out.printf(("%.10s\n"),z);
  }
}