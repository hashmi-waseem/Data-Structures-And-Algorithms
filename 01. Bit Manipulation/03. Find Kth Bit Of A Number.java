//Ques. Given Integer n and k, find kth bit of the number?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner scr=new Scanner(System.in);
        int n=scr.nextInt();
        int k=scr.nextInt();                //Enter the bit no to display
        System.out.println(Integer.toBinaryString(n));
        kthBit(n,k);
    }
    
    public static void kthBit(int n, int k){
        int mask=n&(1<<(k-1));
        int ans=mask>>(k-1);
        System.out.println(k+"th Bit Is:     "+ans);
    }
}