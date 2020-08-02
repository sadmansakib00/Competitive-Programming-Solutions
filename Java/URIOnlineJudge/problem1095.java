import static java.lang.System.*;
public class problem1095 {
  public static void main(String[] args) {
    int i = -2;
    for(int j=60; j>=0; j-=5) {
      i+=3;
      out.println("I="+i+" J="+j);
    }
  }
}