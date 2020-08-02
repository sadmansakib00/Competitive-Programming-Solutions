import static java.lang.System.*;
import java.util.Scanner;
public class problem1013 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int a = po.nextInt();
    int b = po.nextInt();
    int c = po.nextInt();
    int greatest = (a+b+Math.abs(a-b))/2;
    greatest = (c+greatest+Math.abs(greatest-c))/2;
    out.println(greatest+" eh o maior");
  }
}