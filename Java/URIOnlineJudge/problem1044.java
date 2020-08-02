import static java.lang.System.*;
import java.util.Scanner;
public class problem1044 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int a = po.nextInt();
    int b = po.nextInt();
    if(a%b==0 || b%a==0) {
      out.println("Sao Multiplos");
    }
    else {
      out.println("Nao sao Multiplos");
    }
  }
}