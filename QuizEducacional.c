#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
	
	int correta = 0,segundos = 0, errada = 0, capa = 0, pause = 0, tela = 0, cont = 0 ,deter = 0, quest1 = 0, quest2 = 0, quest3 =0, quest4 = 0, quest5 = 0, quest6 = 0, quest7 = 0;
	char Nome_usuario[1000], esco[50], loading1[50] = "::::", loading2[50] = "", esco_UQ, quest;
	
	//tela 1
		
	while (capa < 60){					
		if(capa == 0){
			printf("\n\t\t\t\t");	
			++capa;
		}
		printf("-");
	++capa;	
	
	}
	
	capa = 0; // sempre zerando
	 
	while(capa <= 5){
		if(capa == 0){
			Sleep(750);
			printf("\t\t\t\t\t\t\t\t      |Quiz educacional em linguagem C|\t\t  |");
			Sleep(2000);
		}
		else if(capa == 1){
		printf("\t\t\t\t {Criado por: Samuel Novais}");
		Sleep(2000);
		}
		else if(capa == 2)Sleep(750);
		
		else if(capa == 3)Sleep(750);
		
		else if(capa == 4)Sleep(750);
		
		else if(capa == 5){
			printf("\t\t\t\t\t\tTrabalho mat%cria de LTP", 130);
			Sleep(2000);
		}
		
		printf("\n\t\t\t\t|\n\t\t\t\t\t\t\t\t\t\t\t  |\n");
		++capa;
		
	}
	
	capa = 0;
	
	while (capa < 60){
		
		if(capa == 0){
			printf("\t\t\t\t");
			
		}
		printf("-");
		++capa;	
	}
	
	capa = 0; // <<<
	
	printf("\n");
	system("pause");
	
	system ("CLS");		// Referente a primeira tela
		
		
		//tela de carregamento 1
	for(tela = 0; tela <= 100; tela+=10){
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(400);
		system("cls");
		
		
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(2000);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
   	system("cls"); // referente a tela de carregamento 1
   	system("color 07");	
   	
   	
   	//tela 2
   	while (capa < 60){			
	   	
		if(capa == 0){
			printf("\n\t\t\t\t");	
			++capa;
		}
		printf("-");
	++capa;	

	}
   	
   	capa = 0;
   	
   	while(capa <= 5){
	
	if(capa == 0){
		printf("\t\t\t\t\t\t\t\t\t Digite seu Nickname: ");
		fgets(Nome_usuario, 11, stdin);
		
	}
	else if(capa == 1)Sleep(750);
	
	else if(capa == 2){
		printf("\t\t\t\t\tUm quiz referente materia de Qu%cmica", 141);
		Sleep(2000);
	}	

	else if(capa == 3)Sleep(750);

	else if(capa == 4)Sleep(750);
		
	else if(capa == 5){
	printf("\t\t\t\t| Deseja come%car?: ", 135);
	gets(esco);
	if(strcmp(strupr(esco), "SIM") != 0){
		system("cls");
		printf("\n\n\n\n\n\t\t\t\t\t\tAt%c uma proxima vez!", 130);
		return 0;
	}	
	Sleep(1000);
	}	
	
	printf("\n\t\t\t\t|\n\t\t\t\t\t\t\t\t\t\t\t  |\n");
		++capa;
	}
   	
   	capa = 0;
   	
   	while (capa < 60){
		if(capa == 0){
			printf("\t\t\t\t");
			++capa;
		}
		printf("-");
	++capa;	
	}
   	capa = 0;
   	
   	system("cls"); //referente a tela 2
   	
	   	for(tela = 0; tela <= 100; tela+=10){
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(400);
		system("cls");
		
		
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(2000);
			tela = 111;
		}
	
	}
	tela = 0;
	strcpy(loading2, "");
	system("cls");
	
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t  Voc%c tem 30 segundos para responder cada pergunta!", 136);
	system("color 04"); 
	Sleep(250);
	system("color 03");
	Sleep(250);
	system("color 0F");
	Sleep(250);
	system("color 04"); 
	Sleep(250);
	system("color 03");
	Sleep(250);
	system("color 0F");
	Sleep(250);
	system("color 04"); 
	Sleep(250);
	system("color 03");
	Sleep(250);
	system("color 0F");
	
	
   	system("cls"); // Apagando a tela de carregamento 2 <><><
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 1.", 198);
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 1 .", 198);
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 1  .", 198);
	system("color 05");
	Sleep(250);
	system("cls");
   	}
   	system("cls");		
   	system("color 07");		
   	
   	
   for(segundos = 0; segundos <=30; ++segundos){
	                                                              	        
	printf("\n\t\t\t\t------------------------------------------------------------\n"); //tela 3 Questao 1<<<<<
	if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|Os sais est%co presentes em nosso cotidiano e s%co de suma  |\n", 198, 198);
	printf("\t\t\t\t|import%cncia para a sobrevivencia dos seres humanos. Dos   |\n", 131);
	printf("\t\t\t\t|sais abaixo, aqueles que em solu%c%co aquosa apresenta pH   |\n", 135 , 198);
	printf("\t\t\t\t|igual a 7 %c:                                              |\n" ,130);				//sleep diferente para sensaçõa de loading
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)NaHCO3.                                                |\n");
	printf("\t\t\t\t|(B)(NH4)2SO4.                                             |\n");
	printf("\t\t\t\t|(C)KCN.                                                   |\n");
	printf("\t\t\t\t|(D)NaCl.                                                  |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\t\t\t\t:");
	Sleep(1000);
	system("cls");
	if(kbhit()){
		esco_UQ = getch();
		break;
			}
			
	}
	if(toupper(esco_UQ) == 'D'){
		quest1++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 02");
			
			while(tela <= 100){				//tela de carregamento apos resposta correta 
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
			
			system("color 02");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
			Sleep(1000);
			++correta;
	}
	else{
		
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 04");
			
			while(tela <= 100){				//tela de carregamento apos resposta errada;
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("color 04");
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
			
			
			system("color 04");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
			Sleep(1000);
			system("color 0F");
			
			++errada;
	}
	printf("\n\n");	
	system("cls");   	
		   	
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 2.", 198);
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 2 .", 198);
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 2  .", 198);
	system("color 05");
	Sleep(250);
	system("cls");
   	}
   	Sleep(1500);
   	system("cls");
	 system("color 07");			   
	//tela 4
		
		
	for(segundos = 0; segundos <= 30; ++segundos){
		                                                                      
	printf("\n\t\t\t\t------------------------------------------------------------\n"); //tela 4 Questao 2<<<<<
	if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|Qual o m%ctodo mais adequado se queremos separar uma mistu-|\n", 130);
	printf("\t\t\t\t|ra homog%cnea contendo %cgua e sal, mas queremos obter ambos|\n", 136, 160);
	printf("\t\t\t\t|os componentes?:                               	   |\n");
	printf("\t\t\t\t|                                              		   |\n");				
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)Filtra%c%co.                                             |\n", 135 , 198);
	printf("\t\t\t\t|(B)Centrifuga%c%co.                                         |\n",135 , 198);
	printf("\t\t\t\t|(C)Decanta%c%co.                                            |\n",135 , 198);
	printf("\t\t\t\t|(D)Destila%c%co.                                            |\n",135 , 198);
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\t\t\t\t:");
	Sleep(1000);
	system("cls");
	if(kbhit()){
		esco_UQ = getch();
		break;
			}
		
	}
	
	if(toupper(esco_UQ) == 'D'){
		quest2++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta correta 
							system("color 02");
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
			
			system("color 02");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
			Sleep(1000);
			++correta;
	}
	else{
		
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta errada;
							system("color 04");
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 04");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
			
			
			system("color 04");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
			Sleep(1000);
			system("color 0F");
			++errada;
	}
	printf("\n\n");
   		
	system("cls");   
	
		
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 3.", 198);
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 3 .", 198);
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuest%co 3  .", 198);
	system("color 05");
	Sleep(250);
	system("cls");
   	}
   	system("cls");
	system("color 07");		   	
																	//tela 5;
