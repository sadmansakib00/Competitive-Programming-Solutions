import static java.lang.System.*;
import java.util.Scanner;
public class problem1182 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double a[][] = new double[12][12];
    double n = 0;
    int t = po.nextInt();
    String s = po.next();
    double r = 0;
    if(s.equals("S")) {
      for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
          n = po.nextDouble();
          a[i][j] = n;
          if(j==t) {
            r += a[i][j];
          }
        }
      }
    }
    else if(s.equals("M")) {
      for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
          n = po.nextDouble();
          a[i][j] = n;
          if(j==t) {
            r += a[i][j];
          }
        }
        if(i==11) {
          r = r/12;
        }
      }
    }
      out.format("%.1f\n",r);
  }
}