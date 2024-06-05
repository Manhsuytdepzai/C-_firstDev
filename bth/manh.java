package bth;
import java.util.Scanner;

public class manh {
    public static void main(String[] args) {
        float a,b,c,delta;
        System.out.print("nhap a = ");
        a = new Scanner(System.in).nextFloat();
        System.out.print("nhap b = ");
        b = new Scanner(System.in).nextFloat();
        System.out.print("nhap c = ");
        c = new Scanner(System.in).nextFloat();
        delta = b*b - 4*a*c;
        if (a==0)
	    {
            if (b==0)
            {
                if (c==0)
                    System.out.print("pt vo so nghiem !");
                else 
                    System.out.print("pt vo nghiem !");	
            }else
            {
                System.out.print("pt co nghiem duy nhat la x = "+(float)(-c/b));
            }
            }else{
            if (delta==0)
                System.out.print("pt co nghiem kep x1=x2= "+(float)(-b/2.0*a));
            if (delta<0)
                System.out.print("pt co nghiem thuc ");
            if (delta>0)
                System.out.print("pt co 2 nghiem phan biet x1 = "+(float)((-b-Math.sqrt(delta))/2.0*a)+" ; x2 = "+(float)((-b+Math.sqrt(delta))/2.0*a));	
        }
    }

}
