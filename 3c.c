public class HillCipher {
    static int[][] key={{3,3},{2,5}};
    static int[][] inv={{15,17},{20,9}};

    static String process(String s,int[][] m){
        String r="";
        for(int i=0;i<s.length();i+=2){
            int a=s.charAt(i)-'A';
            int b=s.charAt(i+1)-'A';
            r+=(char)('A'+(m[0][0]*a+m[0][1]*b)%26);
            r+=(char)('A'+(m[1][0]*a+m[1][1]*b)%26);
        }
        return r;
    }

    public static void main(String[] args){
        String plain="HELP";
        String enc=process(plain,key);
        String dec=process(enc,inv);

        System.out.println("Plain Text : "+plain);
        System.out.println("Key Matrix : [[3,3],[2,5]]");
        System.out.println("Encrypted Text : "+enc);
        System.out.println("Decrypted Text : "+dec);
    }
}