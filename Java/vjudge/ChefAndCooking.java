import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class ChefAndCooking {
   public static void main(String[] args) {
      FastReader fr = new FastReader();
      int test,n,max,ans;
      String aStr;
      test = fr.nextInt();
      while(test-- > 0) {
         int color[] = new int[3]; //r=0,g=1,b=2
         n = fr.nextInt();
         aStr = fr.next();
         for(int m=0; m<n; m++) {
            if(aStr.charAt(m) == 'R')
               color[0]++;
            else if(aStr.charAt(m) == 'G')
               color[1]++;
            else
               color[2]++;
         }
         max = Math.max(Math.max(color[0],color[1]),color[2]);
         System.out.println(n-max);
      }
   }
   public static class FastReader {
      BufferedReader br;
      StringTokenizer st;
      public FastReader() {
         br = new BufferedReader(new InputStreamReader(System.in));
      }
      
      String next() {
         while (st == null || !st.hasMoreTokens()) {
            try {
               st = new StringTokenizer(br.readLine());
            } catch (Exception r) {
               r.printStackTrace();
            }
         }
         return st.nextToken();
      }
      
      int nextInt() {
         return Integer.parseInt(next());//converts string to integer
      }
      
      double nextDouble() {
         return Double.parseDouble(next());
      }
      
      long nextLong() {
         return Long.parseLong(next());
      }
      
      String nextLine() {
         String str = "";
         try {
            str = br.readLine();
         } catch (Exception r) {
            r.printStackTrace();
         }
         return str;
      }
   }
}