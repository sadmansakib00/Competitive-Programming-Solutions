import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class PetrAndBook {
   public static void main(String[] args) {
      FastReader fr = new FastReader();
      int pages,count=0,day=0;
      int days[] = new int[8];
      pages = fr.nextInt();
      for(int m=1; m<8; m++)
         days[m] = fr.nextInt();
      for(int m=1; ;m++) {
         day = m%7==0?7:m%7;
         count += days[day];
         if(count>=pages) {
            System.out.println(day);
            break;
         }
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