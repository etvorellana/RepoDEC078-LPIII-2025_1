public class Main_04 {
    public static void main(String[] args) {
        // Primitive Data Types
        int a = 10;
        int b = a;
        System.out.println("a: " + a);
        System.out.println("b: " + b);
        a = 20;
        System.out.println("a: " + a);
        System.out.println("b: " + b);
        // Reference Data Types
        String yourName = "Who";
        //String myName = yourName;
        String myName = "Who";
        System.out.println("yourName: " + yourName);
        System.out.println("myName: " + myName);
        yourName = "You";
        myName = "You"; 
        System.out.println("yourName: " + yourName);
        System.out.println("myName: " + myName);
        System.out.println(yourName == myName);
    }
}


