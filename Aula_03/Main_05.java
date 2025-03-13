public class Main_05 {

    public static void main(String[] args) {
        // Algebric Operators
              
        // Sobre a inicialização de variáveis
        int a = 10; //Declarando e inicializando um inteiro
        int b; //Declarando um inteiro (inicializa com 0)
        b = 20; //Atribuindo um valor a variável b
        System.out.println("a: " + a);
        System.out.println("b: " + b);
        System.out.println("________________________________________\n");

        // Operadores com numerais (byte, short, int long)
        int a1, a2, a3, a4, a5;
        // atribuições múltiplas em um único comando
        a1 = a2 = a3 = a4 = a5 = a;
        System.out.println("a = " + a + " a1 = " + a1 + " a2 = " + a2);
        System.out.println("a3 = " + a3 + " a4 = " + a4 + " a5 = " + a5);
        System.out.println("________________________________________\n");

        // Operadores Aritméticos
        System.out.println("Operadores binários\n");
        a = a1 + a2; // adição
        System.out.println(a1 + " + " + a2 + " = " + a );
        a3 = a2 - a4; // substração
        System.out.println(a2 + " - " + a4 + " = " + a3 );
        a4 = -a5; // utilizado como operador unário
        System.out.println(" -" + a5 + " -> " + a4 );
        a2 = a1 * a3; // multiplicação
        System.out.println(a1 + " * " + a3 + " = " + a2 );
        a = 4 / 2; // Divisão inteira
        System.out.println("4 / 2  = " + a );
        a = 5 / 2; // Divisão inteira (truncada)
        System.out.println("5 / 2 = " + a );
        a = 4 % 2; // Resto da divisão
        System.out.println("4 % 2 = " + a );
        a = 5 % 2; // Resto da divisão
        System.out.println("5 % 2 = " + a );
        System.out.println("________________________________________\n");

        System.out.println("Operadores de Incremento e decremento\n");
        System.out.println("a = " + a);
        //++a;  equivalente a = a + 1;
        System.out.println("++a = " + ++a);
        System.out.println("a++ = " + a++);
        System.out.println("a = " + a);
        //--aç equivalente a = a - 1;
        System.out.println("--a = " + --a);
        System.out.println("a-- = " + a--);
        System.out.println("a = " + a);
        System.out.println("________________________________________\n");

        System.out.println("Operadores de Compostos\n");
        System.out.println("a = " + a);
        a += 5; // a = a + 5
        System.out.println("a += 5 -> a = " + a);
        a -= 3; // a = a - 3
        System.out.println("a -= 3 -> a = " + a);
        a *= 4; // a = a*4
        System.out.println("a *= 4 -> a = " + a);
        a /= 2; // a = a/2
        System.out.println("a /= 2 -> a = " + a);
        a %= 3; // a = a%3
        System.out.println("a %= 3 -> a = " + a);
        System.out.println("________________________________________\n");

        System.out.println("Operadores de Relacionais\n");
        System.out.println(a1 + " > " + a2 + " = " + (a1 > a2));
        System.out.println(a2 + " >= " + a3 + " = " + (a2 >= a3));
        System.out.println(a3 + " < " + a4 + " = " + (a3 < a4));
        System.out.println(a4 + " <= " + a5 + " = " + (a4 <= a5));
        System.out.println(a5 + " == " + a1 + " = " + (a5 == a1));
        System.out.println(a5 + " != " + a1 + " = " + (a5 != a1));
        System.out.println("________________________________________\n");

        System.out.println("Operadores de Lógicos\n");
        
        System.out.println("Tabela da Verdade\n");
        System.out.println("a \t b \t a&&b \t a||b \t !a\n");
        System.out.println(false + " \t " + false + " \t " + (false && false) + " \t " + (false || false) + " \t " + (!false));
        System.out.println(false + " \t " + true + " \t " + (false && true) + " \t " + (false || true) + " \t " + (!false));
        System.out.println(true + " \t " + true + " \t " + (true && true) + " \t " + (true || true) + " \t " + (!true));
        System.out.println(true + " \t " + false + " \t " + (true && false) + " \t " + (true || false) + " \t " + (!true));
        System.out.println("________________________________________\n");
    }
    
}


