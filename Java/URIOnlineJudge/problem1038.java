import static java.lang.System.*;
import java.util.Scanner;
public class problem1038 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int x = po.nextInt();
    int y = po.nextInt();
    double total = 0;
    if(x<=5) {
      if (x == 1) {
        total = 4 * y;
      }
      else if (x == 2) {
        total = 4.5 * y;
      }
      else if (x == 3) {
        total = 5 * y;
      }
      else if (x == 4) {
        total = 2 * y;
      }
      else {
        total = 1.5 * y;
      } 
    }
    out.printf("Total: R$ "+"%.2f\n",total);
  }
}
