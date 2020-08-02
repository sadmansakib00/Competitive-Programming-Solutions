import static java.lang.System.*;
import java.util.Scanner;
public class problem1157 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int i=1; i<=n; i++) {
      if(n%i==0) {
        out.println(i);
      }
    }
  }
}