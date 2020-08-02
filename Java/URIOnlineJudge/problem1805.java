import static java.lang.System.*;
import java.util.Scanner;
public class problem1805 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    long a = po.nextLong();
    long b = po.nextLong();
    long sum = 0;
    for(long x=a; x<=b; x++) {
      sum += x;
    }
    out.println(sum);
  }
}