import static java.lang.System.*;
import java.util.Scanner;
public class problem1009 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    String name = po.nextLine();
    double salary = po.nextDouble();
    double sale = po.nextDouble();
    double totalSalary = salary+sale*0.15;
    out.printf("TOTAL = R$ "+"%.2f\n",totalSalary);
  }
}