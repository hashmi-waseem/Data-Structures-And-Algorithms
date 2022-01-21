//Ques. Find Sum of nth row in Pascal's Triangle?

//Sum of each row is 2^row

import java.util.*;
public class Main{
    public static void main(String args[]){
        Scanner t=new Scanner(System.in);
        System.out.println("Enter the row of Pascal's Triangle 1 based numbering");
        int row=t.nextInt();
        int ans=1<<(row-1);
        System.out.println("The sum of the row of Pascal's Triangle is:     "+ans);
    }
}