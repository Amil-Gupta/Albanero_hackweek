import java.util.*;

class q46
{
    public  static void main(String args[]) throws Exception
    {
        Scanner sc=new Scanner(System.in);
        String s;
        int l,i;
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
                if( s.charAt(i) == ' ' && s.charAt(i+1) == ' ' )
                {
                    correct=false;
                    break;
                }
                else if( ( Character.toUpperCase(s.charAt(i)) == s.charAt(i) ) && ( Character.toUpperCase(s.charAt(i+1)) == s.charAt(i+1) ) )
                {
                    correct=false;
                    break;
                }
            }
        }
        System.out.println(correct);
        sc.close();
    }
}

//as we cannot identify words, the condition that "there should be spaces between words" does not need to be checked
//(it is also not specified that the string is multi-word, thus a single word without spaces is indistinguishable from multiple words without spaces)