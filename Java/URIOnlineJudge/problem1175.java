import static java.lang.System.*;
import java.util.Scanner;
public class problem1175 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int x[] = new int[20];
    int temp = 0;
    for(int i=0; i<20; i++) {
      x[i] = po.nextInt();
    }
    for(int i=0; i<10; i++) {
        temp = x[19-i];
        x[19-i] = x[i];
        x[i] = temp;
      }
    for(int i=0; i<20; i++) {
      out.println("N["+i+"] = "+x[i]);
    }
  }
}