import static java.lang.System.*;
import java.util.Scanner;
public class problem1070 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int input = po.nextInt();
    for(int count=input; count<=input+11; count++) {
      if(count%2!=0) {
        out.println(count);
      }
    }
  }
}