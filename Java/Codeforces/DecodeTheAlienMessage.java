import java.io.*;
import java.util.*;
public class DecodeTheAlienMessage {
    public static void main(String[] args){
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader sc = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);

        //Do your work here.
        //To print something use this “out.println(“Whatever”);”
		
		int t,n,temp;
		t = sc.nextInt();
		for(int i=1; i<=t; i++) {
			n = sc.nextInt();
			String s = "";
			for(int j=0; j<n; j++) {
				temp = sc.nextInt();
				if(s.equals("")) {
					if(temp%2==0) s += "1";
				} else {
					if(temp%2==1) s += "0";
					else s += "1";
				}
			}
			out.println("Case "+i+": "+s);
		}
		
        out.close();
    }
    static class InputReader {
        public BufferedReader reader;
        public StringTokenizer tokenizer;
 
        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }
 
        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }
 
        public int nextInt() {
            return Integer.parseInt(next());
        }

        public long nextLong() {
        	return Long.parseLong(next());
        }

       public String nextLine() {
			try {
				return reader.readLine();
			} catch (IOException e) {
				throw new RuntimeException(e);
			}
		}

	}
}
