import static java.lang.System.*;
import java.util.Scanner;
public class problem1010 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int codeP01 = po.nextInt();
    int unitP01 = po.nextInt();
    double priceP01 = po.nextDouble();
    int codeP02 = po.nextInt();
    int unitP02 = po.nextInt();
    double priceP02 = po.nextDouble();
    double payment = unitP01*priceP01+unitP02*priceP02;
    out.printf("VALOR A PAGAR: R$ "+"%.2f\n",payment);
  }
}