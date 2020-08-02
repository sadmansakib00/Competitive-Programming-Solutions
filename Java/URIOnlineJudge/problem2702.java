import static java.lang.System.*;
import java.util.Scanner;
public class problem2702 {
  public static void main (String []args) {
    Scanner po = new Scanner(in);
    int availChick=0,availBeef=0,availPasta=0;
    int askedChick=0,askedBeef=0,askedPasta=0;
    int lackChick=0,lackBeef=0,lackPasta=0,totalLack=0;
    for(int count=1; count<=1 ; count++) {
      availChick = po.nextInt();
      availBeef = po.nextInt();
      availPasta = po.nextInt();
      askedChick = po.nextInt();
      askedBeef = po.nextInt();
      askedPasta = po.nextInt();
      if(availChick>100 || availBeef>100 || availPasta>100 || askedChick>100 || askedBeef>100 || askedPasta>100) {
        count--;
      }
    }
    lackChick = (askedChick - availChick);
    if(lackChick<0) {
      lackChick = 0;
    }
    lackBeef = (askedBeef - availBeef);
    if(lackBeef<0) {
      lackBeef = 0;
    }
    lackPasta = (askedPasta - availPasta);
    if(lackPasta<0) {
      lackPasta = 0;
    }
    totalLack = lackChick + lackBeef + lackPasta;
    out.println(totalLack);
  }
}