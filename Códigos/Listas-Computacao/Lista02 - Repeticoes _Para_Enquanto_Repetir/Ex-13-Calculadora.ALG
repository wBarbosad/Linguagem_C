Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Se??o de Declara??es das vari?veis
   n1,n2,opcao,s: inteiro
   r: real

Inicio
   // Se??o de Comandos, procedimento, fun??es, operadores, etc...

   s<-0

fa?a
   escreva("Informe o n?mero = ")
   leia(n1)
   escreva("Informe o n?mero = ")
   leia(n2)

   escreval("*Selecione uma das op?oes abaixo!*")
   escreva("1 - Soma   2 - Multiplica?ao   3 - Divisao   4 - Substra?ao   0 - Sair: ")
   leia(opcao)

   enquanto(opcao)

   caso 1: escreva("Voce escolheu SOMA")
      r <- n1+n2
      s <- s + r

      escreva("Resultado da soma = ", r)

   caso 2: escreva("Voce escolheu MULTIPLICA?AO")
      r <- n1*n2
      s <- s+r
      escreva("Resultado da multiplica?ao = ", r)

   caso 3: escreva("Voce escolheu DIVISAO")
      r <- (n1/n2)
      s <- s+r
      escreva("Resultado da divisao = ", r)

   caso 4: escreva("Voce escolheu SUBTRA?AO")
      r <- n1-n2
      s <- s+r
      escreva("Resultado da subtra?ao = ", r)

   caso '0': escreva("Resultado = ", s)


enquanto(opcao<>0)

Fimalgoritmo