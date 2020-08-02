import static java.lang.System.*;
import java.util.Scanner;
public class problem1011 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double pi = 3.14159;
    int radius = po.nextInt();
    double volume = 4/3.0*pi*Math.pow(radius,3);
    out.printf("VOLUME = "+"%.3f\n",volume);
  }
}