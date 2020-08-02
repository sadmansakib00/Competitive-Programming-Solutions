import static java.lang.System.*;
import java.util.Scanner;
public class problem1071 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int in1 = po.nextInt();
    int in2 = po.nextInt();
    int sum = 0;
    if(in1>in2) {
      for(int count=in2+1; count<in1; count++) {
        if(count%2!=0) {
          sum=sum+count;
        }
      }
    }
    else {
      for(int count=in1+1; count<in2; count++) {
        if(count%2!=0) {
          sum=sum+count;
        }
      }
    }
    out.println(sum);
  }
}