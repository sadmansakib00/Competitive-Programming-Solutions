import static java.lang.System.*;
import java.util.Scanner;
public class problem1132 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int x = po.nextInt();
    int y = po.nextInt();
    int sum = 0;
    if(x>y) {
      for(int count=y; count<=x; count++) {
        if(count%13!=0) {
          sum += count;
        }
      }
    }
    else {
            for(int count=x; count<=y; count++) {
        if(count%13!=0) {
          sum += count;
        }
      }
    }
    out.println(sum);
  }
}