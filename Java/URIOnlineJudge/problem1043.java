import static java.lang.System.*;
import java.util.Scanner;
public class problem1043 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double a = po.nextDouble();
    double b = po.nextDouble();
    double c = po.nextDouble();
    double temp1 = 0;
    double temp2 = 0;
    boolean flag = false;
    double cal = 0;
    if(b>a) {
      if(b>c) {
        temp1 = b;
        b =  a;
        a = temp1;
      }
      else {
        temp2 = c;
        c = a;
        a = temp2;
        flag = true;
      }
    }
    if(c>a) {
      if(c>b) {
        temp2 = c;
        c =  a;
        a = temp2;
        flag = true;
      }
      else {
        temp1 = b;
        b = a;
        a = temp1;
      }
    }
    if((b+c)>a) {
      cal = (a+b+c);
      out.printf("Perimetro = "+"%.1f\n",cal);
    }
    else {
      if(flag == true) {
        a = c;
        cal = (((a+b)/2)*temp2);
        out.printf("Area = "+"%.1f\n",cal);
      }
      else {
        cal = (((a+b)/2)*c);
        out.printf("Area = "+"%.1f\n",cal);
      }
    }
  }
}