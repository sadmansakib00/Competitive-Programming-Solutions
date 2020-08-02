import static java.lang.System.*;
import java.util.Scanner;
public class problem1164 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int i=1; i<=n; i++) {
      int sum = 0;
      double x = po.nextDouble();
      for(int j=1; j<(int)(x/2+1); j++) {
        if(x%j==0) {
          sum+= j;
        }
      }
      if(sum==x)
        out.println((int)x+" eh perfeito");
      else
        out.println((int)x+" nao eh perfeito");
    }
  }
}