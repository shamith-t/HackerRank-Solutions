import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        List<Integer> ls=new ArrayList<Integer>();
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        for(int i=0;i<n;i++){
          ls.add(scanner.nextInt());
        }
        int q=scanner.nextInt();
        String s;
        for(int i=0;i<q;i++){
          s=scanner.next();
          if(s.equals("Insert")){
            ls.add(scanner.nextInt(),scanner.nextInt());
          }
          else{
            ls.remove(scanner.nextInt());
          }
        }
        for(int i:ls){
            System.out.print(i+" ");
          }
    }
}
