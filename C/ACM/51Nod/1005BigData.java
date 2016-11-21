package test04;

import java.math.BigInteger;
import java.util.Scanner;

public class BigData {
	public static void main(String[] args) {
		BigInteger A,B;
		Scanner sc = new Scanner(System.in);
		A=sc.nextBigInteger();
		B=sc.nextBigInteger();
		System.out.println(A.add(B));
	}
}
