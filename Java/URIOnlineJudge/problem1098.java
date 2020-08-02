import static java.lang.System.*;
public class problem1098 {
  public static void main(String[] args) {
    double j1 = .8;
    double j2 = 1.8;
    double j3 = 2.8;
    for(double i=0; i<=2; i+=0.2) {
      if(i==0 || i==1 || i>=1.9&&i<=2.1) {
        out.printf("I=%.0f J=%.0f\n",i,(j1+=.2));
        out.printf("I=%.0f J=%.0f\n",i,(j2+=.2));
        out.printf("I=%.0f J=%.0f\n",i,(j3+=.2));
      }
      else {
        out.printf("I=%.1f J=%.1f\n",i,(j1+=.2));
        out.printf("I=%.1f J=%.1f\n",i,(j2+=.2));
        out.printf("I=%.1f J=%.1f\n",i,(j3+=.2));
      }
    }
  }
}