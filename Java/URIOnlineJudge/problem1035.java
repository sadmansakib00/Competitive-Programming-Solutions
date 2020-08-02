import static java.lang.System.*;
import java.util.Scanner;
public class problem1035 {
    public static void main (String[]  args) {
        Scanner po  = new Scanner(in);
        int a = po.nextInt();
        int b = po.nextInt();
        int c = po.nextInt();
        int d = po.nextInt();
        if(b>c && d>a && (c+d)>(a+b) && c>=0 && d>=0 && a%2==0) {
            out.println("Valores aceitos");
        }
        else {
            out.println("Valores nao aceitos");
        }
    }
}