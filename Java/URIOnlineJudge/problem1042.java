import static java.lang.System.*;
import java.util.Scanner;
public class problem1042 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int a = po.nextInt();
    int b = po.nextInt();
    int c = po.nextInt();
    if(a<b) {
      if(a<c) {
        out.println(a);
        if(b<c) {
          out.println(b);
          out.println(c);
        }
        else {
          out.println(c);
          out.println(b);
        }
      }
      else {
        out.println(c);
        out.println(a);
        out.println(b);
      }
    }
    else {
      if(b<c) {
        out.println(b);
        if(a<c) {
          out.println(a);
          out.println(c);
        }
        else {
          out.println(c);
          out.println(a);
        }
      }
      else {
        out.println(c);
        out.println(b);
        out.println(a);
      }
    }
    out.println();
    out.println(a);
    out.println(b);
    out.println(c);
  }
}