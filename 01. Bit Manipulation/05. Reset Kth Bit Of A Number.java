//Ques. Given integer n and k, make the kth bit 0 if it is 1?


//Make 1 to zero and 0 remains same

import java.util.*;
public class Main
{
 public static void main (String args[])
  {
    Scanner scr = new Scanner (System.in);
    int n = scr.nextInt ();
    System.out.println (Integer.toBinaryString (n));
    int k = scr.nextInt ();
    kthBit (n, k);
  }

  public static void kthBit (int n, int k)
  {
    int mask=1<<(k-1);
    int mask1=~mask;
    int ans=n&mask1;
    System.out.println ("After Re-Setting " + k + "th Bit:     " +Integer.toBinaryString (ans));
  }
}