import static java.lang.System.*;
import java.util.Scanner;
public class problem1133 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int x = po.nextInt();
    int y = po.nextInt();
    if(x<y) {
      for(int i=x+1; i<y; i++) {
        if(i%5==2 || i%5==3) {
          out.println(i);
        }
      }
    }
    else {
      for(int i=y+1; i<x; i++) {
        if(i%5==2 || i%5==3) {
          out.println(i);
        }
      }
    }
  }
}