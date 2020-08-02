import static java.lang.System.*;
import java.util.Scanner;
public class problem1007 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int a = po.nextInt();
    int b = po.nextInt();
    int c = po.nextInt();
    int d = po.nextInt();
    int difference = (a*b-c*d);
    out.println("DIFERENCA = "+difference);
  }
}