//Ques. Find position of right most bit and leave all zeros after it same?


// Gives Right Most SetBit and ignores all bits before it  eg.101010010		gives 10

import java.util.*;
public class Main
{
 public static void main (String args[])
  {
    Scanner scr = new Scanner (System.in);
    int n = scr.nextInt ();
    System.out.println (Integer.toBinaryString (n));
    rightMost (n);
  }

  public static void rightMost (int n)
  {
    int mask=n&(-n);
    System.out.println ("Right Most Value Is:     " +Integer.toBinaryString (mask));
  }
}
