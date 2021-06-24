// Java Program to to find occurrence of a character in a String
import java.util.Arrays;
import java.util.Scanner;

public class first_char {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a String : ");
		String s = scan.next();
		System.out.print("Enter any character from string : ") ;
		char c = scan.next().charAt(0);
		System.out.println("The given character is at position " + s.indexOf(c));
	}
}