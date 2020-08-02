import static java.lang.System.*;
import java.util.Scanner;
public class problem1120 {
  public static void main(String[] args) {
    Scanner po = new Scanner(System.in);
    String aStr = po.nextLine();
    for(;!aStr.equals("0 0");) {
      boolean flag = false;
      String[] aStrArr = aStr.split(" ");
      for(int m=0; m<aStrArr[1].length(); m++) {
        if(aStrArr[1].charAt(m) != aStrArr[0].charAt(0)) {
          if(aStrArr[1].charAt(m)=='0') {
            if(flag)
              System.out.print(0);
          }
          else {
            System.out.print(aStrArr[1].charAt(m));
            flag = true;
          }
        }
      }
      if(!flag)
        System.out.print(0);
      System.out.println();
      aStr = po.nextLine();
    }
  }
}