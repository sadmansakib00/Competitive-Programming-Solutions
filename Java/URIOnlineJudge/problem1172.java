import static java.lang.System.*;
import java.util.Scanner;
public class problem1172 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int x[] = new int[10];
    for(int i = 0; i<x.length; i++) {
      int n = po.nextInt();
      if(n<=0) {
        out.println("X["+i+"] = "+1);
      }
      else {
        out.println("X["+i+"] = "+n);
      }
    }
  }
}