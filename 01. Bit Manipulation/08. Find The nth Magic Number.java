//Ques. Find Magic Number Defined by:	convert number to binary and multiply each set bit 
//with 5 to the power position of that bit?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner scr=new Scanner(System.in);
        int n=scr.nextInt();
        System.out.println(Integer.toBinaryString(n));
        int i=0;
        int ans=0;
        while(n!=0){
            int bit=n&1;
            n>>=1;
            if(bit==1)
                ans+=bit*(int)Math.pow(5,i);
            i++;
        }
        System.out.println(ans);
    }
}