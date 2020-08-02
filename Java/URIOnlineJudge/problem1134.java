import static java.lang.System.*;
import java.util.Scanner;
public class problem1134 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int al = 0;
    int ga = 0;
    int di = 0;
    for(;;) {
      int n = po.nextInt();
      if(n==1) {
        al++;
      }
      else if(n==2) {
        ga++;
      }
      else if(n==3) {
        di++;
      }
      else if(n==4) {
        break;
      }
    }
    out.println("MUITO OBRIGADO");
    out.println("Alcool: "+al);
    out.println("Gasolina: "+ga);
    out.println("Diesel: "+di);
  }
}