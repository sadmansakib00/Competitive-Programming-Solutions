import static java.lang.System.*;
import java.util.Scanner;
public class problem1116 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int i=1; i<=n; i++) {
      int x = po.nextInt();
      int y = po.nextInt();
      if(y==0) {
        out.println("divisao impossivel");
      }
      else {
        out.format("%.1f\n",((double)x/y));
      }
    }
  }
}