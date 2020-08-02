import static java.lang.System.*;
import java.util.Scanner;
public class problem1144 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int i = 0;
    for(int count = 1; count<=n; count++) {
      i += 1;
      out.println(i + " " + i*i + " " + i*i*i);
      out.println(i + " " + (i*i+1) + " " + (i*i*i+1));
    }
  }
}