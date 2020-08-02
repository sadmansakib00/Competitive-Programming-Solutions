import static java.lang.System.*;
import java.util.Scanner;
public class problem1018 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int input = po.nextInt();
    out.println(input);
    if(input>0 && input<1000000) {
      out.println(input/100 + " nota(s) de R$ 100,00");
      input=input%100;
      out.println(input/50 +" nota(s) de R$ 50,00");
      input=input%50;
      out.println(input/20+" nota(s) de R$ 20,00");
      input = input%20;
      out.println(input/10+" nota(s) de R$ 10,00");
      input = input%10;
      out.println(input/5+" nota(s) de R$ 5,00");
      input = input%5;
      out.println(input/2+" nota(s) de R$ 2,00");
      input = input%2;
      out.println(input+" nota(s) de R$ 1,00");
    }
  }
}