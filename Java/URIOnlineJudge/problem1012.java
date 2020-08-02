import static java.lang.System.*;
import java.util.Scanner;
public class problem1012 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double a = po.nextDouble();
    double b = po.nextDouble();
    double c = po.nextDouble();
    double triangle = (1/2.0)*a*c;
    double circle = 3.14159*c*c;
    double trapezium = ((a+b)/2)*c;
    double square = Math.pow(b,2);
    double rectangle = a*b;
    out.printf("TRIANGULO: "+"%.3f\n",triangle);
    out.printf("CIRCULO: "+"%.3f\n",circle);
    out.printf("TRAPEZIO: "+"%.3f\n",trapezium);
    out.printf("QUADRADO: "+"%.3f\n",square);
    out.printf("RETANGULO: "+"%.3f\n",rectangle);
  }
}