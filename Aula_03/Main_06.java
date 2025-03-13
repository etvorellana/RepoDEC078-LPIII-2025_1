import java.util.Scanner;
public class Main_06 {
    public static void main(String[] args) {

        // Estruturas de Controle de Fluxo   
        System.out.println("Estruturas de Controle de Fluxo");
        System.out.println("Estruturas de Seleção");
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Entre com um número inteiro:");
        n = sc.nextInt();
        // Estrutura de seleção simples if
        if (n % 2 == 0) // bloco sintático simples
            System.out.println("O número " + n + " é par!");
        
        if (n % 2 != 0) // bloco sintático simples
            System.out.println("O número " + n + " é impar!");
            
        if (n % 2 != 0) // bloco sint composto
        {
            System.out.println("O número " + n + " é impar!");
            n++;
            System.out.println("O número " + n + " é par!");
        }
        
        // Estrutura de seleção if/else
        //if (n % 3) isto funcionava em C. Será que funciona em Java?
        if (n % 3 != 0) 
            System.out.println("O número " + n + " não é múltiplo de 3!");
        else // n % 3 == 0
            System.out.println("O número " + n + " é múltiplo de 3!");
        
        
        // Estruturas if/else aninhada
        if (n % 2 == 0)
        {
            System.out.println("O número" + n + " é par!");
            if (n % 3 != 0)
            {
                 System.out.println("O número " + n + " não é múltiplo de 3!");
            }
            else
            {
                System.out.println("O número " + n + " é múltiplo de 3!");
            }
        }
        else
        {
            if (n % 3 != 0)
            {
                System.out.println("O número " + n + " não é múltiplo de 3!");
            }
            else
            {
                System.out.println("O número " + n + " é múltiplo de 3!");
            }
        }
        
        // Estrutura de seleção múltipla switch-case
        switch (n % 5)
        {
        case 0:
            System.out.println("O número " + n + " é divisível por 5!");
            break;
        case 1:
            System.out.println("O número " + n + " não é divisível por 5, resto 1!");
            break;
        case 2:
            System.out.println("O número " + n + " não é divisível por 5, resto 2!");
            break;
        case 3:
            System.out.println("O número " + n + " não é divisível por 5, resto 3!");
            break;
        default:
            System.out.println("O número " + n + " não é divisível por 5, resto 4!");
            break;
        }
        
        System.out.println("Estruturas de Repetição");
        int pot2 = 1;
        int exp2 = 0;
        while (pot2 <= n)
        {
            pot2 *= 2;
            exp2++;
        }
        System.out.println("A primeira potencia de 2 maior que " + n + " é 2^" + exp2 + " = " + pot2);
        
        System.out.println("Pense num número inteiro entre 1 100 (incluídos)");
        int chute = 50, left = 1, right = 100;
        int cont = 0;
        int op;
        do
        {
            System.out.println("O número que vc pensou é " + chute);
            System.out.println("Digite: \n");
            System.out.println("0- Para sim;\n");
            System.out.println("1- Para não, é maior;\n");
            System.out.println("2- Para não, é menor;\n");
            op = sc.nextInt();
            cont++;
            switch (op)
            {
                case 0:
                    System.out.println("Opa, achei em " + cont + " tentativas!!!");
                    break;
                case 1:
                    left = chute;
                    chute = (left + right) / 2;
                    break;
                case 2:
                    right = chute;
                    chute = (left + right) / 2;
                    break;
                default:
                    System.out.println("Resposta Errada!!!!!");
                    cont--;
            }
        } while (op != 0);
        
        int soma = 0;
        for (int i = 1; i <= chute; i++)
            soma += i;
        
        System.out.println("A soma de todos os inteiros de 1 até " + chute + " é " + soma);
        
        sc.close();
          
    }

}



