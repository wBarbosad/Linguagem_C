Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o]
// Professor   : Antonio Carlos Nicolodi
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/05/2019
Var
   // Se??o de Declara??es das vari?veis
   n1,n2,n3,n4, reprovados, aprovados, prequisitos: inteiro
   media: real

Inicio
   // Se??o de Comandos, procedimento, fun??es, operadores, etc...

   reprovados <- 0
   prequisitos <- 0
   aprovados <- 0

   escreva("Informe a nota da P1: ")
   leia(n1)
   escreva("Informe a nota da P2: ")
   leia(n2)
   escreva("Informe a nota da P3: ")
   leia(n3)
   escreva("Informe a nota da P4: ")
   leia(n4)

   se (n1>=11) ou (n2>=11) ou (n3>=11) ou (n4>=11) entao
      escreva("Nota inv?lida, verifique a notos estabeleicidas!")
   fimse

   media <- (n1+n2+n3+n4)/4
   escreval("Media aluno = ", media)

   se (media>=0) ou (media<=10) entao

      se (media<=4) entao
         escreval
         escreval("Aluno reprovado")
         reprovados <- reprovados + 1
      fimse
      se (media>=6) entao
         escreval
         escreval("Aluno aprovado")
         aprovados <- aprovados + 1
      fimse
      se (media>=4) e (media<6) entao
         escreval
         escreval("Aluno reprovado com Pr?-Requisito")
         prequisitos <- prequisitos + 1


      fimse
   fimse
   escreval
   escreval("Quantidade de reprovados = ", reprovados)
   escreval("Quantidade de aprovados = ", aprovados)
   escreval("Quantidade de reprovados com Pr?-Requisito = ", prequisitos)
Fimalgoritmo