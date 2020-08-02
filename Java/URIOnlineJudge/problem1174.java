import static java.lang.System.*;
import java.util.Scanner;
public class problem1174 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double x[] = new double[100];
    for(int i = 0; i<x.length; i++) {
      double n = po.nextDouble();
      if(n<=10 && n<=i+1) {
        out.println("A["+i+"] = "+n);
      }
    }
  }
}