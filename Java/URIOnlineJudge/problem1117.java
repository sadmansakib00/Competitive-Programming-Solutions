import static java.lang.System.*;
import java.util.Scanner;
public class problem1117 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double sum = 0;
    int i = 0;
    for(;;) {
      double s = po.nextDouble();
      if(s>=0 && s<=10) {
        sum+=s;
        i+=1;
      }
      else {
        out.println("nota invalida");
      }
      if(i==2) {
        break;
      }
    }
    out.printf("media = %.2f\n",(sum/2));
  }
}