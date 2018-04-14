# Rede de Petri

* Este trabalho tem como objetivo simular uma Rede de Petri, dado um arquivo de entrada. Inicialmente, serao utilizados conceitos simples como vetores e aleatoriedade para alcancar o resultado desejado. Mais futuramente, em versoes mais avancadas do programa, conceitos como alocacao dinamica e programacao em paralelo deverao ser adicionados, de maneira que este programa se torne um aprendizado continuo de linguagem C avancada.

* Para simular a Rede de Petri utilizando este codigo, necessita-se alimenta-lo com um arquivo de entrada. O arquivo nao deve conter nenhum texto, e deve ser formatado exatamente como proposto na tabela abaixo:

|        DESCRICAO         |
---------------------------|
| Quantidade de Lugares    |
| Quantidade de Transicoes |
| Quantidade com Token     |
| Arco Lugar -> Transicao  |
| Aroco Transicao -> Lugar |

Para executar basta botar o comando $./rede.x < rp-input-1.txt

- Input sendo usado no arquivo -1.txt:
''
3
6
0
1
2
2
0 0 2
1 1 2
3
0 1 1
0 0 1
1 2 3
''
