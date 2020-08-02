import static java.lang.System.*;
import java.util.Scanner;
public class problem1021 
{
  public static void main (String[] args) 
  {
    Scanner po = new Scanner(in);
    double nia = po.nextDouble();
    if(nia>=0 && nia<=1000000) 
    {
      int ain = (int)nia;
      nia = nia-ain;
      nia = nia*100;
      nia = (int)nia;
      
      out.println("NOTAS:");
      out.println((int)ain/100+" nota(s) de R$ 100.00");
      ain = ain%100;
      out.println((int)ain/50+" nota(s) de R$ 50.00");
      ain = ain%50;
      out.println((int)ain/20+" nota(s) de R$ 20.00");
      ain = ain%20;
      out.println((int)ain/10+" nota(s) de R$ 10.00");
      ain = ain%10;
      out.println((int)ain/5+" nota(s) de R$ 5.00");
      ain = ain%5;
      out.println((int)ain/2+" nota(s) de R$ 2.00");
      ain = ain%2; //It's needed since we have still some work left to do with "1"
      
      out.println("MOEDAS:");
      out.println((int)(ain/1)+" moeda(s) de R$ 1.00"); //Since this one was included in the round figure
      //From here we are working with decimal numbers
      out.println((int)(nia/50)+" moeda(s) de R$ 0.50");
      nia = nia%50;
      out.println((int)(nia/25)+" moeda(s) de R$ 0.25");
      nia = nia%25;
      out.println((int)(nia/10)+" moeda(s) de R$ 0.10");
      nia = nia%10;
      out.println((int)(nia/5)+" moeda(s) de R$ 0.05");
      nia = nia%5;
      out.println((int)(nia/1)+" moeda(s) de R$ 0.01");
    }
  }
}