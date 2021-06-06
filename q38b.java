import java.util.*;
class q38b
{
    static int minimum_full_recurse(int step,int cost[])
    {
        if(step>=cost.length)
        {
            return 0;
        }
        int current= (step>=0)?cost[step]:0; //if we are currently outside the staircase, then the cost of the current step is 0
        return (Math.min( minimum_full_recurse(step+1, cost) , minimum_full_recurse(step+2, cost) ) + current );
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        int n,i;
        System.out.println("Enter no. of steps");
        n=sc.nextInt();
        int cost[]=new int[n];
        System.out.println("Enter array of costs");
        for(i=0;i<n;i++)
        {
            cost[i]=sc.nextInt();
        }
        System.out.println(minimum_full_recurse(-1,cost));
        sc.close();
    }
}