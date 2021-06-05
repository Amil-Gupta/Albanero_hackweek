import java.util.*;

class q25
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        String s;
        int i,j;
        boolean isogram=true;
        System.out.println("Enter a string");
        s=sc.next();
        for(i=0;i<s.length();i++)
        {
            for(j=i+1;j<s.length();j++)
            {
                if( Character.toLowerCase(s.charAt(i)) == Character.toLowerCase(s.charAt(j)) )
                {
                    System.out.println(Character.toLowerCase(s.charAt(i))+" "+Character.toLowerCase(s.charAt(j)) +" "+ i);
                    isogram=false;
                    break;
                }
            }
            if(!isogram)
            {
                break;
            }
        }
        System.out.println(isogram);
        sc.close();
    }
}