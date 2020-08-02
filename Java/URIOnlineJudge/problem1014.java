import static java.lang.System.*;
import java.util.Scanner;
public class problem1014 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int distance = po.nextInt();
    double fuel = po.nextDouble();
    double consumption = distance/fuel;
    out.printf("%.3f",consumption);
    out.println(" km/l");
  }
}