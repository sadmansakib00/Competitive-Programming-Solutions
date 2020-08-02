import java.util.Scanner;
public class LightMoreLight2 {
 public static void main(String[] args) {
  Scanner po = new Scanner(System.in);
  int x,y;
  while((x=po.nextInt())!=0) {
   y = (int)Math.sqrt(x);
   System.out.println(x==y*y ? "yes" : "no");
  }
 }
}