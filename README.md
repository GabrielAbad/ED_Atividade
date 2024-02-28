# Função de Cálculo do Índice de Massa Corporal (IMC)

Esta função em C++ calcula o Índice de Massa Corporal (IMC) com base no peso (em kg) e na altura (em metros) fornecidos.

## Formato de Entrada

A função `imc` requer dois parâmetros:
- **Peso** (float): O peso da pessoa em quilogramas (kg).
- **Altura** (float): A altura da pessoa em metros (m).
- **Input Format:**
   `80 1.8`

## Formato de Saída

Os resultados são as categorias da tabela IMC
- **Output Fromat:**
    `Resultado de acordo com a tabela de IMC: 
    Peso normal`

# Função de Verificação de Ano Bissexto

Esta função em C++ verifica se um ano é bissexto de acordo com as seguintes regras:
- Divisível por 4, mas não por 100; ou
- Divisível por 400.

## Formato de Entrada

A função `is_leap_year` requer um parâmetro:
- **Ano** (int): O ano que deseja verificar se é bissexto.

**Input Format:**
`2020`

## Formato de Saída

A função `is_leap_year` retorna um valor booleano indicando se o ano é bissexto ou não.
Na main verifica se é true ou false e printa uma mensagem de acordo com o resultado da função.

**Output Fromat:**
`Ano bissexto`
