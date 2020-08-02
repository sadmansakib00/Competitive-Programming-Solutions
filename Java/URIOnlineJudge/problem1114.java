import static java.lang.System.*;
import java.util.Scanner;
public class problem1114 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int p = po.nextInt();
      if(p==2002) {
        out.println("Acesso Permitido");
        break;
      }
      else
        out.println("Senha Invalida");
    }
  }
}