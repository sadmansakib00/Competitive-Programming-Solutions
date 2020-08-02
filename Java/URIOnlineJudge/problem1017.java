import static java.lang.System.*;
import java.util.Scanner;
public class problem1017 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int time = po.nextInt();
    int averageSpeed = po.nextInt();
    Double fuel = averageSpeed/12.0*time;
    out.printf("%.3f\n",fuel);
  }
}