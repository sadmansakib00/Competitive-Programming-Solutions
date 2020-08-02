import static java.lang.System.*;
import java.util.Scanner;
public class problem1067 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int input = 0;
    for(int count=1; count<=1; count++) {
      input = po.nextInt();
      if(input<1 || input>1000) {
        count--;
      }
    }
    for(int count=1; count<=input; count++) {
      if(count%2!=0) {
        out.println(count);
      }
    }
  }
}