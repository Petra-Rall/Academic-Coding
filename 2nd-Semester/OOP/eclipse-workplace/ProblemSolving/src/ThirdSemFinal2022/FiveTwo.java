package ThirdSemFinal2022;

public class FiveTwo {
    static String str = "a";

    public static void main(String[] args) {
        try {
            str += "b";
            System.out.println(str); // This should print "ab"
            throw new Exception("Whatever");
        } catch (Exception e) {
            str += "c";
        }
            finally {
            str += "d";
            System.out.println(str); // This should print "abcd"
            
        }
        str += "e";
        System.out.println(str);
    }
}
