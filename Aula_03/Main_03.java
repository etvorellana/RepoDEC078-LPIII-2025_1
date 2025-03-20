public class Main_03 {
    public static void main(String[] args) {
        /*
         * Tipos de dados primitivos   
         * Para declarar uma variável utilizamos a seguinte sintaxe:
         * tipo nome = valor Inicial;
         */
        
        byte bVar = (byte)127; // 1 byte - Stores whole numbers from -128 to 127
        short sVar = 32_767; // 2 bytes - Stores whole numbers from -32,768 to 32,767
        int iVar = 2_147_483_647; // 4 bytes - Stores whole numbers from -2,147,483,648 to 2,147,483,647
        // 8 bytes - Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 
        long lVar = 9_223_372_036_854_775_807L;
        // 4 bytes - Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits 
        float fVar = 3.4028235E38f; 
        // 8 bytes - Stores fractional numbers. Sufficient for storing 15 decimal digits 
        double dVar = 1.7976931348623157E308; 
        boolean boolVar = true; // 1 bit - Stores true or false values
        char cVar = 'A'; // Stores a single character/letter or ASCII values
        System.out.println("byte: " + bVar);
        System.out.println("byte max " + Byte.MAX_VALUE);
        System.out.println("byte min " + Byte.MIN_VALUE);
        System.out.println("short: " + sVar);
        System.out.println("short max " + Short.MAX_VALUE);
        System.out.println("short min " + Short.MIN_VALUE);
        System.out.println("int: " + iVar);
        System.out.println("int max " + Integer.MAX_VALUE);
        System.out.println("int min " + Integer.MIN_VALUE);
        System.out.println("long: " + lVar);
        System.out.println("long max " + Long.MAX_VALUE);
        System.out.println("long min " + Long.MIN_VALUE);
        System.out.println("float: " + fVar);
        System.out.println("float max " + Float.MAX_VALUE);
        System.out.println("float min " + Float.MIN_VALUE);
        System.out.println("double: " + dVar);
        System.out.println("double max " + Double.MAX_VALUE);
        System.out.println("double min " + Double.MIN_VALUE);
        System.out.println("boolean: " + boolVar);
        System.out.println("char: " + cVar);

    }
}


/* 
Compilando
$ javac Main_03.java
Executando
$ java Main_03
Saída
> byte: 127
> byte max 127
> byte min -128
> short: 32767
> short max 32767
> short min -32768
> int: 2147483647
> int max 2147483647
> int min -2147483648
> long: 9223372036854775807
> long max 9223372036854775807
> long min -9223372036854775808
> float: 3.4028235E38
> float max 3.4028235E38
> float min 1.4E-45
> double: 1.7976931348623157E308
> double max 1.7976931348623157E308
> double min 4.9E-324
> boolean: true
> char: A
*/