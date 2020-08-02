import static java.lang.System.*;
import java.util.Scanner;
public class problem1037 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double nia = po.nextDouble();
    if(nia>=0 && nia<=25)
    {
      out.println("Intervalo [0,25]");
    }
    else if(nia>25 && nia<=50)
    {
      out.println("Intervalo (25,50]");
    }
    else if(nia>50 && nia<=75)
    {
      out.println("Intervalo (50,75]");
    }
    else if(nia>75 && nia<=100)
    {
      out.println("Intervalo (75,100]");
    }
    else
    {
      out.println("Fora de intervalo");
    }
  }
}