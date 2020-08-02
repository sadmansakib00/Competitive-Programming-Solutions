import static java.lang.System.*;
import java.util.Scanner;
public class problem1006 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    float a = po.nextFloat();
    float b = po.nextFloat();
    float c = po.nextFloat();
    float avg = (a/10*2+b/10*3+c/10*5);
    out.printf("MEDIA = "+"%.1f\n",avg);
  }
}