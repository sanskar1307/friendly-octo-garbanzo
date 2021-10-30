/* Write a java program which accept string from user and count number of small characters.
Input : “Marvellous”
Output : 9*/
import java.util.*;
class q2
{
   public static void main(String Args[])
   {
      int iRet=0;
      StringDemo sobj=new StringDemo();
      sobj.Accept();
     
      iRet=sobj.CountSmall();
      System.out.println("Number of small letters are:"+iRet);
   }
}

class StringX
{
   public String str;
   public void Accept()
   {
      Scanner sobj= new Scanner(System.in);
      System.out.println("Enter String:");
      str=sobj.nextLine();
   }
   public void Display()
   {
      System.out.println("Entered String is:"+str);
   }

}

class StringDemo extends StringX
{
  public int CountSmall()
  {
    char Arr[]=str.toCharArray();
    int iCnt=0,i=0;
    for(i=0;i<Arr.length;i++)
    {
      if((Arr[i]>='a') && (Arr[i]<='z'))
      {
         iCnt++;
      }
    }
   return iCnt;
  }
}