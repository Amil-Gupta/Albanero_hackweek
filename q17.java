import java.util.*;

class q17
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        int r,c,i,j,sum=0;
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
                if(a[i][j] % 2 == 0)
                {
                    sum += a[i][j];
                }
            }
        }
        System.out.println(sum);
        sc.close();
    }
}