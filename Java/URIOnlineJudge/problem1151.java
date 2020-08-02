import static java.lang.System.*;
import java.util.Scanner;
public class problem1151 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = 0;
    int temp = 0;
    int sum = 0;
    int f = 1;
    for(;;) {
      n = po.nextInt();
      if(n>0 && n<46) {
        break;
      }
      else {
      }
    }
    for(int i=1; i<=n; i++) {
      if(i==1) {
        if(i==n) {
          out.println("0");
        }
        else {
          out.print("0 ");
        }
      }
      else if(i==2) {
        if(i==n) {
          out.println("1");
        }
        else {
          out.print("1 ");
        }
      }
      else {
        sum = f+temp;
        temp = f;
        f = sum;
        if(i==n) {
          out.println(f);
        }
        else {
          out.print(f+" ");
        }
      }
    }
  }
}