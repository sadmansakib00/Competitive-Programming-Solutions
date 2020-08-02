import static java.lang.System.*;
import java.util.Scanner;
public class problem1145 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int x = 0;
    int y = 0;
    for(int count=1; count==1; count++) {
      x = po.nextInt();
      if(x>1 && x<20) {
      }
      else {
        count--;
      }
    }
    for(int count=1; count==1; count++) {
      y = po.nextInt();
      if(y>x && y<100000) {
      }
      else {
        count--;
      }
    }
    for(int i=0; i<=y-1; i++) {
      for(int j=1; j<=x; j++) {
        i+=1;
        if(j == x) {
          out.print(i+"\n");
        }
        else {
          out.print(i+" ");
        }
      }
      --i;
    }
  }
}