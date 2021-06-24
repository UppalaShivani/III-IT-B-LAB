// Java program to Add two Complex Numbers
import java.util.* ;
import java.util.Scanner ;

class Complex {
    int real, imaginary ;
    Complex()
    {
    }
    Complex(int tempReal, int tempImaginary)
    {
        real = tempReal ;
        imaginary = tempImaginary ;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp = new Complex() ;
        temp.real = C1.real + C2.real ;
        temp.imaginary = C1.imaginary + C2.imaginary ;
        return temp ;
    }
}

public class  add_Complex_numbers{
	public static void main(String[] args){
		int x, y ;
		Scanner scan = new Scanner(System.in) ;
		System.out.print("Enter real part of Complex 1 : ") ;
		x = scan.nextInt() ;
		System.out.print("Enter imaginary part of Complex 1 : ") ;
		y = scan.nextInt() ;
		Complex C1 = new Complex(x, y) ;
        System.out.println("Complex number 1 : " + C1.real + " + i" + C1.imaginary) ;
        System.out.print("Enter real part of Complex 2 : ") ;
		x = scan.nextInt() ;
		System.out.print("Enter imaginary part of Complex 2 : ") ;
		y = scan.nextInt() ;
        Complex C2 = new Complex(x, y) ;
        System.out.println("Complex number 2 : " + C2.real + " + i" + C2.imaginary) ;
        Complex C3 = new Complex() ;
        C3 = C3.addComp(C1, C2) ;
        System.out.println("Sum of complex number : " + C3.real + " + i" + C3.imaginary) ;
	}
}