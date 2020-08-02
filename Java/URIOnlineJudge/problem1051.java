import static java.lang.System.*;
import java.util.Scanner;
public class problem1051 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double salary = po.nextDouble();
    double tax = 0;
    if(salary>=0 && salary<=2000) {
      out.println("Isento");
    }
    else if(salary>2000 && salary<=3000) {
      tax = (salary-2000)*0.08;
      out.printf("R$ "+"%.2f\n",tax);
    }
    else if(salary>3000 && salary<=4500) {
      tax = (1000*0.08)+(salary-3000)*0.18;
      out.printf("R$ "+"%.2f\n",tax);
    }
    else if(salary>4500) {
      tax = (1000*0.08)+(1500*0.18)+(salary-4500)*0.28;
      out.printf("R$ "+"%.2f\n",tax);
    }
  }
}