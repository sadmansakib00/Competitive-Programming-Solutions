import static java.lang.System.*;
import java.util.Scanner;
public class problem1113 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int m = po.nextInt();
      int n = po.nextInt();
      if(m==n) {
        break;
      }
      else if(m>n) {
        out.println("Decrescente");
      }
      else {
        out.println("Crescente");
      }
    }
  }
}