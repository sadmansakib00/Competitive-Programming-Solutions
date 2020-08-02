import static java.lang.System.*;
import java.util.Scanner;
public class problem1047 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int initialHour = po.nextInt();
    int initialMin = po.nextInt();
    int finalHour = po.nextInt();
    int finalMin = po.nextInt();
    int totalHour = 0;
    int totalMin = 0;
    if(initialMin<=finalMin) {
      totalMin = finalMin-initialMin;
    }
    else {
      finalHour = finalHour - 1;
      finalMin = finalMin + 60;
      totalMin = finalMin - initialMin;
    }
    if(initialHour<finalHour) {
      totalHour = finalHour - initialHour;
    }
    else if(initialHour==finalHour) {
      totalHour = 24;
    }
    else {
      totalHour = (24-initialHour)+finalHour;
    }
    if(totalHour>=24 && totalMin>0) {
      totalHour = 0;
    }
    out.println("O JOGO DUROU "+totalHour+" HORA(S) E "+totalMin+" MINUTO(S)");
  }
}