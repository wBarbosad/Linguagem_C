programa
{
		/*faca {
			<bloco de comandos>
	 	} enquanto (<condição>) A repetição ocorre quando a condição é verdadeira, caso contrário, o programa prossegue.*/
	
	funcao inicio()	
	{
		inteiro opcao, sobremesa
		
		
	 	faca{
	 		

	 		escreva("Informe a opção de entrada\n\n\t1 - Churrasco\n\t2 - Frango\n\t3 - Pastel\n\t4 - Repetir as informações\n\t5 - Sobremesa\n\n\tInforme a opção desejada: ")
	 		leia(opcao)
	 		
		} enquanto (opcao==4)
		limpa()
		se (opcao==5){
			
			escreva("Selecione o tipo de sobremesa: \n\n\t1 - Torta\n\t2 - Musse\n\t3 - Sorvete\n\n\nInforme a sua opção: ")
			leia(sobremesa)
			
				escolha(sobremesa){
				
					caso 1: { 
						escreva("Torta de limão") 
						pare
					 }
					caso contrario: { 
						escreva("Nenhuma sobremesa selecionada!")
						pare
					}
				}
			} senao
				escreva("Bom apetite")
	} //Função principal
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 808; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */