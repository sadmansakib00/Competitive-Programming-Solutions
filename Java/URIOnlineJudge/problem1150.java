import static java.lang.System.*;
import java.util.Scanner;
public class problem1150 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int x = po.nextInt();
    int y = 0;
    int sum =x;
    int count = 1;
    for(;;) {
      y = po.nextInt();
      if(y<=x) {
      }
      else {
        break;
      }
    }
    for(int i=1; i>0; i++) {
      if(sum>y) {
        out.println(count);
        break;
      }
        sum += x+i;
        count++;
    }
  }
}