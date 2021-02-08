

package Larger;

import java.util.Scanner;


public class larger {

    public static int FUNCTION_F0 (int a, int b)
    {
        int n = a * b;
        return n ;
    }
    
    public static int FUNCTION_F1 (int l, int r) 
    { 
        int a,b = 0,c;
        if (l == r){
      return r;
            }
        else if(l > r){
     a = l;
     
     try{
     b = FUNCTION_F1 (l + 1 , r);
     }
     catch(StackOverflowError e){
         return e.getStackTrace().length;
     }
     
     
     c = FUNCTION_F0 (a, b);
     return c;
    }
        return b;
         }
   public static int FUNCTION_F2 (int l, int r){
   int x = r - l + 1;
   int z = l;
   int y = x - 1;
   int m = 2 * z;
   int Val = ((x * (m + y)) / 2);
   return Val;
   }
    public static void main(String[] args) {
        int l = 0,r = 0,t;int A=0, B=0;
        Scanner in = new Scanner(System.in);
        
        t = in.nextInt();
        while(t > 0){
        l = in.nextInt();
        r = in.nextInt();
        
        
        A = FUNCTION_F2(l, r) ;
        B = FUNCTION_F1(l, r);
        
        int larger = large(A,B);
        
        
        t--;
        }
     
       
    }

    public static int large(int A, int B) {
       int K =  Math.max(A, B);
       if( A < B  ){
        
            System.out.println("0");
          // return 0;
        }
        else if(A > B)
        {
            System.out.println("1");
            //return 1;
        }
        else
        {
            System.out.println("-1");
            //return -1;
        }
         return 0;    
    }
    
}
