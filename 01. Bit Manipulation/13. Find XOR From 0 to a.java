//Ques. Find XOR Of Number From 0 to that number?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(xorfrom0(n));
    }
    
    public static int xorfrom0(int n){
        if(n%4==0)
            return n;
            
        else if(n%4==1)
            return 1;
            
        else if(n%4==2)
            return n+1;
            
        else if(n%4==3)
            return 0;
            
        return -1;
    }
}