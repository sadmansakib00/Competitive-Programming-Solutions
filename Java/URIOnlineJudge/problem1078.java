import static java.lang.System.*;
import java.util.Scanner;
public class problem1078 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int count=1; count==1; count++) {
      if(n<2 || n>999) {
        n = po.nextInt();
        count--;
      }
    }
    for(int count=1; count<11; count++) {
      out.println(count+" x "+n+" = "+count*n);
    }
  }
}