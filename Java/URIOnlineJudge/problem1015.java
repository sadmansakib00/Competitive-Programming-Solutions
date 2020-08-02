import static java.lang.System.*;
import java.util.Scanner;
public class problem1015 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double x1 = po.nextDouble();
    double y1 = po.nextDouble();
    double x2 = po.nextDouble();
    double y2 = po.nextDouble();
    double distance = Math.sqrt(Math.pow((x2-x1),2)+Math.pow((y2-y1),2));
    out.printf("%.4f\n",distance);
  }
}