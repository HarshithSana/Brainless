import java.util.Scanner;

class SubstitutionCipher {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = "abcdefghijklmnopqrstuvwxyz";
        String b = "zyxwvutsrqponmlkjihgfedcba";

        System.out.print("Enter text: ");
        String text = sc.nextLine().toLowerCase();

        String enc = "", dec = "";

        // Encryption
        for (char c : text.toCharArray())
            enc += b.charAt(a.indexOf(c));

        // Decryption
        for (char c : enc.toCharArray())
            dec += a.charAt(b.indexOf(c));

        System.out.println("Encrypted: " + enc);
        System.out.println("Decrypted: " + dec);
    }
}