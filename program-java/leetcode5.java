import java.util.*;

class leetcode5
{
    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);

        char[] arr = new char[5];
        System.out.println("add 5 letters : ");
        int b = 5;
        char[] arr1 = new char[5];
        for(int i=0;i < 5;i++)
        {
            arr[i] = (sc.next()).charAt(0);
            b--;
            arr1[b] = arr[i];
        }

        for(int i = 0;i < 5/2; i++)
        {
            if(arr[0] == arr1[0] && arr[1] == arr1[1])
            {
                System.out.println("String is palindrome");
                for(int k = 0;k<5;k++)
                System.out.print(arr[k]+" ");
                System.out.println();
                break;
            }
            else if(arr[2-1] == arr[2+1])
            {
                System.out.println("String is palindrome");
                for(int k = 1;k<4;k++)
                System.out.print(arr[k]+" ");
                System.out.println();
                break;
            }
            else if(arr[0] == arr[2])
            {
                System.out.println("String is palindrome");
                for(int k = 0;k<3;k++)
                System.out.print(arr[k]+" ");
                System.out.println();
                break;
            }
            else if(arr[2] == arr[4])
            {
                System.out.println("String is palindrome");
                for(int k = 2;k<5;k++)
                System.out.print(arr[k]+" ");
                System.out.println();
                break;
            }
            else if(arr[0] == arr[3] && arr[1] == arr[2])
            {
                System.out.println("String is palindrome");
                for(int k = 0;k<4;k++)
                System.out.print(arr[k]+" ");
                System.out.println();
                break;
            }
            else if(arr[1] == arr[4] && arr[2] == arr[3])
            {
                System.out.println("String is palindrome");
                for(int k = 1;k<5;k++)
                System.out.print(arr[k]+" ");
                System.out.println();
                break;
            }
            else 
            {
                System.out.println("String is not palindrome");
                break;
            }
        }
        sc.close();
    }
}