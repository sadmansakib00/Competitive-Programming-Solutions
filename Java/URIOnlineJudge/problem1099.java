import static java.lang.System.*;
import java.util.Scanner;
public class problem1099 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int i=1; i<=n; i++) {
      int x = po.nextInt();
      int y = po.nextInt();
      int sum=0;
      if(x<y) {
        for(int j=x+1; j<y; j++) {
          if(j%2!=0) {
            sum+=j;
          }
        }
      }
      else {
        for(int j=y+1; j<x; j++) {
          if(j%2!=0) {
            sum+=j;
          }
        }
      }
      out.println(sum);
    }
  }
}