import static java.lang.System.*;
import java.util.Scanner;
public class problem1158 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int i=1; i<=n; i++) {
      int x = po.nextInt();
      int y = po.nextInt();
      int count = 0;
      int sum = 0;
      for(int j=x; j>x-1; j++) {
        if(count == y) {
          out.println(sum);
          break;
        }
        if(j%2 != 0) {
          count++;
          sum += j;
        }
      }
    }
  }
}