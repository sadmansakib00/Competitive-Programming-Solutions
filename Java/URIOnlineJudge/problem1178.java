import static java.lang.System.*;
import java.util.Scanner;
public class problem1178 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double n = po.nextDouble();
    double a[] = new double[100];
    for(int i=0; i<100; i++) {
      if(i==0) {
        a[0] = n;
      }
      else {
        n = n/2;
        a[i] = n;
      }
      out.format("N["+i+"] = "+"%.4f\n",a[i]);
    }
  }
}