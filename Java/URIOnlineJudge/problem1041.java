import static java.lang.System.*;
import java.util.Scanner;
public class problem1041 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    double x = po.nextDouble();
    double y = po.nextDouble();
    if(x==0 && y==0) {
      out.println("Origem");
    }
    if(x>0 && y>0) {
      out.println("Q1");
    }
    if(x<0 && y>0) {
      out.println("Q2");
    }
    if(x<0 && y<0) {
      out.println("Q3");
    }
    if(x>0 && y<0) {
      out.println("Q4");
    }
    if(x==0 && (y<0 || y>0)) {
      out.println("Eixo Y");
    }
    if((x>0 || x<0) && y==0) {
      out.println("Eixo X");
    }
  }
}