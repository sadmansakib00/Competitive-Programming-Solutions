import static java.lang.System.*;
import java.util.Scanner;
public class problem1005 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double a = po.nextDouble();
    double b = po.nextDouble();
    double avg = ((a/11*3.5)+(b/11*7.5));
    out.printf("MEDIA = "+"%.5f\n",avg);
  }
}