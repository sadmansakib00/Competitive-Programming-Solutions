import static java.lang.System.*;
import java.util.Scanner;
public class problem1160 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    /*for(;;) {
      n = po.nextInt();
      if(n>=1 && n<=3000) {
        break;
      }
    }*/
    for(int i=1; i<=n; i++) {
      int x = po.nextInt();
      /*for(;;) {
        x = po.nextInt();
        if(x>=100 && x<=1000000) {
          break;
        }
      }*/
      int y = po.nextInt();
      /*for(;;) {
        y = po.nextInt();
        if(y>=100 && y<=1000000 && y>x) {
          break;
        }
      }*/
      double gox= po.nextDouble();
      /*for(;;) {
        gox = po.nextDouble();
        if(gox>=0.1 && gox<=10) {
          break;
        }
      }*/
      double goy= po.nextDouble();
      /*for(;;) {
        goy = po.nextDouble();
        if(goy>=0 && goy<=10 && goy<gox) {
          break;
        }
      }*/
      double insX = x;
      double insY = y;
      double time = 0;
      double e = 0;
      gox = (gox/100);
      goy = (goy/100);
      for(;;) {
        time++;
        e = (int)(insX*gox);
        insX += e;
        e = (int)(insY*goy);
        insY += e;
        if(insX>insY) {
          break;
        }
      }
      if(time>100) {
        out.println("Mais de 1 seculo.");
      }
      else {
        out.println((int)time+" anos.");
      }
    }
  }
}