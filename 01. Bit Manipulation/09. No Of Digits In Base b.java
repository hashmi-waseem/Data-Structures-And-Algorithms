//Ques. Find Number Of Digits In base b. eg 6 in base 2 has how many digits?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner scr=new Scanner(System.in);
        int n=scr.nextInt();
        System.out.println("Enter Base In Which The Number Has To Be Converted");
        int b=scr.nextInt();
        int ans=(int) (Math.log(n)/Math.log(b)) + 1;
        System.out.println(ans);
    }
}