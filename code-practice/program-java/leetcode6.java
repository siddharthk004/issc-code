import java.util.*;
import java.util.Arrays;

class leetcode6
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a String : ");
        String str1 = sc.next();

        System.out.println("Enter number of rows : ");
        int rows = sc.nextInt();

        char[] arrs = str1.toCharArray();
        char[] arrs1 = new char[10];

        int b = 0;
        if(arrs.length < rows)
        {
            for(int o = 0;o < arrs.length;o++)
                System.out.print(arrs[o]+"\t");
        }
        else
        {
            arrs1[0] = arrs[0];
            for(int i = 1;i < arrs.length;i++)
            {
                if(i%2 == 0)
                {
                    b = b+1;
                    arrs1[b] = arrs[i];
                }
            }
            for(int i = 1;i < arrs.length;i++)
            {
                if(i%2 != 0)
                {
                    b = b+1;
                    arrs1[b] = arrs[i];
                }
            }
        }
        for(int o = 0;o < arrs.length;o++)
            System.out.print(arrs[o]+"\t");
    }
}