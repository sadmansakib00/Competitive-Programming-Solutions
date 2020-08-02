import static java.lang.System.*;
import java.util.Scanner;
public class problem1177 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int a[] = new int[1000];
    for(int i=0; i<1000; i++) {
      for(int j=0; j<n; j++) {
        if(i>999) {
          break;
        }
        a[i] = j;
        i++;
      }
      --i;
    }
    for(int i=0; i<1000; i++) {
      out.println("N["+i+"] = "+a[i]);
    }
  }
}