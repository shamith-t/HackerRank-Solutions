import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        // Complete the function
        a="0"+a.toUpperCase()+"0";
        b="0"+b.toUpperCase()+"0";
        if(a.length()!=b.length())
          return false;
        for(int i=1;i<a.length()-1;i++){
          for(int j=1;j<b.length()-1;j++){
            if(a.charAt(i)==b.charAt(j)){
              b=b.substring(0,j)+"0"+b.substring(j+1,b.length());
              break;
            }
            if(j==b.length()-2)
              return false;
          }
        }
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
