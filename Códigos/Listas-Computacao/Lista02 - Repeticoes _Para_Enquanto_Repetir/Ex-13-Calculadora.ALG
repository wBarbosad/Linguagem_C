Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Seção de Declarações das variáveis
   n1,n2,opcao,s: inteiro
   r: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   s<-0

faça
   escreva("Informe o número = ")
   leia(n1)
   escreva("Informe o número = ")
   leia(n2)

   escreval("*Selecione uma das opçoes abaixo!*")
   escreva("1 - Soma   2 - Multiplicaçao   3 - Divisao   4 - Substraçao   0 - Sair: ")
   leia(opcao)

   enquanto(opcao)

   caso 1: escreva("Voce escolheu SOMA")
      r <- n1+n2
      s <- s + r

      escreva("Resultado da soma = ", r)

   caso 2: escreva("Voce escolheu MULTIPLICAÇAO")
      r <- n1*n2
      s <- s+r
      escreva("Resultado da multiplicaçao = ", r)

   caso 3: escreva("Voce escolheu DIVISAO")
      r <- (n1/n2)
      s <- s+r
      escreva("Resultado da divisao = ", r)

   caso 4: escreva("Voce escolheu SUBTRAÇAO")
      r <- n1-n2
      s <- s+r
      escreva("Resultado da subtraçao = ", r)

   caso '0': escreva("Resultado = ", s)


enquanto(opcao<>0)

Fimalgoritmo