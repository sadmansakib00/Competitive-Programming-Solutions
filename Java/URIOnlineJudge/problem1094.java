import static java.lang.System.*;
import java.util.Scanner;
public class problem1094 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int total = 0;
    int totalC = 0;
    int totalR = 0;
    int totalS = 0;
    String c = "C";
    String r = "R";
    String s = "S";
    double p = 0;
    for(int count=1; count<=n; count++) {
      int amount = po.nextInt();
      String type = po.next();
      total += amount;
      if(type.equals(c)) {
        totalC += amount;
      }
      if(type.equals(r)) {
        totalR += amount;
      }
      if(type.equals(s)) {
        totalS += amount;
      }
    }
    out.println("Total: "+total+" cobaias");
    out.println("Total de coelhos: "+totalC);
    out.println("Total de ratos: "+totalR);
    out.println("Total de sapos: "+totalS);
    p = ((double)totalC/total)*100;
    out.printf("Percentual de coelhos: "+"%.2f",p);
    out.print(" %\n");
    p = ((double)totalR/total)*100;
    out.printf("Percentual de ratos: "+"%.2f",p);
    out.print(" %\n");
    p = ((double)totalS/total)*100;
    out.printf("Percentual de sapos: "+"%.2f",p);
    out.print(" %\n");
  }
}