setlocale(LC_ALL, "portuguese");	
	for(segundos = 0; segundos <= 30; segundos++){
		
		printf("\n\t\t\t\t------------------------------------------------------------\n"); //Questao 3<<<<
		if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|Alotropia é a capacidade que um elemento possui de dar or-|\n");
	printf("\t\t\t\t|igem a substâncias simples diferentes, mesmo tendo apenas |\n");
	printf("\t\t\t\t|um tipo de atómo. O elemento quimico enxofre apresenta du-|\n");
	printf("\t\t\t\t|as importantes formas alotrópicas, que são:               |\n");				
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)Enxofre monoclínico e grafita.                         |\n");
	printf("\t\t\t\t|(B)Enxofre rômbico e monoclínico.                         |\n");
	printf("\t\t\t\t|(C)Enxofre branco e vermelho.                             |\n");
	printf("\t\t\t\t|(D)Enxofre rômbico e fulereno.                            |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\n\t\t\t\t:");
		if(kbhit()){
			esco_UQ = getch();
			break;
		}
		Sleep(1000);
		system("cls");
	}
	
	if(toupper(esco_UQ) == 'B'){
		quest3++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta correta 
							system("color 02");
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
			
			
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
		
		
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
		++correta;
	}
	else{
	
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta errada;
							system("color 04");
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 04");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
		
		system("color 04");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
		++errada;
	}
	
		Sleep(2000);
		system("cls");
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 4.");
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 4 .");
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 4  .");
	system("color 05");
	Sleep(250);
	system("cls");
   	}
	
	system("cls");
	system("color 0F");
	
	for(segundos = 0; segundos <= 30; segundos++){
		
		printf("\n\t\t\t\t------------------------------------------------------------\n");			//tela 6 questão 4;
		if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|Após uma aula, um professor lava as mãos com água e sabão,|\n");
	printf("\t\t\t\t|separando, com isto, todo o giz de suas mãos. Tal processo|\n");
	printf("\t\t\t\t|de separação dos componentes da mistura é denominado:     |\n");
	printf("\t\t\t\t|                                                          |\n");				
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)Decantação.                                            |\n");
	printf("\t\t\t\t|(B)Dissolução.                                            |\n");
	printf("\t\t\t\t|(C)Destilação.                                            |\n");
	printf("\t\t\t\t|(D)Levigação.                                             |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\n\t\t\t\t:");
		if(kbhit()){
			esco_UQ = getch();
			break;
		}
		Sleep(1000);
		system("cls");
	}
	
	if(toupper(esco_UQ) == 'D'){
		quest4++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta correta 
							system("color 02");
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
			
			
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
		
		
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
		++correta;
	}
	else{
		
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta errada;
							system("color 04");
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 04");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
		
		system("color 04");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
		++errada;
	}
	
		Sleep(2000);
		system("cls");
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 5.");
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 5 .");
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 5  .");
	system("color 05");
	Sleep(250);
	system("cls");
   	}
	
	system("cls");
	system("color 0F");
	
	
	for(segundos = 0; segundos <= 30; segundos++){
		
		printf("\n\t\t\t\t------------------------------------------------------------\n");			//tela 7 questão 5;
		if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|Estudando os alótropos de enxofre, é possivel perceber qu-|\n");
	printf("\t\t\t\t|e os dois principais alótropos desse elemento químico apr-|\n");
	printf("\t\t\t\t|esentam uma caracteristíca física em comum. Qual é essa c-|\n");
	printf("\t\t\t\t|aracterística?                                            |\n");				
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)Maleabilidade.                                         |\n");
	printf("\t\t\t\t|(B)Solubilidade.                                          |\n");
	printf("\t\t\t\t|(C)Densidade.                                             |\n");
	printf("\t\t\t\t|(D)Ponto de ebulição.                                     |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\n\t\t\t\t:");
		if(kbhit()){
			esco_UQ = getch();
			break;
		}
		Sleep(1000);
		system("cls");
	}
	
	if(toupper(esco_UQ) == 'D'){
		quest5++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta correta 
							system("color 02");
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
			
			
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
		
		
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
		++correta;
	}
	else{
		
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta errada;
							system("color 04");
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 04");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
		
		system("color 04");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
		++errada;
	}
	
		Sleep(2000);
		system("cls");
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 6.");
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 6 .");
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 6  .");
	system("color 05");
	Sleep(250);
	system("cls");
   	}
	
	system("cls");
	system("color 0F");
	
	          
	 for(segundos = 0; segundos <= 30; segundos++){
		
		printf("\n\t\t\t\t------------------------------------------------------------\n");			//tela 8 questão 6;
		if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|A flotação é um dos métodos de beneficiamento do carvão m-|\n");
	printf("\t\t\t\t|ineral. Isso é possivel porque a fração rica em matéria c-|\n");
	printf("\t\t\t\t|arbonosa e a fração rica em cinza apresentam diferentes:  |\n");
	printf("\t\t\t\t|                                               	   |\n");				
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)Pontos de fusão.                                       |\n");
	printf("\t\t\t\t|(B)Densidades.                                            |\n");
	printf("\t\t\t\t|(C)Pontos de ebulição.                                    |\n");
	printf("\t\t\t\t|(D)Comportamento Magnético.                               |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\n\t\t\t\t:");
		if(kbhit()){
			esco_UQ = getch();
			break;
		}
		Sleep(1000);
		system("cls");
	}
	
	if(toupper(esco_UQ) == 'B'){
			quest6++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta correta 
							system("color 02");
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
			
			
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
		
		
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
		++correta;
	}
	else{
		
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta errada;
							system("color 04");
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 04");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
		
		system("color 04");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
		++errada;
	}
	
		Sleep(2000);
		system("cls");
	for ( deter = 0; deter <= 5; ++deter){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 7.");
	system("color 04");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 7 .");
	system("color 07");
	Sleep(250);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\tQuestão 7  .");
	system("color 05");
	Sleep(250);
	system("cls");
   	}
	
	system("cls");
	system("color 0F");         
	          
	          
	for(segundos = 0; segundos <= 30; segundos++){
		
		printf("\n\t\t\t\t------------------------------------------------------------\n");			//tela 9 questão 7;
		if(segundos >= 10){
		printf("\t\t\t\t|    Certas: (%d)          Timer:%d            Erradas: (%d) |\n", correta, segundos, errada);
	}
	else{
	printf("\t\t\t\t|    Certas: (%d)          Timer:%d             Erradas: (%d) |\n", correta, segundos, errada);
	}
	printf("\t\t\t\t|                         	                           |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|Segundo dados experimentais, o oxigênio do ar que respira-|\n");
	printf("\t\t\t\t|mos tem exatos 99,759%% de (8)O(16), 0,037%% de átomos de   |\n");
	printf("\t\t\t\t|(8)O(16) e 0,204%% de (8)O(18), Diante desta contestação   |\n");
	printf("\t\t\t\t|pode-se afirmar que essas três fórmulas naturais do oxigê-|\n");				
	printf("\t\t\t\t|nio constituem átomos que, entre si, são:                 |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|(A)Alótropos.                                             |\n");
	printf("\t\t\t\t|(B)Isóbaros.                                              |\n");
	printf("\t\t\t\t|(C)Isótonos.                                              |\n");
	printf("\t\t\t\t|(D)Isótopos.                                              |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |\n");
	printf("\t\t\t\t|                                                          |");
	printf("\n\t\t\t\t------------------------------------------------------------\n");
	printf("\n\n\t\t\t\t:");
		if(kbhit()){
			esco_UQ = getch();
			break;
		}
		Sleep(1000);
		system("cls");
	}
	
	if(toupper(esco_UQ) == 'D'){
			quest7++;
		system("color 2F");
		Sleep(1000);
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta correta 
							system("color 02");
		if(tela == 30){
			tela+=50;
		}
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 02");
			Sleep(350);
			tela = 111;
			
			
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento resposta correta 
   	
		
		
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t\t|CORRETA|\n");
		++correta;
	}
	else{
		
		system("color 4F");
		Sleep(1000);
		
			system("cls");
			system("color 0F");
			
			while(tela <= 100){//tela de carregamento apos resposta errada;
							system("color 04");
		if(tela == 30){
			tela+=50;
		}
		
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando.");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		
		system("cls");
		
		printf("\n\n\n\n\n\t\t\t\t\tCarregando  .");
		printf("\n\t\t\t\t\t{%d%%}[%s]",tela, loading2);
		strcat(loading2, loading1);
		
		Sleep(500);
		system("cls");
		
		if(tela == 60){
			tela+=20;
		}
		tela+=10;
		if(tela == 100){
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t\t{%d%%}", tela);
			system("color 04");
			Sleep(350);
			tela = 111;
		}
	}
	tela = 0;
	strcpy(loading2, "");
	
	Sleep(750);
   	system("cls"); // Limpando tela de carregamento de resposta errada
			
		
		system("color 04");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t|Errado/Tempo esgotado|");
		++errada;
	}
		Sleep(2000);
		system("cls");
	 if(correta == 7){
			for ( deter = 0; deter <=5; deter++){
			system("cls");
	 		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \tParabéns %s, você teve 100%% de acertos e provou ser o melhor futuro Químico que esse mundo já viu", Nome_usuario);
			printf("\a\a\a\a\a\a");
	 		Sleep(250);
			system("color 04");
	 		Sleep(250);
	 		system("color 03");
	 		Sleep(250);
	 		system("color 07");
	 		system("cls");
	 		system("color 04");
	 		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\tObrigado por jogar!");
	 		return 0;
	 		}
		}
		system("color 0F");
		
	printf("\t\t\t\tOlá, você deu o seu melhor com certeza, aqui está o gabarito:\n");
	Sleep(5000);
	system("cls");
	for(deter = 1; deter <=7; deter++){
		
		
		if(deter == 1 && quest1 == 1) system("color 02");
	if(deter == 1 && quest1 == 0) system("color 04");	 
		if(deter == 2 && quest2 == 1) system("color 02");
	if(deter == 2 && quest2 == 0) system("color 04");
		if(deter == 3 && quest3 == 1) system("color 02");
	if(deter == 3 && quest3 == 0) system("color 04");
		if(deter == 4 && quest4 == 1) system("color 02");
	if(deter == 4 && quest4 == 0) system("color 04");
		if(deter == 5 && quest5 == 1) system("color 02");
	if(deter == 5 && quest5 == 0) system("color 04");	
		if(deter == 6 && quest6 == 1) system("color 02");
	if(deter == 6 && quest6 == 0) system("color 04");	
		if(deter == 7 && quest7 == 1) system("color 02");
	if(deter == 7 && quest7 == 0) system("color 04");	
		if(deter == 3 || deter == 6){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t    %d questão: (B)", deter);
		}
		else printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\t    %d questão: (D)", deter);
		
		Sleep(6000);
		system("cls");
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\tSua porcentagem de acertos é: %.lf%%\n", (float)(correta*100)/7);
	Sleep(4000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n  \t\t\t\t\t\tObrigado por jogar!");
	return 0;
}

