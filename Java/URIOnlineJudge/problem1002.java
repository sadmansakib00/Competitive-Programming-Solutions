import static java.lang.System.*;
import java.util.Scanner;
public class problem1002 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double pi = 3.14159;
    double r = po.nextDouble();
    double a = pi*Math.pow(r,2);
    out.printf("A="+"%.4f\n",a);
  }
}