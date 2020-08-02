import static java.lang.System.*;
import java.util.Scanner;
public class problem11364 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = po.nextInt();
    int r = 0;
    int temp = 0;
    int min = 0;
    int minPos = 0;
    int sum = 0;
    for(int x=1; x<=n; x++) {
      sum = 0;
      int m = po.nextInt();
      int a[] = new int[m];
      for(int y=0; y<m; y++) {
        r = po.nextInt();
        a[y] = r;
      }
      for(int y=0; y<m-1; y++) {
        min = a[y];
        temp = min;
        minPos = y;
        for(int z=y+1; z<m; z++) {
          if(a[z]<min) {
            minPos = z;
            min = a[z];
          }
        }
        a[y] = min;
        a[minPos] = temp;
      }
      for(int y=0; y<m-1; y++) {
        sum += a[y+1]-a[y];
      }
      sum += a[m-1] - a[0];
      out.println(sum);
    }
  }
}