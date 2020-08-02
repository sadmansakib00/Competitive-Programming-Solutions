import static java.lang.System.*;
import java.util.Scanner;
public class problem1115 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int x = po.nextInt();
      int y = po.nextInt();
      if(x==0 || y==0) {
        break;
      }
      else if(x>0 && y>0) {
        out.println("primeiro");
      }
      else if(x>0 && y<0) {
        out.println("quarto");
      }
      else if(x<0 && y<0) {
        out.println("terceiro");
      }
      else {
        out.println("segundo");
      }
    }
  }
}