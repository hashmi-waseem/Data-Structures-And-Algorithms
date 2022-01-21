//Ques. Find XOR from range a to b?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int ans = xorRange(b)^xorRange(a-1);
        System.out.println("Xor in range a to b is:     "+ans);
    }
    
    public static int xorRange(int n){
        int ans1=0;
        
        if(n%4==0)
            ans1=n;
        else if(n%4==1)
            ans1=1;
        else if(n%4==2)
            ans1=n+1;
        else if(n%4==3)
            ans1=0;
        
        return ans1;
    }
}