import java.util.*;

class q40
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        String s,t;
        int i;
        boolean subsequence=false;
        System.out.println("Enter string s<space>string t");
        s=sc.next();
        t=sc.next();
        for(i=0;i<t.length();i++)
        {
            if( t.charAt(i) == s.charAt(0))
            {
                s=s.substring(1,s.length());
            }
            if(s.equals(""))
            {
                subsequence=true;
                break;
            }
        }
        System.out.println(subsequence);
        sc.close();
    }
}