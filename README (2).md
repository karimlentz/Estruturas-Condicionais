# Semana 4 - Estruturas Condicionais

## Lista de estudos de estruturas condicionais. São exercícios para reforçar o aprendizado e se preparar para a prova.

### Questão 1: Estrutura Condicional - Ano Bissexto

Faça um programa que receba um ano. Se o ano for bissexto, o programa deve escrever 1. Se não for, o programa deve escrever 0.

* Todos os anos múltiplos de 400 são bissextos.
* Dentre os outros, são bissextos todos os anos múltiplos de 4 que não são múltiplos de 100.
* Todos os demais não são bissextos.

**Exemplo de entrada:**
1996
**Exemplo de saída:**
1

---

### Questão 2: Estrutura Condicional - Operações Aritméticas

Faça um programa que receba como entrada dois números em ponto flutuante, representando os operandos A e B de uma expressão aritmética a ser definida. Após receber os valores de A e B, seu programa deverá receber um número inteiro X compreendido no intervalo [1,4] que indicará uma determinada operação aritmética a ser computada.

**Obs. Python:** assuma que números em ponto flutuante com precisão dupla são números `float`.
**Obs. C/C++:** assuma que números em ponto flutuante com precisão dupla são `double`.

| Escolha (X) | Operação |
| :---: | :--- |
| **1** | Média entre os números digitados |
| **2** | Subtrair o menor número do maior |
| **3** | Produto entre os números digitados |
| **4** | Divisão do primeiro pelo segundo |

Se a opção digitada for inválida, seu programa deverá exibir a mensagem `ERRO` e terminar a execução. Na operação 4, se o segundo número for zero, a mensagem `ERRO` também deve ser exibida.

**Entradas:**
1. Dois números em ponto flutuante com precisão dupla A e B.
2. Número inteiro X que indica a operação aritmética.

**Saídas:**
1. Resultado da expressão aritmética (ponto flutuante); ou a mensagem `ERRO`.

**Exemplo de entrada:**
9.5
7.0
5
**Exemplo de saída:**
ERRO

**Exemplo de entrada:**
9.5
7.0
2
**Exemplo de saída:**
2.5

---

### Questão 3: Estrutura Condicional - Média Ponderada de Três Avaliações

A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas obedece aos pesos a seguir:

| Nota | Peso |
| :--- | :---: |
| Trabalho de Laboratório | 2 |
| Avaliação Semestral | 3 |
| Exame Final | 5 |

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito obtido segundo a tabela:

