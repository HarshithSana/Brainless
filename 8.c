import java.math.BigInteger;

public class RSA {
    public static void main(String[] args) {
        int p = 3, q = 11;

        BigInteger N = BigInteger.valueOf(p * q);
        BigInteger phi = BigInteger.valueOf((p - 1) * (q - 1));

        BigInteger e = BigInteger.valueOf(3);
        BigInteger d = e.modInverse(phi);

        BigInteger M = BigInteger.valueOf(5);

        BigInteger C = M.modPow(e, N);
        BigInteger P = C.modPow(d, N);

        System.out.println("N = " + N + " phi = " + phi
                + " e = " + e + " d = " + d);
        System.out.println("Encrypted: " + C);
        System.out.println("Decrypted: " + P);
    }
}