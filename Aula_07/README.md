# Exercícios

1. Criar uma classe Lampada com as seguintes características
 1.1 Atributos:
    * estado (bolean): armazena o estado da lampada (ligado ou desligado)
    * potencia (double): armazena a potencia da lampada
    * qLigada (int): contador que armazena a quantidade de vezes que a lampada foi ligada.
    * limite (int): armazena a quantidade máxima de vezes que eu consigo ligar a lampada antes de que ela tenha grande probabilidade de estar queimada

 1.2 Métodos
    * construtor Lampada(): Cria uma lampada de 15 W de potencia com limite de 1000
    * Construtor Lampada(potencia, limite)
    As lampadas sempre são criadas com estado desligada
    * ligar(): Muda o estado da lampada para ligada e, se anteriormente estiver desligada, incrementa o contador qLigada
    * desligar(): Muda o estado da lampada para desligada
    * devoTrocar(): retorna verdadeiro se o contador qLigada for maior ou igual que o limite

2. Criar uma classe SistemaIlumina com as seguintes características
 2.1 Atributos
    * lampadas[] (Lampada): Array de lampadas de , no máximo, 30 lampadas de capacidade
    * tamanho (int): quantidade de lampadas no sistema de iluminação (tem que ser menor ou igual que a capacidade de lampadas[])
 2.2 Métodos
    * construtor SistemaIlumina(): Cria um sistema de iluminação com capacidade de 30 lampadas
    * construtor SistemaIlumina(capacidade): se capacidade for maior que 30 cria o sistema com 30 lampadas. Caso contrario cria um sistema com a capacidade indicada
    * adicionaLampada(Lampada). Adiciona a instância da classe Lampada no primeiro espaço disponível do array. Se não tiver espaço disponível retorna falso.
    * adicionaLampada(potencia, limite). Cria uma instância da classe Lampada e  adiciona esta instância no primeiro espaço disponível do array. Se não tiver espaço disponível retorna falso.
    * ligar(): liga todas as lampadas do sistema;
    * ligar(qual): liga uma lampada específica do sistema
    * desligar(): desliga todas as lampadas do sistema
    * desligar(qual): desliga uma lampada específica do sistema
    * verificar(): verifica todas as lampadas do sistema e retorna quais delas devem ser trocadas
    * verificar(qual): verifica se uma lampada específica precisa ser trocada
