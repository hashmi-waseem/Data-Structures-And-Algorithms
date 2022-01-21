//Ques. Find total no of set bits in n?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(Integer.toBinaryString(n));
        int count=0;
        while(n>0){
            n=n-(n&(-n));	//OR n=n&(n-1);
            count++;
        }
        
        System.out.println("No of digits is:    "+count);
    }
}