import java.util.*;

class q46
{
    public  static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        String s;
        int l,i,spacecount=0;
        boolean correct=true;
        System.out.println("Enter a string");
        s=sc.nextLine();
        l=s.length();
        if( ( s.charAt(l-1)!='.' ) || ( s.charAt(0) != Character.toUpperCase(s.charAt(0)) ) ) //ends with full stop and starts with an uppercase letter
        {
            correct=false;
        }
        if(correct)
        {
            for(i=0;i<l-1 && correct;i++)
            {
                if( s.charAt(i) == ' ' )
                {
                    spacecount++;
                    if(s.charAt(i+1) == ' ')
                    {
                        correct=false;
                        break;
                    }
                }
                else if( ( Character.toUpperCase(s.charAt(i)) == s.charAt(i) ) && ( Character.toUpperCase(s.charAt(i+1)) == s.charAt(i+1) ) )
                {
                    correct=false;
                    break;
                }
            }
            if(spacecount==0) //the only way to check for the condition "there must be spaces between words" when we cannot identify words is to 
                            //ensure that there are spaces in the string, assuming that the string is multi-word
                            //otherwise,this condition is meaningless
            {
                correct=false;
            }
        }
        System.out.println(correct);
        sc.close();
    }
}