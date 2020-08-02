import static java.lang.System.*;
import java.util.Scanner;
public class problem1048 {
  public static void main (String[] args) {
    Scanner po = new Scanner(in);
    double salary = po.nextDouble();
    double newSalary = 0;
    if(salary<=400) {
      newSalary = salary + salary*0.15;
      out.printf("Novo salario: "+"%.2f\n",newSalary);
      out.printf("Reajuste ganho: "+"%.2f\n",salary*0.15);
      out.println("Em percentual: 15 %");
    }
    else if(salary<=800) {
      newSalary = salary + salary*0.12;
      out.printf("Novo salario: "+"%.2f\n",newSalary);
      out.printf("Reajuste ganho: "+"%.2f\n",salary*0.12);
      out.println("Em percentual: 12 %");
    }
    else if(salary<=1200) {
      newSalary = salary + salary*0.10;
      out.printf("Novo salario: "+"%.2f\n",newSalary);
      out.printf("Reajuste ganho: "+"%.2f\n",salary*0.10);
      out.println("Em percentual: 10 %");
    }
    else if(salary<=2000) {
      newSalary = salary + salary*0.07;
      out.printf("Novo salario: "+"%.2f\n",newSalary);
      out.printf("Reajuste ganho: "+"%.2f\n",salary*0.07);
      out.println("Em percentual: 7 %");
    }
    else {
      newSalary = salary + salary*0.04;
      out.printf("Novo salario: "+"%.2f\n",newSalary);
      out.printf("Reajuste ganho: "+"%.2f\n",salary*0.04);
      out.println("Em percentual: 4 %");
    }
  }
}