import java.util.Scanner;
import java.util.Arrays;
public class SherlockAndDivisors {
  static int primes[] = new int[4792];
  static int neededPrimes[];
  static int freqPrimes[];
  static int totalPrimes;
  static int totalEvenDiv;
  public static void seive(int anInt) {
    boolean flag[] = new boolean[anInt+1];
    int count = 0;
    int val = (int)Math.sqrt(anInt)+1;
    for(int m=2; m<val; m++) {
      if(!flag[m]) {
        for(int n=m; m*n<=anInt; n++)
          flag[n*m] = true;
      }
    }
    for(int m=2; m<anInt; m++) {
      if(!flag[m])
        primes[count++] = m;
    }
  }
  public static void generateDivisors(int anInt) {
    totalPrimes = 0; 
    totalEvenDiv = 0;
    neededPrimes = new int[(int)Math.sqrt(anInt)];
    freqPrimes = new int[(int)Math.sqrt(anInt)];
    int count = 0;
    int val = (int)Math.sqrt(anInt)+1;
    for(int m=0; primes[m]<=val; m++) {
      if(anInt%primes[m]==0) {
        count = 0;
        while(anInt%primes[m]==0) {
          anInt /= primes[m];
          count++;
        }
        neededPrimes[totalPrimes] = primes[m];
        freqPrimes[totalPrimes] = count;
        ++totalPrimes;
        val = (int)Math.sqrt(anInt)+1;
      }
    }
    if(anInt>1) {
      neededPrimes[totalPrimes] = anInt;
      freqPrimes[totalPrimes] = 1;
      ++totalPrimes;
    }
  }
  public static void evenDivisors(int cur, int num) {
    int val;
    if(cur==totalPrimes) {
      if(num%2==0)
        totalEvenDiv++;
    } else {
      val = 1;
      for(int m=0; m<=freqPrimes[cur]; m++) {
        evenDivisors(cur+1,num*val);
        val = val*neededPrimes[cur];
      }
    }
  }
  public static void main(String[] args) {
    Scanner po = new Scanner(System.in);
    seive((int)Math.sqrt(Integer.MAX_VALUE));;
    int tests = po.nextInt();
    while(tests>0) {
      int x = po.nextInt();
      generateDivisors(x);
      evenDivisors(0,1);
      System.out.println(totalEvenDiv);
      --tests;
    }
  }
}