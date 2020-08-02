import static java.lang.System.*;
import java.util.Scanner;
public class problem2762 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double x = po.nextDouble();
    double fraction = x-(int)x;
    double intPart = x-fraction;
    out.println(fraction+"."+intPart);
  }
}