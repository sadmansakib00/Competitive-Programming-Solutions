import static java.lang.System.*;
import java.util.Scanner;
public class problem1046 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int start = po.nextInt();
    int end = po.nextInt();
    int duration;
    if(start<end) {
      duration = end-start;
    }
    else {
      duration = 24-start+end;
    }
    if(start == end) {
      duration = 24;
    }
    out.println("O JOGO DUROU " + duration + " HORA(S)");
  }
}