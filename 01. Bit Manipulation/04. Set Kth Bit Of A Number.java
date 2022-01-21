//Ques. Given Integer n and k, if kth bit of n is 0 make it 1?


// make 0 to 1 and 1 remains 1

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
    int mask = n | (1 << (k - 1));
    System.out.println ("After Setting " + k + "th Bit:     " +Integer.toBinaryString (mask));
  }
}
