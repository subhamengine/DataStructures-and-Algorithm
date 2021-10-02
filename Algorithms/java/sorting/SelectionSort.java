import java.util.Arrays;
import java.util.Scanner;

public class SelectionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n,temp1,temp2;
        n=sc.nextInt();
        temp1=n;
        temp2=n;
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            swap(arr,findHighInd(arr,--temp1),--temp2);
        }
        System.out.println(Arrays.toString(arr));
    }

    public static int findHighInd(int[] arr, int num) {
        int temp=arr[0],real=0;
        for(int i=0;i<=num;i++)
        {
            if(temp<arr[i])
            {
                temp=arr[i];
                real=i;
            }
        }
        return real;
    }
    public static void swap(int[] arr, int var1,int var2) {
        int temp;
        temp=arr[var1];
        arr[var1]=arr[var2];
        arr[var2]=temp;
    }

}