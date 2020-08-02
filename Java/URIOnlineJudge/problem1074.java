import static java.lang.System.*;
import java.util.Scanner;
public class problem1074 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    for(int count=1; count==1; count++) {
      if(n>9999) {
        n = po.nextInt();
        count--;
      }
    }
    for(int count=1; count<=n; count++) {
      int input=po.nextInt();
      if(input==0) {
        out.println("NULL");
      }
      else if(input%2==0 && input>0) {
        out.println("EVEN POSITIVE");
      }
      else if(input%2==0 && input<0) {
        out.println("EVEN NEGATIVE");
      }
      else if(input%2!=0 && input>0) {
        out.println("ODD POSITIVE");
      }
      else {
        out.println("ODD NEGATIVE");
      }
    }
  }
}