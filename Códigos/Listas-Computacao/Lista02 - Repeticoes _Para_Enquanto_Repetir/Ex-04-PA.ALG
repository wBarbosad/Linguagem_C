Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Seção de Declarações das variáveis 
n, s , np, i: inteiro
rpa: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 i <- 0
 s<- 0
 escreva("Informe um valor: ")
 leia(n)
 
   para i de 1 até n passo 1 faça
       np <- n+i 
       i<- i +1
       escreval("Valores: ", np)
   fimpara
   s<-s+np
   rpa <- np/s
   escreval("Razão da PA: ", rpa)
    
Fimalgoritmo