import java.math.BigInteger;
import java.util.Scanner;

public class SummationofPolynomials{
public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger n;
        while(sc.hasNextBigInteger()){
            n = sc.nextBigInteger();
            n = n.multiply(n.add(BigInteger.ONE)).divide(BigInteger.valueOf(2));
            n = n.multiply(n);
            System.out.println(n);
            //System.out.println(BigInteger.valueOf(2));
        }
    }
}