import java.util.*;

class leetcode3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String s = sc.next();

        char arr[] = s.toCharArray();
        char arr1[] = new char[20];
        int a = 0, f = 0;
        for(char c : arr)
        {
            for(int i = 0;i < 20;i++)
            {
                if(arr1[i] == c)
                {
                    a = 1;
                    break;
                }
                else
                {
                    a = 2;
                }
            }
            if(a == 2)
            {
                arr1[f] = c;
                f = f+1;
            }
        }
        System.out.println("count is : "+f);
    }
}