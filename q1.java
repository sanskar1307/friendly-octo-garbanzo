/*Write a Java program which accept string from user and count 
Input : “Marvellous Multi OS”
Output : 4*/
import java.util.*;
class q1
{
   public static void main(String Args[])
   {
      int iRet=0;
      StringDemo sobj=new StringDemo();
      sobj.Accept();
     
      iRet=sobj.CountCapital();
      System.out.println("Number of Capital letters are:"+iRet);
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
  public int CountCapital()
  {
    char Arr[]=str.toCharArray();
    int iCnt=0,i=0;
    for(i=0;i<Arr.length;i++)
    {
      if((Arr[i]>='A') && (Arr[i]<='Z'))
      {
         iCnt++;
      }
    }
   return iCnt;
  }
}