import static java.lang.System.*;
import java.util.Scanner;
public class problem1079 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int count=1; count<=n; count++) {
      float sum = 0;
      for(int count2=1; count2<=3; count2++) {
        float input = po.nextFloat();
        if(count2==1) {
          input = input*2;
          sum += input;
        }
        else if(count2==2) {
          input = input*3;
          sum += input;
        }
        else {
          input = input*5;
          sum += input;
        }
      }
      sum = sum/10;
      out.printf("%.1f\n",sum);
    }
  }
}