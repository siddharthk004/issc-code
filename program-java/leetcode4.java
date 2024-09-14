
import java.util.*;

class leetcode4
{
    public static void main(String arg[])
    {
        int[] arr1 = {1,6,3,4};
        int[] arr2 = {2,5,7,8};

        int[] arr3 = new int[8];

        Scanner sc = new Scanner(System.in);

        System.out.println("\nYour array 1 is : ");
        
        for(int i = 0;i < arr1.length;i++)
            System.out.print(arr1[i]+" ");

        System.out.println("\nYour array 2 is : ");
        
        for(int i = 0;i < arr2.length;i++)
            System.out.print(arr2[i]+" ");
        
        for(int i = 0;i < 4;i++)
        {
            arr3[i] = arr1[i];
            arr3[i+4] = arr2[i];
        }

        System.out.println("\nYour array 3 is : ");
        
        for(int i = 0;i < arr3.length;i++)
            System.out.print(arr3[i]+" ");

        int min = arr3[0];

        for(int i = 0;i < 7;i++)
        {
            for(int j = 0;j < 8-i-1;j++)
            {
                if(arr3[j] > arr3[j+1])
                {
                    min = arr3[j];
                    arr3[j] = arr3[j+1];
                    arr3[j+1] = min;
                }
            }
        }

        System.out.println("\nYour array 3 is : ");
        
        for(int i = 0;i < arr3.length;i++)
            System.out.print(arr3[i]+" ");

        System.out.println();
        
        if(arr3.length%2 == 0)
        {
            System.out.println(arr3[arr3.length/2]);
        }
        else
        {
            int a = arr3.length/2;
            System.out.println((arr3[a]+arr3[a+1])/2);
        }

        sc.close();
    }
}