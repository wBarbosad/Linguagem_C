Algoritmo "semnome"
// Disciplina   : [Linguagem e L?gica de Programa??o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri??o   : Aqui voc? descreve o que o programa faz! (fun??o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/04/2019
Var
// Se??o de Declara??es das vari?veis 
idade, i, qtdade , MaiorIdade: inteiro
mediaI: real
Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 

i <- 0
MaiorIdade <- 0

escreva("Informe a quantidade de pessoas: ")
leia(qtdade)

   para i de 1 at? qtdade passo 1 fa?a
        escreva("Informe a idade: ")
        leia(idade)
        
        i <- i +1
        
        se (idade >= 18) ent?o
           MaiorIdade <- MaiorIdade +1
        fimse
   fimpara
   
escreval("Quantidade de maior de idade = ", MaiorIdade)

mediaI <- (MaiorIdade/idade)

escreval("A m?dia das idades = ", mediaI)

Fimalgoritmo