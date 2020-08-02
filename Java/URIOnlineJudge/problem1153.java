import static java.lang.System.*;
import java.util.Scanner;
public class problem1153 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = 0;
    int ans = 0;
    for(;;) {
      n = po.nextInt();
      if(n>0 && n<13) {
        break;
      }
      else {
      }
    }
    for(int i=0; i<n; i++) {
      if(i==0) {
        ans=n;
      }
      else {
        ans *=(n-i);
      }
    }
    out.println(ans);
  }
}