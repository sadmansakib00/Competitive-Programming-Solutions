import static java.lang.System.*;
import java.util.Scanner;
//import java.util.Arrays;
public class problem1179 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int x[] = new int[5];
    int y[] = new int[5];
    int xc = 0;
    int yc = 0;
    //out.println(Arrays.toString(x));
    int n = 0;
    for(int i=1; i<=15; i++) {
      n = po.nextInt();
      if(n%2==0) {
        x[xc] = n;
        xc++;
      }
      else {
        y[yc] = n;
        yc++;
      }
      if(xc==5) {
        xc=0;
        for(int j=0; j<5; j++) {
          out.println("par["+j+"] = "+x[j]);
        }
      }
      if(yc==5) {
        yc=0;
        for(int j=0; j<5; j++) {
          out.println("impar["+j+"] = "+y[j]);
        }
      }
    }
    if(yc>0) {
      for(int j=0; j<yc; j++) {
        out.println("impar["+j+"] = "+y[j]);
      }
      if(xc>0) {
        for(int j=0; j<xc; j++) {
          out.println("par["+j+"] = "+x[j]);
        }
      }
    }
  }
}