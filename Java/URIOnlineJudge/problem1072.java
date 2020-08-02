//import static java.lang.System.*;
import java.util.Scanner;
public class problem1072 {
  public static void main (String[] args) {
    Scanner po = new Scanner(System.in);
    int amount=po.nextInt();
    int in = 0;
    int out = 0;
    for(int count=1; count<=amount; count++) {
      int input = po.nextInt();
      if(input>=10 && input<=20) {
        ++in;
      }
      else {
        ++out;
      }
    }
    System.out.print(in+" in\n"+out+" out\n");
  }
}