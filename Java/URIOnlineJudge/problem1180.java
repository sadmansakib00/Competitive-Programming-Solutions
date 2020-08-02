import static java.lang.System.*;
import java.util.Scanner;
public class problem1180 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int a[] = new int[n];
    int pos = 0;
    int min = 0;
    for(int i=0; i<n; i++) {
      int x = po.nextInt();
      if(i==0) {
        pos = i;
        min = x;
      }
      else {
        if(x<min) {
          pos = i;
          min = x;
        }
      }
    }
    out.println("Menor valor: "+min);
    out.println("Posicao: "+pos);
  }
}