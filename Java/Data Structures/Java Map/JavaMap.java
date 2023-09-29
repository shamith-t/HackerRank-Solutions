//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
	public static void main(String []argh)
	{
		Scanner in = new Scanner(System.in);
		int n=in.nextInt();
		in.nextLine();
    Map <String,String> phonebook=new HashMap<String,String>();
		for(int i=0;i<n;i++)
		{
			phonebook.put(in.nextLine(),in.nextLine());
		}
		while(in.hasNext())
		{
			String s=in.nextLine();
      if(phonebook.containsKey(s)){
        System.out.println(s+"="+phonebook.get(s));
      }
      else{
        System.out.println("Not found");
      }
		}
	}
}
