import java.util.*;

class q39
{
    static int largest_sum(int a[])
    {
        if(a.length==1) 
        {
            return a[0]; //this will be our final sum
        }
        else
        {
            while(a[0]<0 && a.length!=1) //negative numbers on the corners of the subarray will always decrease the sum
            {
                a=Arrays.copyOfRange(a, 1, a.length);
            }
            while(a[a.length - 1]<0 && a.length!=1) //negative numbers on the corners of the subarray will always decrease the sum
            {
                a=Arrays.copyOfRange(a, 0, a.length - 1);
            }
            if(a.length!=1) //Converging to a sum by adding the last values on either corner of the subarray to the penultimate positions
            {
                a[1] += a[0];
                a[a.length-2] += a[a.length-1];
                if(a.length==2)
                {
                    return a[1]; //as a[0] will have a faulty value in this case,while a[1] will have the final sum
                }
                a=Arrays.copyOfRange(a, 1, a.length -1);
            }
            return largest_sum(a); //Until we get our final sum, we keep converging towards the center and removing negative values on the corners
        }
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        int n,i;
        System.out.println("Enter size of array");
        n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter values");
        for(i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println(largest_sum(a));
        sc.close();
    }
}