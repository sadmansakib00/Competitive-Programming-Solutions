import static java.lang.System.*;
import java.util.Scanner;
public class problem1159 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int x = po.nextInt();
      int count = 0;
      int sum = 0;
      if(x==0) {
        break;
      }
      else {
        for(int i=x; i>x-1; i++) {
          if(count==5) {
            out.println(sum);
          break;
          }
          if(i%2 == 0) {
            count++;
            sum += i;
          }
        }
      }
    }
  }
}