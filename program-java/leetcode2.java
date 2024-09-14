import java.util.*;
import java.util.LinkedList;

class leetcode2
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);

        LinkedList<Integer> linkedlist1 = new LinkedList<>();
        LinkedList<Integer> linkedlist2 = new LinkedList<>();

        System.out.println("Enter the first Number length : ");
        int len1 = sc.nextInt();

        for(int i = 0;i < len1;i++)
        {
            System.out.print(""+ i + " : ");
            linkedlist1.add(sc.nextInt());
        }

        System.out.println("Enter the Second Number length : ");
        int len2 = sc.nextInt();

        for(int i = 0;i < len2;i++)
        {
            System.out.print(""+ i + " : ");
            linkedlist2.add(sc.nextInt());
        }

        StringBuilder build1 = new StringBuilder();
        StringBuilder build2 = new StringBuilder();

        for(Integer num : linkedlist1)
        {
            build1.append(num.toString());
        }

        for(Integer num : linkedlist2)
        {
            build2.append(num.toString());
        }

        String result1 = build1.toString();
        String result2 = build2.toString();

        int result3 = Integer.parseInt(result1);
        int result4 = Integer.parseInt(result2);

        int ans = result3 + result4;
        int ans2 = 0;

        LinkedList<Integer> linkedlist3 = new LinkedList<>();

        while(ans != 0)
        {
            ans2 = ans%10;
            ans = ans / 10;
            linkedlist3.add(ans2);
        }

        System.out.println(linkedlist3);

        sc.close();
    }
}