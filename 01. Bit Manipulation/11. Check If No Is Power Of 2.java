//Ques. Check If Number Is Power Of 2 Or Not without using / or Loop?


import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner t=new Scanner(System.in);
        int n=t.nextInt();
        if((n&(n-1))==0)
            System.out.println("Number Is A Power Of 2");
        else
            System.out.println("Number Is Not A Power Of 2");
    }
}