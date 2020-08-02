import static java.lang.System.*;
import java.util.Scanner;
public class problem1019 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int input = po.nextInt();
    out.print(input/3600+":");
    input = input%3600;
    out.print(input/60+":");
    input = input%60;
    out.println(input);
  }
}