import static java.lang.System.*;
import java.util.Scanner;
public class problem1165 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int i=1; i<=n; i++) {
      int sum = 0;
      int x = po.nextInt();
      for(int j=1; j<=x; j++) {
        if(x%j==0) {
          sum++;
        }
      }
      if(sum==2)
        out.println(x+" eh primo");
      else
        out.println(x+" nao eh primo");
    }
  }
}