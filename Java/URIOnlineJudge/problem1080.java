import static java.lang.System.*;
import java.util.Scanner;
public class problem1080 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int max = 0;
    int maxPos = 0;
    for(int count=1; count<=100; count++) {
      int input = po.nextInt();
      if(count==1) {
        max = input;
        maxPos = count;
      }
      else {
        if(input>max) {
          max = input;
          maxPos = count;
        }
      }
    }
    out.print(max+"\n"+maxPos+"\n");
  }
}