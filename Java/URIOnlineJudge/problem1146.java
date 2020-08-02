import static java.lang.System.*;
import java.util.Scanner;
public class problem1146 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int x=po.nextInt();
      if(x==0) {
        break;
      }
      else {
        for(int count=0; count<=x-1; count++) {
          count += 1;
          if(count==x) {
            out.print(count+"\n");
          }
          else {
            out.print(count+" ");
          }
          count--;
        }
      }
    }
  }
}