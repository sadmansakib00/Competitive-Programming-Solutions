import static java.lang.System.*;
import java.util.Scanner;
public class problem1131 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int inter = 0;
    int gremio = 0;
    int draw = 0;
    boolean flag = false;
    for(int count=1; count>0; count++) {
      int x = po.nextInt();
      int y = po.nextInt();
      if(x>y) {
        inter++;
      }
      else if(y>x) {
        gremio++;
      }
      else {
        draw++;
      }
      for(;;) {
        out.println("Novo grenal (1-sim 2-nao)");
        int j = po.nextInt();
        if(j==1) {
          break;
        }
        else if(j==2) {
          flag = true;
          out.println(count+" grenais");
          out.println("Inter:"+inter);
          out.println("Gremio:"+gremio);
          out.println("Empates:"+draw);
          if(inter>gremio) {
            out.println("Inter venceu mais");
          }
          else if(gremio>inter) {
            out.println("Gremio venceu mais");
          }
          else {
            out.println("Nao houve vencedor");
          }
          break;
        }
      }
      if(flag == true) {
        break;
      }
    }
  }
}