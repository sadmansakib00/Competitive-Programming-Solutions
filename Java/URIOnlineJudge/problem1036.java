import static java.lang.System.*;
import java.util.Scanner;
public class problem1036 {
    public static void main (String[]  args) {
        Scanner po  = new Scanner(in);
        double a = po.nextDouble();
        double b = po.nextDouble();
        double c = po.nextDouble();
        double x = b*b - 4*a*c;
        if(a!=0 && x>0)
        {
            double r1 = (-b +Math.pow(x,.5))/(2*a);
            out.printf("R1 = "+"%.5f\n",r1);
            double r2 = (-b -Math.pow(x,.5))/(2*a);
            out.printf("R2 = "+"%.5f\n",r2);
        }
        else {
            out.println("Impossivel calcular");
        }
    }
}