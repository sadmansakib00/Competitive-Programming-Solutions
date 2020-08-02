import static java.lang.System.*;
import java.util.Scanner;
public class problem1154 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double sum = 0;
    int q = 0;
    for(;;) {
      double n = po.nextDouble();
      if(n>0) {
        sum += n;
        q++;
      }
      else if(n==0) {
      }
      else {
        break;
      }
    }
    sum = sum/q;
    out.printf("%.2f\n",sum);
  }
}