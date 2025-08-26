

import java.util.*;

class leetcode1
{
    public static void main(String arg[])
    {
        int target = 0;
        int[] arr = {1,2,3,4,5,6,7};

        Scanner sc = new Scanner(System.in);

        System.out.println("\nEnter the Target : ");
        target = sc.nextInt();

        for(int i = 0;i < arr.length;i++)
        {
            for(int j = i;j < arr.length;j++)
            {
                int a = arr[i]+arr[j];

                if(a == target)
                {
                    System.out.println("\n"+i+" "+j);
                }
            }
        }
        sc.close();
    }
}
