// Java Program to convert char Array to String......
import java.util.Arrays;
import java.util.Scanner;

public class chararray_to_string {
	public static void main(String[] args){
		int n, i, j ;
		Scanner scan = new Scanner(System.in) ;
		System.out.print("Enter Size of the Array : ");
		n = scan.nextInt() ;
		char c[] = new char[n];
		System.out.println("Enter elements of the array : ");
		for(i = 0; i < n; i++) {
			c[i] = scan.next().charAt(0) ;
		}
		String str = String. valueOf(c);
		System.out.println("String is : "+ str) ;
	}
}