| Média Ponderada | Conceito |
| :--- | :---: |
| [8.0, 10.0] | A |
| [7.0, 8.0[ | B |
| [6.0, 7.0[ | C |
| [5.0, 6.0[ | D |
| [0.0, 5.0[ | E |

**Entradas:**
1. Três números em ponto flutuante (Trabalho, Avaliação Semestral, Exame Final), um por linha.

**Saídas:**
1. Média ponderada das notas.
2. Caractere que indica o conceito.

**Exemplo de entrada:**
7.5
5.0
6.1
**Exemplo de saída:**
6.05
C

**Exemplo de Entrada:**
8.0
6.5
8.9
**Exemplo de Saída:**
8.0
A

---

### Questão 4: Estrutura Condicional - Grupos de Risco

Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a relação a seguir, verifique e exiba o grupo de risco (número de 1 a 9).

| Idade \ Peso | Até 60 Kg | 60-90 Kg | Acima de 90 Kg |
| :--- | :---: | :---: | :---: |
| **Menores que 20** | 9 | 8 | 7 |
| **20 a 50** | 6 | 5 | 4 |
| **Maiores que 50** | 3 | 2 | 1 |

**Entradas:**
1. Idade (inteiro).
2. Peso (ponto flutuante).

**Saídas:**
1. Número inteiro indicando o grupo de risco.

**Exemplo de entrada:**
30
80.0
**Exemplo de saída:**
5

**Exemplo de Entrada:**
50
97.35
**Exemplo de Saída:**
4

---

### Questão 5: Estrutura Condicional - Quarto número na ordem

Faça um programa que recebe três números inteiros em ordem crescente (garantido pelo usuário) e um quarto número inteiro qualquer. O programa deve exibir os quatro números em ordem crescente.

**Entradas:**
1. Três números inteiros em ordem crescente.
2. Um número inteiro qualquer.

**Saídas:**
1. Os quatro números inteiros em ordem crescente.

**Exemplo de entrada:**
3
6
9
4
**Exemplo de saída:**
3 4 6 9

**Exemplo de Entrada:**
1
5
7
11
**Exemplo de Saída:**
1 5 7 11

**Exemplo de Entrada:**
3
6
12
2
**Exemplo de Saída:**
2 3 6 12

---

### Questão 6: Estrutura Condicional - Classificação por Peso e Altura

Faça um programa que receba o peso e a altura de uma pessoa e mostre sua classificação de acordo com a tabela:

| Altura \ Peso | < 60Kg | 60-90Kg | > 90Kg |
| :--- | :---: | :---: | :---: |
| **< 1,20m** | A | D | G |
| **1,20m - 1,70m** | B | E | H |
| **> 1,70m** | C | F | I |

**Entradas:**
1. Peso e altura (ponto flutuante).

**Saídas:**
1. Classificação do indivíduo (um caracter).

**Exemplo de entrada:**
54.2
1.56
**Exemplo de saída:**
B

**Exemplo de Entrada:**
90
1.83
**Exemplo de Saída:**
F

---

### Questão 7: Estrutura Condicional - Alfândega

Faça um programa que receba o código do produto (1-10), peso em kg e código do país de origem (1-3). Calcule e exiba:
1.  Peso em gramas.
2.  Preço bruto (baseado no peso em gramas e código do produto).
3.  Imposto (baseado no preço bruto e país de origem).
4.  Valor total (preço bruto + imposto).

**Tabelas de Referência:**

| Código do País | Imposto |
| :---: | :---: |
| 1 | 0% |
| 2 | 15% |
| 3 | 25% |

| Código do Produto | Preço por grama |
| :---: | :---: |
| 1 a 4 | 10 |
| 5 a 7 | 25 |
| 8 a 10 | 35 |

**Entradas:**
1. Código do produto (1 a 10).
2. Peso em kg (float).
3. Código do país (1 a 3).

**Saídas:**
1. Peso em gramas.
2. Preço bruto.
3. Valor do imposto.
4. Preço total.

**Exemplo de entrada:**
7
0.5
3
**Exemplo de saída:**
500.0
12500.0
3125.0
15625.0

**Exemplo de Entrada:**
3
4.7532
1
**Exemplo de Saída:**
4753.2
47532.0
0.0
47532.0

---

### Questão 8: Estrutura Condicional - Gratificação de Natal

Uma empresa dará uma gratificação baseada na fórmula:
`H = (horas extras) - (2/3 * horas falta)`

| H (Minutos) | Prêmio (R$) |
| :--- | :---: |
| > 2400 | 500 |
| 1800 a 2400 | 400 |
| 1200 a 1799 | 300 |
| 600 a 1199 | 200 |
| <= 600 | 100 |

**Entradas:**
1. Horas extras (float).
2. Horas faltas (float).

**Saídas:**
1. Prêmio a receber.

**Exemplo de Entrada:**
24
3
**Exemplo de Saída:**
300

---

### Questão 9: Estrutura Condicional - Seno ou Cosseno

Faça um programa que calcule seno ou cosseno. O usuário deve informar:
1.  Função: 's' (seno) ou 'c' (cosseno).
2.  Unidade: 'g' (graus) ou 'r' (radianos).
3.  Valor do ângulo.

*Obs: Use a biblioteca `math` (Python) ou `cmath` (C++).*

**Entradas:**
1. Caractere 's' ou 'c'.
2. Caractere 'g' ou 'r'.
3. Número do ângulo.

**Saídas:**
1. Valor calculado.

**Exemplo de entrada:**
c
g
90
**Exemplo de saída:**
0

**Exemplo de Entrada:**
s
r
0.5
**Exemplo de Saída:**
0.4794

---

### Questão 10: Estrutura Condicional - Os Hóspedes do Hotel Transilvânia

Defina o número do quarto (Centena=Andar, Dezena=Corredor, Unidade=Quarto) seguindo as regras:

* **Andar (por tipo):**
    * Zumbis/Múmias (z, m) -> 1º Andar
    * Lobisomens/Duendes (l, d) -> 2º Andar
    * Hárpias/Sucubus (h, s) -> 3º Andar
    * Vampiros/Fantasmas (v, f) -> 4º Andar
* **Corredor (por qtd pessoas):**
    * Sozinho -> Corredor 1
    * Casal (2) -> Corredor 2
    * 3 ou mais -> Corredor 3
* **Quarto (por tempo de estadia):**
    * 1-2 dias -> Final 1
    * 3-4 dias -> Final 2
    * 5-6 dias -> Final 3
    * 7+ dias -> Final 4

**Entradas:**
1. Tipo de monstro (char).
2. Número de pessoas (int).
3. Dias de hospedagem (int).

**Saídas:**
1. Número do quarto (int).

**Exemplo de Entrada:**
v 4 8
**Exemplo de Saída:**
434

**Exemplo de Entrada:**
z 1 3
**Exemplo de Saída:**
112

---

### Questão 11: Estrutura Condicional - Aposentadoria

Calcule a idade de aposentadoria com regra de transição (pedágio de 30%).
* **Regra:** Pedágio sobre o tempo faltante para 30 anos (mulher) ou 35 (homem).
* **Condição:** Só aplica se Mulher > 15 anos trabalhados ou Homem > 20 anos trabalhados.
* **Caso contrário:** Idade mínima fixa (62 mulher, 65 homem).

**Entradas:**
1. Gênero (1=Homem, 0=Mulher).
2. Idade (int).
3. Anos trabalhados (real).

**Saídas:**
1. Idade de aposentadoria.

**Exemplo de Entrada:**
0
50
25
**Exemplo de Saída:**
56.5

**Exemplo de Entrada:**
1
35
10
**Exemplo de Saída:**
65

---

### Questão 12: Estrutura Condicional - Colisão Frontal de Trens

Calcule o tempo para colisão ($d = v \times t$). Se tempo <= 10s, imprima "COLISAO". Caso contrário, imprima o tempo. Lembre-se de somar as velocidades.

**Entradas:**
1. Velocidade trem 1.
2. Velocidade trem 2.
3. Distância.

**Saídas:**
1. "COLISAO" ou o tempo restante.

---

### Questão 13: Estrutura condicional - Churrasco da República Trintagarantido

Receba a quantidade de 7 itens. Calcule o total e aplique desconto:
* Total <= R$ 200,00: 5% desconto.
* Total > R$ 200,00: 10% desconto.

| Produto | Preço (R$) |
| :--- | :---: |
| Picanha | 28.90 |
| Alcatra | 19.90 |
| Linguiça | 7.95 |
| Espetinho Veg. | 2.99 |
| Sal | 1.50 |
| Farinha | 1.85 |
| Carvão | 8.70 |

**Entradas:**
1. Sete inteiros (quantidades na ordem da tabela).

**Saídas:**
1. Valor total.
2. Valor do desconto.
3. Valor final.

**Exemplo de entrada:**
2
3
4
4
1
1
4
**Exemplo de saída:**
199.41
9.97
189.44

---

### Questão 14: Estrutura Condicional - Passatempo dos bandeirantes

Receba duas cores e um número. Se o número for palíndromo (lê-se igual de trás para frente), exiba a Cor 1. Senão, exiba a Cor 2.

**Entradas:**
1. Nome da primeira cor.
2. Nome da segunda cor.
3. Número inteiro N (6 dígitos).

**Saídas:**
1. Nome da cor resultante.

**Exemplo de Entrada:**
azul
vermelho
567765
**Exemplo de Saída:**
azul

**Exemplo de Entrada:**
azul
vermelho
567675
**Exemplo de Saída:**
vermelho

---

### Questão 15: Estrutura Condicional - Exclusão de animais na caravela

Algoritmo de carga ("mochila") para animais. Prioridade: Pequeno porte.
Informe quantos animais **NÃO** couberam.

| Tipo | Peso |
| :--- | :---: |
| Cavalo | 250 |
| Vaca | 150 |
| Galinha | 2 |

**Entradas:**
1. Limite de Carga.
2. Qtd Cavalos.
3. Qtd Vacas.
4. Qtd Galinhas.

**Saída:**
1. Qtd excluída (Cavalos, Vacas, Galinhas).

**Exemplo de entrada:**
3000
10
10
10
**Exemplo de saída:**
5
0
0

---

### Questão 16: Estrutura Condicional - Maior e Segundo Maior

Faça um algoritmo que leia quatro números reais diferentes e imprima o maior e o segundo maior valor.

**Entradas:**
1. Quatro números em ponto flutuante.

**Saídas:**
1. Maior valor.
2. Segundo maior valor.

**Exemplo de entrada:**
13.1
2.2
5.8
6.9
**Exemplo de saída:**
13.1
6.9

---

### Questão 17: Estrutura condicional - Multa de velocidade

Calcule a multa de trânsito:
* Até 30% acima do limite: "NAO SE APLICA".
* Acima de 30%: Multa base + 50%.

**Entradas:**
1. Valor base da multa.
2. Velocidade máxima.
3. Velocidade registrada.

**Saída:**
1. Valor da multa (com "R$") ou "NAO SE APLICA".

**Exemplo de entrada:**
100.00
80
89
**Exemplo de saída:**
NAO SE APLICA

**Exemplo de entrada:**
100.00
30
90
**Exemplo de saída:**
R$ 150.0

---

### Questão 18: Estrutura Condicional - Classificando idades

Classifique o nadador. Se idade < 5, imprimir "Nao registrado".

| Categoria | Idade |
| :--- | :---: |
| Infantil | 5 a 7 |
| Juvenil | 8 a 10 |
| Adolescente | 11 a 15 |
| Adulto | 16 a 30 |
| Senior | > 30 |

**Entradas:**
1. Idade (inteiro).

**Saídas:**
1. Categoria.

**Exemplo de Entrada:**
16
**Exemplo de Saída:**
Adulto

---

### Questão 19: Estrutura Condicional - Notação pós-fixada

Leia dois números e um operador na notação polonesa inversa (ex: `16 5 /`) e exiba o resultado.

**Entradas:**
1. Dois números inteiros.
2. Operador (+, -, *, /).

**Saídas:**
1. Resultado.

**Exemplo de Entrada:**
16 5 /
**Exemplo de Saída:**
3

---

### Questão 20: Estrutura Condicional - Tempo de Irritação de Thanos

Calcule a diferença em minutos entre dois horários (saída e chegada) dentro de um ciclo de 24h.

**Entradas:**
1. Horário saída (hh mm).
2. Horário chegada (hh mm).

**Saída:**
1. Tempo em minutos.

**Exemplo de Entrada:**
12 59
18 01
**Exemplo de Saída:**
302

**Exemplo de Entrada:**
21 13
05 07
**Exemplo de Saída:**
474

---

### Questão 21: Estrutura Condicional - Comprar Mochila

A mãe paga 20% da mochila, desde que esse valor não passe de R$ 30,00. Informe se pode comprar ("sim"/"nao") e o valor pago pela mãe (com duas casas decimais).

**Entradas:**
1. Valor da mochila (real).

**Saídas:**
1. "sim" ou "nao" seguido do valor pago pela mãe.

**Exemplo de Entrada:**
159
**Exemplo de Saída:**
nao 31.80