import static java.lang.System.*;
import java.util.Scanner;
public class problem1173 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int x[] = new int[10];
    for(int i = 0; i<x.length; i++) {
      if(i==0) {
        out.println("N["+i+"] = "+n);
      }
      else {
        n += n;
        out.println("N["+i+"] = "+n);
      }
    }
  }
}