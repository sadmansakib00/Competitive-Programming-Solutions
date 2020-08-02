import static java.lang.System.*;
import java.util.Scanner;
public class problem1118 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double sum = 0;
    int i = 0;
    int j = 0;
    boolean flag = false;
    for(;;) {
      double s = po.nextDouble();
      if(s>=0 && s<=10) {
        sum+=s;
        i+=1;
      }
      else {
        out.println("nota invalida");
      }
      if(i==2) {
        out.printf("media = %.2f\n",(sum/2));
        out.println("novo calculo (1-sim 2-nao)");
        for(i=1; i==1; i++) {
          j = po.nextInt();
          if(j==1) {
            i=0;
            sum=0;
            break;
          }
          else if(j==2) {
            flag=true;
            break;
          }
          else {
            out.println("novo calculo (1-sim 2-nao)");
            i-=1;
          }
        }
        if(flag==true) {
          break;
        }
      }
    }
  }
}