Implementar a classe ListaCompromissos, que permite implementar uma lista de compromissos fornecidos na forma de instâncias da classe Data, desenvolvida anteriormente.
* o construtor da classe tem como parâmetro um inteiro que representa a capacidade da lista, ou seja a quantidade máxima de compromissos que poderemos armazena na lista. 
* A lista precisa armazenar o tamanho, que representa a quantidade de compromissos armazenados. Se a lista estiver vazia o tamanho é zero e quando tamanho for igual a capacidade a lista está cheia.
* O método boolean adicionaCopromisso(Data) permite adicionar um novo compromisso à lista. A lista não pode conter compromissos repetidos. Isto significa que a mesma data não pode aparecer duas vezes na lista.  
* O método boolean desmarcaCompromisso(Data) remove uma data da lista de compromissos, se a mesma fizer parte da lista.
* O método booleanVerificaData(Data) verifica se uma determinada data faz parte da lista de compromissos.
* O método void listaCompromissos() lista os compromissos da lista.
obs. Os datas são armazenadas na lista sempre na primeira posição disponível, sem ordem cronológica.  

Implementar a classe ListaCompromissosOrdenada, que permite implementar uma lista de compromissos fornecidos na forma de instâncias da classe Data, desenvolvida anteriormente. A classe deve ter os mesmos métodos da classe anterior mas:
* As datas devem ser armazenadas de forma ordenada, seguindo a ordem cronológica.
* A busca de datas na lista deve utilizar uma busca binária. 

