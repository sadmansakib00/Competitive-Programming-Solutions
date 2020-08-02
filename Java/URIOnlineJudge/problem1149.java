import static java.lang.System.*;
import java.util.Scanner;
public class problem1149 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int a = po.nextInt();
    int n = 0;
    int sum = a;
    for(;;) {
      n = po.nextInt();
      if(n<=0) {
      }
      else {
        break;
      }
    }
    for(int i=1; i<n; i++) {
      sum += a+i;
    }
    out.println(sum);
  }
}