
# Super Trunfo - Lógica de Comparação de Cartas

Este repositório contém a implementação de um jogo **Super Trunfo** em **C**, com a lógica responsável por cadastrar cartas, calcular atributos e comparar as cartas para determinar a vencedora com base em um atributo específico.

## Descrição

O jogo Super Trunfo é uma variação de jogo de cartas onde cada carta tem atributos numéricos, e o objetivo é comparar os atributos das cartas para determinar qual delas é a mais forte. Neste projeto, você pode cadastrar duas cartas, calcular atributos como **população**, **área**, **PIB**, **densidade populacional** e **PIB per capita**, e comparar essas cartas com base em um desses atributos. O jogo escolhe automaticamente o atributo a ser comparado e determina qual carta venceu.

## Funcionalidade

O programa permite:
1. **Cadastro das Cartas**: Cada carta contém informações como nome da cidade, população, área, PIB, pontos turísticos e mais.
2. **Cálculos Automáticos**: O programa calcula a **densidade populacional** (população / área) e o **PIB per capita** (PIB / população) automaticamente.
3. **Escolha de Atributo**: O atributo usado para comparação (população, área, PIB, densidade populacional ou PIB per capita) é definido diretamente no código.
4. **Comparação das Cartas**: Com base no atributo escolhido, o programa compara os valores das cartas e determina a vencedora. Para a **densidade populacional**, a carta com o menor valor vence, e para os outros atributos, a carta com o maior valor vence.

## Requisitos

- **Linguagem**: C
- **Compilador**: GCC ou similar

## Como Rodar o Projeto

1. **Clone o Repositório**:
   ```bash
   git clone https://github.com/seuusuario/super-trunfo.git
   ```

2. **Entre na pasta do projeto**:
   ```bash
   cd super-trunfo
   ```

3. **Compile o código**:
   ```bash
   gcc -o super_trunfo super_trunfo.c
   ```

4. **Execute o programa**:
   ```bash
   ./super_trunfo
   ```

## Exemplo de Execução

### Entrada:

O programa começa com duas cartas pré-definidas:

- **Carta 1**: Cidade "cidade um", População: 1.000.000, Área: 500 km², PIB: 200 milhões, 10 pontos turísticos.
- **Carta 2**: Cidade "cidade dois", População: 500.000, Área: 600 km², PIB: 180 milhões, 8 pontos turísticos.

### Cálculos Realizados:

- **Densidade Populacional** = População / Área.
- **PIB per capita** = PIB / População.

### Exemplo de Saída:

Para o atributo **população**, o programa exibirá algo como:

```
Comparação de cartas (Atributo: População):
Carta 1 - cidade um: 1000000.00
Carta 2 - cidade dois: 500000.00
Resultado: Carta 1 (cidade um) venceu!
```
