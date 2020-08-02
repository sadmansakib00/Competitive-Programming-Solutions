import static java.lang.System.*;
import java.util.Scanner;
public class problem1049 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    String in1 = po.nextLine();
    String in2 = po.nextLine();
    String in3 = po.nextLine();
    String s1 = "vertebrado";
    String s2 = "ave";
    String s3 = "carnivoro";
    String s4 = "onivoro";
    String s5 = "mamifero";
    String s6 = "herbivoro";
    String s7 = "invertebrado";
    String s8 = "inseto";
    String s9 = "hematofago";
    String s10 = "anelideo";
    if( in1.equals(s1) && in2.equals(s2) && in3.equals(s3)) {
      out.println("aguia");
    }
    if(in1.equals(s1) && in2.equals(s2) && in3.equals(s4)) {
      out.println("pomba");
    }
    if(in1.equals(s1) && in2.equals(s5) && in3.equals(s4)) {
      out.println("homem");
    }
    if(in1.equals(s1) && in2.equals(s5) && in3.equals(s6)) {
      out.println("vaca");
    }
    if(in1.equals(s7) && in2.equals(s8) && in3.equals(s9)) {
      out.println("pulga");
    }
    if(in1.equals(s7) && in2.equals(s8) && in3.equals(s6)) {
      out.println("lagarta");
    }
    if(in1.equals(s7) && in2.equals(s10) && in3.equals(s9)) {
      out.println("sanguessuga");
    }
    if(in1.equals(s7) && in2.equals(s10) && in3.equals(s4)) {
      out.println("minhoca");
    }
  }
}