import static java.lang.System.*;
import java.util.Scanner;
public class problem1073 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int input = po.nextInt();
    for(int count=1; count==1; count++) {
      if(input<6 || input>1999) {
        input = po.nextInt();
        count--;
      }
    }
    for(int count=1; count<=input; count++) {
      if(count%2==0) {
        out.println(count+"^2 = "+Math.round(Math.pow(count,2)));
      }
    }
  }
}