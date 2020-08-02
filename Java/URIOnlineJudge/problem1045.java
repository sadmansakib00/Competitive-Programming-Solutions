import static java.lang.System.*;
import java.util.Scanner;
public class problem1045 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double a = po.nextDouble();
    double b = po.nextDouble();
    double c = po.nextDouble();
    double temp = 0;
    if(b>a || c>a) {
      if(b>c) {
        temp = b;
        b = a;
        a = temp;
      }
      else {
        temp = c;
        c = a;
        a = temp;
      }
    }
    if(a>=b+c) {
      out.println("NAO FORMA TRIANGULO");
    }
    else if(a*a>(b*b+c*c)) {
      out.println("TRIANGULO OBTUSANGULO");
    }
    if(a*a==b*b+c*c) {
      out.println("TRIANGULO RETANGULO");
    }
    if(a*a<b*b+c*c) {
      out.println("TRIANGULO ACUTANGULO");
    }
    if(a==b && b==c) {
      out.println("TRIANGULO EQUILATERO");
    }
    if((b==c && c!=a) || (c==a && a!=b) || (a==b && b!=c)) {
      out.println("TRIANGULO ISOSCELES");
    }
  }
}