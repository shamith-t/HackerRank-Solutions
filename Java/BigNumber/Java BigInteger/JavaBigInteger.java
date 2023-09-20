import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan=new Scanner(System.in);
        String a=scan.nextLine();
        String b=scan.nextLine();
        BigInteger A=new BigInteger(a);
        BigInteger B=new BigInteger(b);
        
        BigInteger sum=A.add(B);
        BigInteger mul=A.multiply(B);
        
        System.out.println(sum.toString()+'\n'+mul.toString());
    }
}
