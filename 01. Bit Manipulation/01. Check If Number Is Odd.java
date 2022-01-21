//Ques. Check If Number Is Odd Or Not Without Using % Or LOOP?
import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner scr=new Scanner(System.in);
        int n=scr.nextInt();
        System.out.println(isOdd(n));
    }

    public static boolean isOdd(int n){
        System.out.print("Checking Whether No Is Odd:     ");
        return (n&1)==1;
    }
}
