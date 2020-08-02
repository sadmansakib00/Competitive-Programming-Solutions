import static java.lang.System.*;
public class problem1097 {
  public static void main(String[] args) {
    int j1 = 5;
    int j2 = 4;
    int j3 = 3;
    for(int i=1; i<=9; i+=2) {
      out.println("I="+i+" J="+(j1+=2));
      out.println("I="+i+" J="+(j2+=2));
      out.println("I="+i+" J="+(j3+=2));
    }
  }
}