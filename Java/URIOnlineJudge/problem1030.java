import static java.lang.System.*;
import java.util.Scanner;
import java.util.Arrays;
public class problem1030 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int n = 0;
    int x = 0;
    int y = 0;
    for(int count=1; count==1; count++) {
      n = po.nextInt();
      if(n<1 || n>30) {
        count--;
      }
    }
    for(int count=1; count<=n; count++) {
      int step = 0;
      int carry = 0;
      int temp = 0;
      boolean flag = false;
      for(int check=1; check==1; check++) {
        x = po.nextInt();
        if(x<1 || x>10000) {
          check--;
        }
      }
      for(int check=1; check==1; check++) {
        y = po.nextInt();
        if(y<1 || y>1000) {
          check--;
        }
      }
      int a[] = new int[x];
      int b[] = new int[11000];
      for(int check=0; check<11000; check++) {
        b[check] = check+1;
      }
      for(int check=0; check<x; check++) {
        temp=0;
        for(int check2=0; check2<x; check2++) {
          if(temp==y) {
            break;
          }
          if(b[check2]!=0) {
            step += 1;
            temp++;
            if(step>x) {
              carry = step - x;
              step = carry;
            }
            //a[check] = step;
          }
        }
        /*for(int check3=0; check3<x; check3++) {
          if(a[check3]==step &&  check3!=check) {
            step++;
          }
          if(step>x) {
            carry = step - x;
            step = carry;
          }
        }*/
        a[check] = step;
        b[step-1] = 0;
      }
      out.println(Arrays.toString(a));
      //out.println(Arrays.toString(b));
      out.println("Case "+count+": "+a[x-1]);
    }
  }
}