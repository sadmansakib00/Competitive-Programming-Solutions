import static java.lang.System.*;
import java.util.Scanner;
public class problem1050 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int input = po.nextInt();
    if(input == 61) {
      out.println("Brasilia");
    }
    else if(input == 71) {
      out.println("Salvador");
    }
    else if(input == 11) {
      out.println("Sao Paulo");
    }
    else if(input == 21) {
      out.println("Rio de Janeiro");
    }
    else if(input == 32) {
      out.println("Juiz de Fora");
    }
    else if(input == 19) {
      out.println("Campinas");
    }
    else if(input == 27) {
      out.println("Vitoria");
    }
    else if(input == 31) {
      out.println("Belo Horizonte");
    }
    else {
      out.println("DDD nao cadastrado");
    }
  }
}