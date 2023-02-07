Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
// Seção de Declarações das variáveis 
n1, n2, n3, maiorn: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Informe os numeros: ")
leia(n1,n2,n3)

 se(n1>n2) e (n1>n3) entao
   escreva("Maior numero = ", n1)
     maiorn <- n1
 fimse
      se (n2>n1) e (n2>n3) entao
         escreva("Maior numero = ", n2)
          maiorn <- n2
      fimse
           se (n3>n1) e (n3>n2) entao
              escreva("Maior numero = ", n3)
              maiorn <- n3
           fimse
                se(n1=n2) e (n2=n3) entao
                 escreva("Todos os números sao iguais")
                fimse
           

Fimalgoritmo