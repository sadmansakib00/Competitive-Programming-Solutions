import static java.lang.System.*;
import java.util.Scanner;
public class problem1075 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int count=2; count<10000; count++) {
      if(count%n==2) {
        out.println(count);
      }
    }
  }
}