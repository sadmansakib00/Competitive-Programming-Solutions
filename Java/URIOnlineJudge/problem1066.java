import static java.lang.System.*;
import java.util.Scanner;
public class problem1066 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int even=0;
    int odd=0;
    int posNum=0;
    int negNum=0;
    for(int count=1; count<6; count++) {
      int input = po.nextInt();
      if(input%2==0) {
        even++;
      }
      else {
        odd++;
      }
      if(input>0) {
        posNum++;
      }
      else if(input==0) {
      }
      else {
        negNum++;
      }
    }
    out.println(even+" valor(es) par(es)");
    out.println(odd+" valor(es) impar(es)");
    out.println(posNum+" valor(es) positivo(s)");
    out.println(negNum+" valor(es) negativo(s)");
  }
}