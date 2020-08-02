import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class EnormousInputTest {
   public static void main(String[] args) {
      FastReader fr = new FastReader();
      int n,k,t,total=0;
      n = fr.nextInt();
      k = fr.nextInt();
      while(n-- > 0) {
         t = fr.nextInt();
         if(t%k==0)
            total++;
      }
      System.out.println(total);
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