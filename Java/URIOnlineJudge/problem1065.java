import static java.lang.System.*;
import java.util.Scanner;
public class problem1065 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int even = 0;
    for(int count=1; count<6; count++) {
      int input = po.nextInt();
      if(input%2==0) {
        even++;
      }
    }
    out.println(even+" valores pares");
  }
}