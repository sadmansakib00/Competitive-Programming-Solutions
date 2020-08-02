import static java.lang.System.*;
import java.util.Scanner;
public class problem1040 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    float n1 = po.nextFloat();
    float n2 = po.nextFloat();
    float n3 = po.nextFloat();
    float n4 = po.nextFloat();
    float avg1 = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    out.printf("Media: "+"%.1f\n",avg1); 
    if(avg1>=7)
    {
      out.println("Aluno aprovado.");
    }
    if(avg1<5)
    {
      out.println("Aluno reprovado.");
    }
    if(avg1>=5 && avg1<=6.9)
    {
      out.println("Aluno em exame.");
      float retestScore = po.nextFloat();
      out.println("Nota do exame: "+retestScore);
      float avg2 = (avg1+retestScore)/2;
      if(avg2>=5)
      {
        out.println("Aluno aprovado.");
      }
      if(avg2<=4.9)
      {
        out.println("Aluno reprovado.");
      }
      out.printf("Media final: "+"%.1f\n",avg2);
    }
  }
}