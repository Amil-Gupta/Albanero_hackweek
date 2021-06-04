import java.util.*;

class q13
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        int r,c,i,j,count=0;
        System.out.println("Enter no. of rows");
        r=sc.nextInt();
        System.out.println("Enter no. of columns");
        c=sc.nextInt();
        int a[][]=new int[r][c];
        System.out.println("Enter array elements");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]==1)
                {
                    count++;
                }
            }
        }
        System.out.println(count);
        sc.close();
    }
}