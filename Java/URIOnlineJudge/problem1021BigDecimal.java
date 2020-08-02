import java.util.Scanner;
import java.math.BigDecimal;
public class problem1021BigDecimal {
   public static void printNote(BigDecimal bd,String aStr) {
      int val = (int)(double)Double.parseDouble(bd.toString());
      System.out.println(val+" nota(s) de R$ "+aStr);
   }
   public static void printCoin(BigDecimal bd,String aStr) {
      int val = (int)(double)Double.parseDouble(bd.toString());
      System.out.println(val+" moeda(s) de R$ "+aStr);
   }
   public static void main(String[] args) {
      Scanner po = new Scanner(System.in);
      BigDecimal input = BigDecimal.valueOf(po.nextDouble());
      System.out.println("NOTAS:");
      printNote(input.divide(BigDecimal.valueOf(100)),"100.00");
      input = input.remainder(BigDecimal.valueOf(100));
      printNote(input.divide(BigDecimal.valueOf(50)),"50.00");
      input = input.remainder(BigDecimal.valueOf(50));
      printNote(input.divide(BigDecimal.valueOf(20)),"20.00");
      input = input.remainder(BigDecimal.valueOf(20));
      printNote(input.divide(BigDecimal.valueOf(10)),"10.00");
      input = input.remainder(BigDecimal.valueOf(10));
      printNote(input.divide(BigDecimal.valueOf(5)),"5.00");
      input = input.remainder(BigDecimal.valueOf(5));
      printNote(input.divide(BigDecimal.valueOf(2)),"2.00");
      input = input.remainder(BigDecimal.valueOf(2));
      System.out.println("MOEDAS:");
      printCoin(input,"1.00");
      input = input.remainder(BigDecimal.valueOf(1.00));
      printCoin(input.divide(BigDecimal.valueOf(0.50)),"0.50");
      input = input.remainder(BigDecimal.valueOf(0.50));
      printCoin(input.divide(BigDecimal.valueOf(0.25)),"0.25");
      input = input.remainder(BigDecimal.valueOf(0.25));
      printCoin(input.divide(BigDecimal.valueOf(0.10)),"0.10");
      input = input.remainder(BigDecimal.valueOf(0.10));
      printCoin(input.divide(BigDecimal.valueOf(0.05)),"0.05");
      input = input.remainder(BigDecimal.valueOf(0.05));
      printCoin(input.divide(BigDecimal.valueOf(0.01)),"0.01");
   }
}