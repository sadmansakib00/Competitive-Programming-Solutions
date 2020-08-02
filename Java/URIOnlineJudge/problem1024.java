import static java.lang.System.*;
import java.util.Scanner;
public class problem1024 {
  public static void main(String[] args) {
    Scanner po = new Scanner(in);
    int noOfTests = po.nextInt(); po.nextLine();
    String temp = "";
    char[] anotherTemp = null;
    char tempChar;
    for(int m=0; m<noOfTests; m++) {
      temp = po.nextLine();
      anotherTemp = temp.toCharArray();
      for(int i=0; i<temp.length(); i++) {
        if((anotherTemp[i]>64 && anotherTemp[i]<91) || (anotherTemp[i]>96 && anotherTemp[i]<123)) {
          anotherTemp[i] = (char)((int)anotherTemp[i]+3);
        }
      }
      for(int i=0,j=anotherTemp.length-1; i<anotherTemp.length/2; i++,j--) {
        tempChar = anotherTemp[i];
        anotherTemp[i] = anotherTemp[j];
        anotherTemp[j] = tempChar;
      }
      for(int i=anotherTemp.length/2; i<anotherTemp.length; i++) {
        //if((anotherTemp[i]>61 && anotherTemp[i]<94) || (anotherTemp[i]>93 && anotherTemp[i]<126))
          anotherTemp[i] = (char)((int)anotherTemp[i]-1);
      }
      temp = new String(anotherTemp);
      out.println(temp);
    }
  }
}