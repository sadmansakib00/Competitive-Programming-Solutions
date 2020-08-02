import static java.lang.System.*;
import java.util.Scanner;
public class problem1020 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int input = po.nextInt();
    out.println(input/365+" ano(s)");
    input = input%365;
    out.println(input/30+" mes(es)");
    input = input%30;
    out.println(input+" dia(s)");
  }
}