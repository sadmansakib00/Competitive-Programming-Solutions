import static java.lang.System.*;
public class problem1155 {
  public static void main(String[] args) {
    double s = 0;
    for(double i=1; i<=100; i++) {
      s += 1/i;
    }
    out.format("%.2f\n",s);
  }
}