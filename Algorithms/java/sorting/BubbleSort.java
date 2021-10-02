import java.util.Arrays;
import java.util.Scanner;

public class BubbleSort {  //For Ascending order.
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        bubblesort(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void bubblesort(int[] arr) {
        for(int i=0;i<arr.length;i++)
        {
            for(int j=1;j<arr.length-i;j++)
            {
                if(arr[j-1]>arr[j])
                {
                    int temp;  //swapping
                    temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                }
            }
        }
    }

}
