import static java.lang.System.*;
import java.util.Scanner;
//import java.util.Arrays;
public class problem1176 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int j = po.nextInt();
    long temp = 0;
    long sum = 0;
    long f = 1;
    long a[] = new long[61];
    for(int i=0; i<61; i++) {
      if(i==0) {
        a[i]=0;
      }
      else if(i==1) {
        a[i]=1;
      }
      else {
        sum = f+temp;
        temp = f;
        f = sum;
        a[i] = f;
      }
    }
    //out.println(Arrays.toString(a));
    for(int i=0; i<j; i++) {
      int n = po.nextInt();
      out.println("Fib("+n+") = "+a[n]);
    }
  }
}