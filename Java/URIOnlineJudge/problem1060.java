import static java.lang.System.*;
import java.util.Scanner;
public class problem1060 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int posCount = 0;
    for(int count=1; count<7; count++) {
      Double input = po.nextDouble();
      if(input>0) {
        posCount++;
      }
    }
    out.println(posCount+" valores positivos");
  }
}