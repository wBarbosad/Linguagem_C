Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
// Seção de Declarações das variáveis 

N: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva("Informe um valor: ")
leia(n)

  se(n>=0) e (n<3) entao
    escreva("Baixo Risco entre 0 a 3!")
    escreval
  senao
      se(n>=3) e (n<=6) entao
          escreva("Médio Risco entre 3 a 6!")
          escreval
      senao
           escreva("Grave Risco!!")
      fimse
  fimse
  
Fimalgoritmo