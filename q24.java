import java.util.*;

class q24
{
    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        int r,c,i,j;
        System.out.println("Enter image dimensions (rows<space>columns)");
        r=sc.nextInt();
        c=sc.nextInt();
        int a[][]=new int[r][c];
        System.out.println("Enter image array");
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
                a[i][j] = (a[i][j] + 1) % 2;
            }
        }
        System.out.println();
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}