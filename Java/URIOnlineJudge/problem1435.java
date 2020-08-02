import static java.lang.System.*;
import java.util.Scanner;
public class problem1435 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    for(;;) {
      int x = 0;
      int y = 0;
      int n = po.nextInt();
      int a[][] = new int[n][n];
      if(n==0) {
        break;
      }
      else {
        for(int i=0; i<=(int)((n-1)/2); i++) { 
          for(int j=0; j<n; j++) {
            if(j>=i && j<n-i) {
              a[i][j] = i+1;
            }
            else {
              if(j<=(int)((n-1)/2)) {
                a[i][j] = j+1;
              }
              else {
                y=n-j;
                a[i][j] = y;
              }
            }
          }
        }
        for(int i=n-1; i>(int)((n-1)/2); i--) {
          for(int j=0; j<n; j++) {
            if(j>=x && j<n-x) {
              a[i][j] = x+1;
            }
            else {
              if(j<=(int)((n-1)/2)) {
                a[i][j] = j+1;
              }
              else {
                y=n-j;
                a[i][j] = y;
              }
            }
          }
          x++;
        }
      }
      for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
          if(j==n-1) {
              out.println("  "+a[i][j]);
          }
          else {
            out.print("  "+a[i][j]+" ");
          }
        }
      }
      out.println();
    }
  }
}