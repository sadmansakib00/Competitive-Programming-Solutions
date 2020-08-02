import static java.lang.System.*;
import java.util.Scanner;
public class problem1190 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double a[][] = new double[12][12];
    double n = 0;
    //int t = po.nextInt();
    String s = po.nextLine();
    double r = 0;
    if(s.equals("S")) {
      for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
          n = po.nextDouble();
          a[i][j] = n;
          if(j>i && j>11-i && j>6) {
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
          if(j>i && j>11-i && j>6) {
            r += a[i][j];
          }
        }
        if(i==11) {
          r = r/30;
        }
      }
    }
    out.format("%.1f\n",r);
  }
}