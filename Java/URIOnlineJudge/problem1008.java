import static java.lang.System.*;
import java.util.Scanner;
public class problem1008 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    int num = po.nextInt();
    int hours = po.nextInt();
    double salaryPerHour = po.nextDouble();
    double totalSalary = hours*salaryPerHour;
    out.println("NUMBER = "+num);
    out.printf("SALARY = U$ "+"%.2f\n",totalSalary); 
  }
}