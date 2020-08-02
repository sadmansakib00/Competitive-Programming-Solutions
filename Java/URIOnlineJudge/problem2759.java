import static java.lang.System.*;
import java.util.Scanner;
public class problem2759 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    String a = po.nextLine();
    String b = po.nextLine();
    String c = po.nextLine();
    out.println("A = "+a+", B = "+b+", C = "+c);
    out.println("A = "+b+", B = "+c+", C = "+a);
    out.println("A = "+c+", B = "+a+", C = "+b);
  }
}