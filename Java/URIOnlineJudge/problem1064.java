import static java.lang.System.*;
import java.util.Scanner;
public class problem1064 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int postNum = 0;
    float sumOfPost = 0;
    for(int count=1; count<7; count++) {
      float input = po.nextFloat();
      if(input>0) {
        postNum++;
        sumOfPost = sumOfPost+input;
      }
    }
    float avg = sumOfPost/postNum;
    out.println(postNum+" valores positivos");
    out.printf("%.1f\n",avg);
  }
}