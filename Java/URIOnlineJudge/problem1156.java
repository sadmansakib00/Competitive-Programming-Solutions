import static java.lang.System.*;
public class problem1156 {
  public static void main(String[] args) {
    double s = 0;
    double j = 1;
    for(double i=1; i<=39; i+=2) {
      s += i/j;
      j += j;
    }
    out.printf("%.2f\n",s);
  }
}