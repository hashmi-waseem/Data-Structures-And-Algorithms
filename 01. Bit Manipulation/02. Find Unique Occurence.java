//Ques. All Numbers In Array Appear Even(2,4,6....) Times Except One Number Which Appears Only One Time. 
//      Find The Unique Number?


import java.util.*;
public class Main{
    
    public static void main(String args[]){
        Scanner scr=new Scanner(System.in);
        
        int[] arr={3,4,5,3,4,5,6};
        System.out.println(unique(arr));
        
    }
    
    public static int unique(int[] arr){
        int uni=0;
        for(int n:arr){
            uni=uni^n;
        }
        return uni;
    }
}