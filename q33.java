import java.util.*;

class q33
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc= new Scanner(System.in);
        int n,i,j;
        String s1;
        System.out.println("Enter no. of words");
        n=sc.nextInt();
        String a[]=new String[n];
        System.out.println("Enter the words");

        for(i=0;i<n;i++)
        {
            a[i]=sc.next();
        }

        for(i=0;i<n;i++)
        {
            s1 = "" + Character.toUpperCase(a[i].charAt(0));
            for(j=1 ; j<a[i].length() ; j++)
            {
                s1= s1 + Character.toLowerCase(a[i].charAt(j));
            }
            a[i]=s1;
        }

        System.out.print("[ ");
        for(i=0;i<n-1;i++)
        {
            System.out.print(a[i] + ", ");
        }
        System.out.println(a[i] + " ]");
        sc.close();
    }
}