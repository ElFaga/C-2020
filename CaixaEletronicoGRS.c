#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	//Sistema do CPF
    int digv1 = 0, digv2 = 0,
	//digv1 e digv2 sao os digitos verificadores
		cpfvd = 0, cpfok = 0;
	//cpfvd e cpfok sao os verificadores do cpf
    long long cpf,											
	//cpf define o cpf
			  v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11;
	//v"n" determina o numero do digito de acordo com o valor de n	
		  
	//Sistema das Opcoes
	int opmp,
	//opmp deine as opcoes do menu principal
		opmg,
	//opmg define as opcoes do menu de gerente	
		opma,
	//opma define as opcoes do menu de abastecimento
	
	//Sistema do dinheiro																							
	    vn=0,	
	//vn define o valor da nota a ser abastecida																						
	    qced450=0, qced250=0, qced50=0, qced20=0, qced10=0, qced5=0, qced2=0, qced1=0, 	
	//ced define o valor das cedulas, sempre estara acompanhada do valor da cedula
		cd450=0, cd250=0, cd50=0, cd20=0, cd10=0, cd5=0, cd2=0, cd1=0,
	//cd define as cedulas dispensadas na hora da distribuicao																								
	    qtdced=0,																								
	//qtdced define a quantidade de cedulas no caixa	
		nab=0,
	//nab define a quantidade de cedulas a serem abastecidas												
		vs=0,
	//vs define o valor do saque	   
		sr=0,
	//sr define o valor do saque restante	
		vts=0,
	//vts define o valor total sacado
		vtc=0;
	//vtc define o valor total no caixa
	
	//Sistema do por extenso
		int vse, verifica1=0, verifica2=0, verifica3=0, verifica4=0, verifica5=0;
	
	do{
		system("cls");
		printf("\nMenu Principal\n");
		printf("\n1 - Saque\n");
		printf("\n2 - Menu Gerente\n");
		printf("\n3 - Finalizar\n");
		printf("\n\nDigite a opcao desejada: ");
		scanf("%i", &opmp);
		
		if (opmp != 1 && opmp != 2 && opmp != 3){
			printf("\nOpcao Invalida!\n");
			system("pause");
		}else{
			switch (opmp){
				case 1:
					//Opcao Saque
					printf("\nVoce escolheu a opcao SAQUE!\n");
					system("pause");
					do{
						system("cls");
						//Validacao do CPF
					
						printf("Favor informar o CPF: ");
        				scanf("%lld", &cpf);
               			//Separa os digitos de cada parte do cpf
                		//v == digito do cpf
                		v1 = cpf / 10000000000;
               	    	v2 = (cpf / 1000000000) % 10;
               			v3 = (cpf / 100000000) % 10;
                		v4 = (cpf / 10000000) % 10;
            	    	v5 = (cpf / 1000000) % 10;    
               		 	v6 = (cpf / 100000) % 10;
             		   	v7 = (cpf / 10000) % 10;
               		 	v8 = (cpf / 1000) % 10;
              		  	v9 = (cpf / 100) % 10;
                	 	v10 = (cpf / 10) % 10;
               		 	v11 = cpf % 10;

               		 	if (cpf == 11111111111 || cpf == 22222222222 || cpf == 33333333333 || cpf == 44444444444 || cpf == 55555555555 || cpf == 66666666666 || cpf == 77777777777 || cpf == 88888888888 || cpf == 99999999999){
                    		printf("CPF invalido (Um CPF nao pode ser composto por apenas um digito repetido 11 vezes)\n\nE.G.: 11111111111");
                    		system("pause");
                		}else{
                    		digv1 = ((v1*10)+(v2*9)+(v3*8)+(v4*7)+(v5*6)+(v6*5)+(v7*4)+(v8*3)+(v9*2))%11;
                    			if (digv1 < 2){
                        			digv1 = 0;
                    			}else{
                        			digv1 = 11 - digv1;
                    			}
                    			digv2 = ((v1*11)+(v2*10)+(v3*9)+(v4*8)+(v5*7)+(v6*6)+(v7*5)+(v8*4)+(v9*3)+(digv1*2))%11;
                    				if (digv2 < 2){
                        				digv2 = 0;
                    				}else{
                       			    	digv2 = 11 - digv2;
                    				}

                  	  		//Verificacao da validade do cpf
                    	 	cpfok = (v10*10) + v11;
                   			cpfvd = (10*digv1) + digv2;

                    		if (cpfok != cpfvd){ 
                    		    printf("Cpf invalido, tente novamente.\n");
                    		    system("pause");
                   			 }else{
                    			printf("CPF Valido!");
							}
						}
					}while(cpfok != cpfvd);
		
					//Saque (Valor Maximo: 188.600)
					printf("\nInforme o valor do saque: ");
					scanf("%i", &vs);
					while(vs < 1){
						printf("\nValor Invalido! O valor do saque nao pode ser menor que 1 R$");
						printf("\nInforme o valor do saque: ");
						scanf("%i", &vs);	
						}
					sr = vs;	
					
					vtc = ((qced450 * 450) + (qced250 * 250) + (qced50 * 50) + (qced20 * 20) + (qced10 * 10) + (qced5 * 5) + (qced2 * 2) + (qced1 * 1));
					//Calculo do valor total em caixa
					//Valor maximo no caixa 188 600 R$
					
                        sr = vs;
                        //Processamento para notas de 450
                        while(qced450 > 0 && sr >= 450){
                            sr = sr - 450; 													//Calculo do saldo restante
                            qced450 = qced450 - 1; 											//Calculo do valor da quantidade de cedulas de 450
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 450; 												//Calculo do valor total sacado
                            vtc = vtc - 450; 												//Calculo do valor total no caixa  
							cd450 = cd450 + 1;												//Calculo das cedulas descontadas                 
                        }
                       //Processamento para notas de 250
                        while(qced250 > 0 && sr >= 250){
                            sr = sr - 250; 													//Calculo do saldo restante
                            qced250 = qced250 - 1; 											//Calculo do valor da quantidade de cedulas de 250
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 250; 												//Calculo do valor total sacado
                            vtc = vtc - 250; 												//Calculo do valor total no caixa     
							cd250 = cd250 + 1;												//Calculo das cedulas descontadas                   
                        }
                        //Processamento para notas de 50
                        while(qced50 > 0 && sr >= 50){
                            sr = sr - 50; 													//Calculo do saldo restante
                            qced50 = qced50 - 1; 											//Calculo do valor da quantidade de cedulas de 50
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 50; 												//Calculo do valor total sacado
                            vtc = vtc - 50; 												//Calculo do valor total no caixa     
							cd50 = cd50 + 1;												//Calculo das cedulas descontadas               
                        }
                        //Processamento para notas de 20
                        while(qced20 > 0 && sr >= 20){
                            sr = sr - 20; 													//Calculo do saldo restante
                            qced20 = qced20 - 1; 											//Calculo do valor da quantidade de cedulas de 20
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 20; 												//Calculo do valor total sacado 
                            vtc = vtc - 20; 												//Calculo do valor total no caixa    
							cd20 = cd20 + 1;												//Calculo das cedulas descontadas	                  
                        }
                        //Processamento para notas de 10
                        while(qced10 > 0 && sr >= 10){
                            sr = sr - 10; 													//Calculo do saldo restante
                            qced10 = qced10 - 1; 											//Calculo do valor da quantidade de cedulas de 10
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 10; 												//Calculo do valor total sacado
                            vtc = vtc - 10; 												//Calculo do valor total no caixa     
							cd10 = cd10 + 1;												//Calculo das cedulas descontadas                 
                        }
                        //Processamento para notas de 5
                        while(qced5 > 0 && sr >= 5){
                            sr = sr - 5; 													//Calculo do saldo restante
                            qced5 = qced5 - 1; 												//Calculo do valor da quantidade de cedulas de 5
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 5; 													//Calculo do valor total sacado
                            vtc = vtc - 5; 													//Calculo do valor total no caixa    
							cd5 = cd5 + 1;													//Calculo das cedulas descontadas          
                        }
                        //Processamento para notas de 2
                        while(qced2 > 0 && sr >= 2){
                            sr = sr - 2; 													//Calculo do saldo restante
                            qced2 = qced2 - 1; 												//Calculo do valor da quantidade de cedulas de 2
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 2; 													//Calculo do valor total sacado
                            vtc = vtc - 2; 													//Calculo do valor total no caixa   
							cd2 = cd2 + 1;													//Calculo das cedulas descontadas                 
                        }
                        //Processamento para notas de 1
                        while(qced1 > 0 && sr >= 1){
                            sr = sr - 1; 													//Calculo do saldo restante
                            qced1 = qced1 - 1; 												//Calculo do valor da quantidade de cedulas de 1
                            qtdced = qtdced - 1; 											//Calculo da quantidade de cedulas
                            vts = vts + 1; 													//Calculo do valor total sacado 
                            vtc = vtc - 1; 													//Calculo do valor total no caixa
                            cd1 = cd1 + 1;													//Calculo das cedulas descontadas
                        }
							
                        if (sr > 0){
                            vs = vs - sr; 													//Calculo final do saque, para o caso de haverem sobras
                            printf("Infelizmente nao foi possivel sacar: %dR$\n",sr );		//Imprime o valor que nao pode ser sacado
                        }
                        printf("O valor a ser sacado sera: %dR$ ", vs);                       
                        vse = vs;
                        if(vse == 0){
						printf("zero ");
					}else{
						//Milhar
					    if (vse >= 100000) {
					      verifica1 = 1;
					      if(vse >= 200000) {
					        if (vse==200000) {
					          printf("duzentos mil ");
					          vse = vse%200000;
					        }else{
					          printf("duzentos ");
					          vse = vse%200000;
					        }
					      }
					      if (vse >= 100000) {
					        if (vse== 100000) {
					          printf("cem mil ");
					          vse = vse%100000;
					        }else if (vse>= 100000 && ((vse%100000)< 999)) {
					          printf("cem ");
					          vse = vse%100000;
					        } else {
					          printf("cento ");
					          vse = vse%100000;
					        }
					      }
					    }
					
					    if (vse >= 10000) {
					      verifica2 = 1;
					      if (verifica1 == 1) { //verifica se passou pela contagem do primeiro while, se sim, deve ser aplicado esse print
					        printf(" e ");
					      }
					      if(vse >= 90000) {
					        if (vse== 90000) {
					          printf("noventa mil ");
					          vse = vse%90000;
					        }else{
					          printf("noventa ");
					          vse = vse%90000;
					        }
					      }
					      if(vse >= 80000) {
					        if (vse== 80000) {
					          printf("oitenta mil ");
					          vse = vse%80000;
					        }else{
					          printf("oitenta ");
					          vse = vse%80000;
					        }
					      }
					        if(vse >= 70000) {
					        if (vse==70000) {
					          printf("setenta mil ");
					          vse = vse%70000;
					        }else{
					          printf("setenta ");
					          vse = vse%70000;
					        }
					      }
					      if(vse >= 60000) {
					        if (vse==60000) {
					          printf("sessenta mil ");
					          vse = vse%60000;
					        }else{
					          printf("sessenta ");
					          vse = vse%60000;
					        }
					      }
					      if(vse >= 50000) {
					        if (vse==50000) {
					          printf("cinquenta mil ");
					          vse = vse%50000;
					        }else{
					          printf("cinquenta ");
					          vse = vse%50000;
					        }
					      }
					      if(vse >= 40000) {
					        if (vse==40000) {
					          printf("quarenta mil ");
					          vse = vse%40000;
					        }else{
					          printf("quarenta ");
					          vse = vse%40000;
					        }
					      }
					      if(vse >= 30000) {
					        if (vse==30000) {
					          printf("trinta mil ");
					          vse = vse%30000;
					        }else{
					          printf("trinta ");
					          vse = vse%30000;
					        }
					      }
					      if(vse >= 20000) {
					        if (vse==20000) {
					          printf("vinte mil ");
					          vse = vse%20000;
					        }else{
					          printf("vinte ");
					          vse = vse%20000;
					        }
					      }
					      if(vse == 19000) {
					        printf("dezenove ");
					        vse = vse%19000;
					      }
					      if(vse == 18000) {
					        printf("dezoito ");
					        vse = vse%18;
					      }
					      if(vse == 17000) {
					        printf("dezessete ");
					        vse = vse%17000;
					      }
					      if(vse == 16000) {
					        printf("dezesseis ");
					        vse = vse%16000;
					      }
					      if(vse == 15000) {
					        printf("quinze ");
					        vse = vse%15000;
					      }
					      if(vse == 14000) {
					        printf("quatorze ");
					        vse = vse%14000;
					      }
					      if(vse == 13000) {
					        printf("treze ");
					        vse = vse%13000;
					      }
					      if(vse == 12000) {
					        printf("doze ");
					        vse = vse%12000;
					      }
					      if(vse == 11000) {
					        printf("onze ");
					        vse = vse%11000;
					      }
					      if(vse >= 10000) {
					        if (vse==10000) {
					          printf("dez mil ");
					          vse = vse%10000;
					        }else{
					          printf("dez ");
					          vse = vse%10000;
					        }
					      }
					    }
					
					    if (vse >= 1000) {
					      if (verifica2==1) {
					        printf("e ");
					      }
					      verifica3 = 1;
					      if(vse >= 9000) {
					        if (vse==9000) {
					          printf("nove mil ");
					          vse = vse%9000;
					        }else{
					          printf("nove ");
					          vse = vse%9000;
					        }
					      }
					      if(vse >= 8000) {
					        if (vse==8000) {
					          printf("oito mil ");
					          vse = vse%8000;
					        }else{
					          printf("oito ");
					          vse = vse%8000;
					        }
					      }
					      if(vse >= 7000) {
					        if (vse==7000) {
					          printf("sete mil ");
					          vse = vse%7000;
					        }else{
					          printf("sete ");
					          vse = vse%7000;
					        }
					      }
					      if(vse >= 6000) {
					        if (vse==6000) {
					          printf("seis mil ");
					          vse = vse%6000;
					        }else{
					          printf("seis ");
					          vse = vse%6000;
					        }
					      }
					      if(vse >= 5000) {
					        if (vse==5000) {
					          printf("cinco mil ");
					          vse = vse%5000;
					        }else{
					          printf("cinco ");
					          vse = vse%5000;
					        }
					      }
					      if(vse >= 4000) {
					        if (vse==4000) {
					          printf("quatro mil ");
					          vse = vse%4000;
					        }else{
					          printf("quatro ");
					          vse = vse%4000;
					        }
					      }
					      if(vse >= 3000) {
					        if (vse==3000) {
					          printf("tres mil ");
					          vse = vse%3000;
					        }else{
					          printf("tres ");
					          vse = vse%3000;
					        }
					      }
					      if(vse >= 2000) {
					        if (vse==2000) {
					          printf("dois mil ");
					          vse = vse%2000;
					        }else{
					          printf("dois ");
					          vse = vse%2000;
					        }
					      }
					      if(vse >= 1000) {
					        if (vse==1000 && verifica2 != 1 ) {
					          printf("mil ");
					          vse = vse%1000;
					        }else{
					          printf("um ");
					          vse = vse%1000;
					        }
					      }
					    }
						//Centena
					    if (vse >= 100) {
					      if (verifica1 == 1 && verifica2 != 1) {
					        printf("mil ");
					      }else if (verifica2 == 1) {
					        printf("mil ");
					      }else if (verifica3==1 && verifica2!=1) {
					        printf("mil ");
					      }
					      verifica4 = 1;
					      if(vse >= 900) {
					        if (vse==900) {
					          printf("novecentos ");
					          vse = vse%900;
					        }else{
					          printf("novecentos ");
					          vse = vse%900;
					        }
					      }
					      if(vse >= 800) {
					        if (vse==800) {
					          printf("oitocentos ");
					          vse = vse%800;
					        }else{
					          printf("oitocentos ");
					          vse = vse%800;
					        }
					      }
					      if(vse >= 700) {
					        if (vse==700) {
					          printf("setecentos ");
					          vse = vse%700;
					        }else{
					          printf("setecentos ");
					          vse = vse%700;
					        }
					      }
					      if(vse >= 600) {
					        if (vse==600) {
					          printf("seiscentos ");
					          vse = vse%600;
					        }else{
					          printf("seiscentos ");
					          vse = vse%600;
					        }
					      }
					      if(vse >= 500) {
					        if (vse==500) {
					          printf("quinhentos ");
					          vse = vse%500;
					        }else{
					          printf("quinhentos ");
					          vse = vse%500;
					        }
					      }
					      if(vse >= 400) {
					        if (vse==400) {
					          printf("quatrocentos ");
					          vse = vse%400;
					        }else{
					          printf("quatrocentos ");
					          vse = vse%400;
					        }
					      }
					      if(vse >= 300) {
					        if (vse==300) {
					          printf("trezentos ");
					          vse = vse%300;
					        }else{
					          printf("trezentos ");
					          vse = vse%300;
					        }
					      }
					      if(vse >= 200) {
					        if (vse==200) {
					          printf("duzentos ");
					          vse = vse%200;
					        }else{
					          printf("duzentos ");
					          vse = vse%200;
					        }
					      }
					      if(vse >= 100) {
					        if (vse==100) {
					          printf("cem ");
					          vse = vse%100;
					        }else{
					          printf("cento ");
					          vse = vse%100;
					        }
					      }
					    }
						//Dezena
					    if (vse >= 10){
					      if (verifica2 == 1 && verifica3!=1 && verifica4 !=1) {
					        printf("mil e ");
					      }
					      if (verifica3 == 1 && verifica4 != 1) {
					        printf("mil ");
					      }
					      if (verifica4 == 1) {
					        printf("e ");
					      }
					      verifica5 = 1;
					
					      if(vse >= 90) {
					        if (vse==90) {
					          printf("noventa ");
					          vse = vse%90;
					        }else{
					          printf("noventa ");
					          vse = vse%90;
					        }
					      }
					      if(vse >= 80) {
					        if (vse==80) {
					          printf("oitenta ");
					          vse = vse%80;
					        }else{
					          printf("oitenta ");
					          vse = vse%80;
					        }
					      }
					      if(vse >= 70) {
					        if (vse==70) {
					          printf("setenta ");
					          vse = vse%70;
					        }else{
					          printf("setenta ");
					          vse = vse%70;
					        }
					      }
					      if(vse >= 60) {
					        if (vse==60) {
					          printf("sessenta ");
					          vse = vse%60;
					        }else{
					          printf("sessenta ");
					          vse = vse%60;
					        }
					      }
					      if(vse >= 50) {
					        if (vse==50) {
					          printf("cinquenta ");
					          vse = vse%50;
					        }else{
					          printf("cinquenta ");
					          vse = vse%50;
					        }
					      }
					      if(vse >= 40) {
					        if (vse==40) {
					          printf("quarenta ");
					          vse = vse%40;
					        }else{
					          printf("quarenta ");
					          vse = vse%40;
					        }
					      }
					      if(vse >= 30) {
					        if (vse==30) {
					          printf("trinta ");
					          vse = vse%30;
					        }else{
					          printf("trinta ");
					          vse = vse%30;
					        }
					      }
					      if(vse >= 20) {
					        if (vse==20) {
					          printf("vinte ");
					          vse = vse%20;
					        }else{
					          printf("vinte ");
					          vse = vse%20;
					        }
					      }
					      if(vse == 19) {
					        printf("dezenove ");
					        vse = vse%19;
					      }
					      if(vse == 18) {
					        printf("dezoito ");
					        vse = vse%18;
					      }
					      if(vse == 17) {
					        printf("dezessete ");
					        vse = vse%17;
					      }
					      if(vse == 16) {
					        printf("dezesseis ");
					        vse = vse%16;
					      }
					      if(vse == 15) {
					        printf("quinze ");
					        vse = vse%15;
					      }
					      if(vse == 14) {
					        printf("quatorze ");
					        vse = vse%14;
					      }
					      if(vse == 13) {
					        printf("treze ");
					        vse = vse%13;
					      }
					      if(vse == 12) {
					        printf("doze ");
					        vse = vse%12;
					      }
					      if(vse == 11) {
					        printf("onze ");
					        vse = vse%11;
					      }
					      if(vse == 10) {
					        printf("dez ");
					        vse = vse%10;
					      }
					    }
						//Unidade
					    if (vse >= 1) {
					      if (verifica2 == 1 && verifica3!=4 && verifica4 !=1 && verifica5 != 1) {
					        printf("mil e ");
					      }
					      if (verifica5 == 1) {
					        printf("e ");
					      }
					      if(vse == 1) {
					        printf("um ");
					      }
					
					      if(vse == 2) {
					        printf("dois ");
					      }
					      if(vse == 3) {
					        printf("tres ");
					      }
					      if(vse == 4) {
					        printf("quatro ");
					      }
					      if(vse == 5) {
					        printf("cinco ");
					      }
					      if(vse == 6) {
					        printf("seis ");
					      }
					      if(vse == 7) {
					        printf("sete ");
					      }
					      if(vse == 8) {
					        printf("oito ");
					      }
					      if(vse == 9) {
					        printf("nove ");
					      }
					    }
					}
					printf("reais \n");
				    //Tabela informativa com a quantidade de cedulas
                    printf("Para sacar: %dR$ com a menor quantidade de notas possiveis, sairao da maquina", vs);
                    printf("\n\n%i - Cedulas de 450", cd450);
					printf("\n\n%i - Cedulas de 250", cd250);
					printf("\n\n%i - Cedulas de 50", cd50);
					printf("\n\n%i - Cedulas de 20", cd20);
					printf("\n\n%i - Cedulas de 10", cd10);
					printf("\n\n%i - Cedulas de 5", cd5);
					printf("\n\n%i - Cedulas de 2", cd2);
					printf("\n\n%i - Cedulas de 1\n", cd1);                       
                    system("pause");
					cd450 = cd250 = cd50 = cd20 = cd10 = cd5 = cd2 = cd1 = 0;
			
					break;
					
				case 2:
					//Opcao GERENTE
					printf("\nVoce escolheu a opcao GERENTE!\n");
					system("pause");
					do{
					system("cls");
					
					printf("Menu Gerente");
					printf("\n1 - Valor Total Sacado\n");
					printf("\n2 - Valor do Saldo Existente no Caixa\n");
					printf("\n3 - Quantidade de Cedulas no Caixa\n");
					printf("\n4 - Abastecer o Caixa \n");
					printf("\n5 - Voltar ao Menu Principal\n");
					printf("\nDigite a opcao desejada: ");
					scanf("%d", &opmg);
						
					switch(opmg){
						//Valor Total Sacado
						case 1:
							printf("\nO valor total sacado deste caixa eh: %iR$  ", vts);
							vse = vts;
                        if(vse == 0){
						printf("zero ");
					}else{
						//Milhar
					    if (vse >= 100000) {
					      verifica1 = 1;
					      if(vse >= 200000) {
					        if (vse==200000) {
					          printf("duzentos mil ");
					          vse = vse%200000;
					        }else{
					          printf("duzentos ");
					          vse = vse%200000;
					        }
					      }
					      if (vse >= 100000) {
					        if (vse== 100000) {
					          printf("cem mil ");
					          vse = vse%100000;
					        }else if (vse>= 100000 && ((vse%100000)< 999)) {
					          printf("cem ");
					          vse = vse%100000;
					        } else {
					          printf("cento ");
					          vse = vse%100000;
					        }
					      }
					    }
					
					    if (vse >= 10000) {
					      verifica2 = 1;
					      if (verifica1 == 1) { //verifica se passou pela contagem do primeiro while, se sim, deve ser aplicado esse print
					        printf(" e ");
					      }
					      if(vse >= 90000) {
					        if (vse== 90000) {
					          printf("noventa mil ");
					          vse = vse%90000;
					        }else{
					          printf("noventa ");
					          vse = vse%90000;
					        }
					      }
					      if(vse >= 80000) {
					        if (vse== 80000) {
					          printf("oitenta mil ");
					          vse = vse%80000;
					        }else{
					          printf("oitenta ");
					          vse = vse%80000;
					        }
					      }
					        if(vse >= 70000) {
					        if (vse==70000) {
					          printf("setenta mil ");
					          vse = vse%70000;
					        }else{
					          printf("setenta ");
					          vse = vse%70000;
					        }
					      }
					      if(vse >= 60000) {
					        if (vse==60000) {
					          printf("sessenta mil ");
					          vse = vse%60000;
					        }else{
					          printf("sessenta ");
					          vse = vse%60000;
					        }
					      }
					      if(vse >= 50000) {
					        if (vse==50000) {
					          printf("cinquenta mil ");
					          vse = vse%50000;
					        }else{
					          printf("cinquenta ");
					          vse = vse%50000;
					        }
					      }
					      if(vse >= 40000) {
					        if (vse==40000) {
					          printf("quarenta mil ");
					          vse = vse%40000;
					        }else{
					          printf("quarenta ");
					          vse = vse%40000;
					        }
					      }
					      if(vse >= 30000) {
					        if (vse==30000) {
					          printf("trinta mil ");
					          vse = vse%30000;
					        }else{
					          printf("trinta ");
					          vse = vse%30000;
					        }
					      }
					      if(vse >= 20000) {
					        if (vse==20000) {
					          printf("vinte mil ");
					          vse = vse%20000;
					        }else{
					          printf("vinte ");
					          vse = vse%20000;
					        }
					      }
					      if(vse == 19000) {
					        printf("dezenove ");
					        vse = vse%19000;
					      }
					      if(vse == 18000) {
					        printf("dezoito ");
					        vse = vse%18;
					      }
					      if(vse == 17000) {
					        printf("dezessete ");
					        vse = vse%17000;
					      }
					      if(vse == 16000) {
					        printf("dezesseis ");
					        vse = vse%16000;
					      }
					      if(vse == 15000) {
					        printf("quinze ");
					        vse = vse%15000;
					      }
					      if(vse == 14000) {
					        printf("quatorze ");
					        vse = vse%14000;
					      }
					      if(vse == 13000) {
					        printf("treze ");
					        vse = vse%13000;
					      }
					      if(vse == 12000) {
					        printf("doze ");
					        vse = vse%12000;
					      }
					      if(vse == 11000) {
					        printf("onze ");
					        vse = vse%11000;
					      }
					      if(vse >= 10000) {
					        if (vse==10000) {
					          printf("dez mil ");
					          vse = vse%10000;
					        }else{
					          printf("dez ");
					          vse = vse%10000;
					        }
					      }
					    }
					
					    if (vse >= 1000) {
					      if (verifica2==1) {
					        printf("e ");
					      }
					      verifica3 = 1;
					      if(vse >= 9000) {
					        if (vse==9000) {
					          printf("nove mil ");
					          vse = vse%9000;
					        }else{
					          printf("nove ");
					          vse = vse%9000;
					        }
					      }
					      if(vse >= 8000) {
					        if (vse==8000) {
					          printf("oito mil ");
					          vse = vse%8000;
					        }else{
					          printf("oito ");
					          vse = vse%8000;
					        }
					      }
					      if(vse >= 7000) {
					        if (vse==7000) {
					          printf("sete mil ");
					          vse = vse%7000;
					        }else{
					          printf("sete ");
					          vse = vse%7000;
					        }
					      }
					      if(vse >= 6000) {
					        if (vse==6000) {
					          printf("seis mil ");
					          vse = vse%6000;
					        }else{
					          printf("seis ");
					          vse = vse%6000;
					        }
					      }
					      if(vse >= 5000) {
					        if (vse==5000) {
					          printf("cinco mil ");
					          vse = vse%5000;
					        }else{
					          printf("cinco ");
					          vse = vse%5000;
					        }
					      }
					      if(vse >= 4000) {
					        if (vse==4000) {
					          printf("quatro mil ");
					          vse = vse%4000;
					        }else{
					          printf("quatro ");
					          vse = vse%4000;
					        }
					      }
					      if(vse >= 3000) {
					        if (vse==3000) {
					          printf("tres mil ");
					          vse = vse%3000;
					        }else{
					          printf("tres ");
					          vse = vse%3000;
					        }
					      }
					      if(vse >= 2000) {
					        if (vse==2000) {
					          printf("dois mil ");
					          vse = vse%2000;
					        }else{
					          printf("dois ");
					          vse = vse%2000;
					        }
					      }
					      if(vse >= 1000) {
					        if (vse==1000 && verifica2 != 1 ) {
					          printf("mil ");
					          vse = vse%1000;
					        }else{
					          printf("um ");
					          vse = vse%1000;
					        }
					      }
					    }
						//Centena
					    if (vse >= 100) {
					      if (verifica1 == 1 && verifica2 != 1) {
					        printf("mil ");
					      }else if (verifica2 == 1) {
					        printf("mil ");
					      }else if (verifica3==1 && verifica2!=1) {
					        printf("mil ");
					      }
					      verifica4 = 1;
					      if(vse >= 900) {
					        if (vse==900) {
					          printf("novecentos ");
					          vse = vse%900;
					        }else{
					          printf("novecentos ");
					          vse = vse%900;
					        }
					      }
					      if(vse >= 800) {
					        if (vse==800) {
					          printf("oitocentos ");
					          vse = vse%800;
					        }else{
					          printf("oitocentos ");
					          vse = vse%800;
					        }
					      }
					      if(vse >= 700) {
					        if (vse==700) {
					          printf("setecentos ");
					          vse = vse%700;
					        }else{
					          printf("setecentos ");
					          vse = vse%700;
					        }
					      }
					      if(vse >= 600) {
					        if (vse==600) {
					          printf("seiscentos ");
					          vse = vse%600;
					        }else{
					          printf("seiscentos ");
					          vse = vse%600;
					        }
					      }
					      if(vse >= 500) {
					        if (vse==500) {
					          printf("quinhentos ");
					          vse = vse%500;
					        }else{
					          printf("quinhentos ");
					          vse = vse%500;
					        }
					      }
					      if(vse >= 400) {
					        if (vse==400) {
					          printf("quatrocentos ");
					          vse = vse%400;
					        }else{
					          printf("quatrocentos ");
					          vse = vse%400;
					        }
					      }
					      if(vse >= 300) {
					        if (vse==300) {
					          printf("trezentos ");
					          vse = vse%300;
					        }else{
					          printf("trezentos ");
					          vse = vse%300;
					        }
					      }
					      if(vse >= 200) {
					        if (vse==200) {
					          printf("duzentos ");
					          vse = vse%200;
					        }else{
					          printf("duzentos ");
					          vse = vse%200;
					        }
					      }
					      if(vse >= 100) {
					        if (vse==100) {
					          printf("cem ");
					          vse = vse%100;
					        }else{
					          printf("cento ");
					          vse = vse%100;
					        }
					      }
					    }
						//Dezena
					    if (vse >= 10){
					      if (verifica2 == 1 && verifica3!=1 && verifica4 !=1) {
					        printf("mil e ");
					      }
					      if (verifica3 == 1 && verifica4 != 1) {
					        printf("mil ");
					      }
					      if (verifica4 == 1) {
					        printf("e ");
					      }
					      verifica5 = 1;
					
					      if(vse >= 90) {
					        if (vse==90) {
					          printf("noventa ");
					          vse = vse%90;
					        }else{
					          printf("noventa ");
					          vse = vse%90;
					        }
					      }
					      if(vse >= 80) {
					        if (vse==80) {
					          printf("oitenta ");
					          vse = vse%80;
					        }else{
					          printf("oitenta ");
					          vse = vse%80;
					        }
					      }
					      if(vse >= 70) {
					        if (vse==70) {
					          printf("setenta ");
					          vse = vse%70;
					        }else{
					          printf("setenta ");
					          vse = vse%70;
					        }
					      }
					      if(vse >= 60) {
					        if (vse==60) {
					          printf("sessenta ");
					          vse = vse%60;
					        }else{
					          printf("sessenta ");
					          vse = vse%60;
					        }
					      }
					      if(vse >= 50) {
					        if (vse==50) {
					          printf("cinquenta ");
					          vse = vse%50;
					        }else{
					          printf("cinquenta ");
					          vse = vse%50;
					        }
					      }
					      if(vse >= 40) {
					        if (vse==40) {
					          printf("quarenta ");
					          vse = vse%40;
					        }else{
					          printf("quarenta ");
					          vse = vse%40;
					        }
					      }
					      if(vse >= 30) {
					        if (vse==30) {
					          printf("trinta ");
					          vse = vse%30;
					        }else{
					          printf("trinta ");
					          vse = vse%30;
					        }
					      }
					      if(vse >= 20) {
					        if (vse==20) {
					          printf("vinte ");
					          vse = vse%20;
					        }else{
					          printf("vinte ");
					          vse = vse%20;
					        }
					      }
					      if(vse == 19) {
					        printf("dezenove ");
					        vse = vse%19;
					      }
					      if(vse == 18) {
					        printf("dezoito ");
					        vse = vse%18;
					      }
					      if(vse == 17) {
					        printf("dezessete ");
					        vse = vse%17;
					      }
					      if(vse == 16) {
					        printf("dezesseis ");
					        vse = vse%16;
					      }
					      if(vse == 15) {
					        printf("quinze ");
					        vse = vse%15;
					      }
					      if(vse == 14) {
					        printf("quatorze ");
					        vse = vse%14;
					      }
					      if(vse == 13) {
					        printf("treze ");
					        vse = vse%13;
					      }
					      if(vse == 12) {
					        printf("doze ");
					        vse = vse%12;
					      }
					      if(vse == 11) {
					        printf("onze ");
					        vse = vse%11;
					      }
					      if(vse == 10) {
					        printf("dez ");
					        vse = vse%10;
					      }
					    }
						//Unidade
					    if (vse >= 1) {
					      if (verifica2 == 1 && verifica3!=4 && verifica4 !=1 && verifica5 != 1) {
					        printf("mil e ");
					      }
					      if (verifica5 == 1) {
					        printf("e ");
					      }
					      if(vse == 1) {
					        printf("um ");
					      }
					
					      if(vse == 2) {
					        printf("dois ");
					      }
					      if(vse == 3) {
					        printf("tres ");
					      }
					      if(vse == 4) {
					        printf("quatro ");
					      }
					      if(vse == 5) {
					        printf("cinco ");
					      }
					      if(vse == 6) {
					        printf("seis ");
					      }
					      if(vse == 7) {
					        printf("sete ");
					      }
					      if(vse == 8) {
					        printf("oito ");
					      }
					      if(vse == 9) {
					        printf("nove ");
					      }
					    }
					}
					    printf("reais \n");
							system("\npause");
							break;
						//Valor do Saldo Existente no Caixa
						case 2:
							vtc = ((qced450 * 450) + (qced250 * 250) + (qced50 * 50) + (qced20 * 20) + (qced10 * 10) + (qced5 * 5) + (qced2 * 2) + (qced1 * 1));
							printf("\nO valor do saldo neste caixa eh: %iR$ ", vtc);
								vse = vtc;
                        if(vse <= 0){
						printf("zero ");
					}else{
						//Milhar
					    if (vse >= 100000) {
					      verifica1 = 1;
					      if(vse >= 200000) {
					        if (vse==200000) {
					          printf("duzentos mil ");
					          vse = vse%200000;
					        }else{
					          printf("duzentos ");
					          vse = vse%200000;
					        }
					      }
					      if (vse >= 100000) {
					        if (vse== 100000) {
					          printf("cem mil ");
					          vse = vse%100000;
					        }else if (vse>= 100000 && ((vse%100000)< 999)) {
					          printf("cem ");
					          vse = vse%100000;
					        } else {
					          printf("cento ");
					          vse = vse%100000;
					        }
					      }
					    }
					
					    if (vse >= 10000) {
					      verifica2 = 1;
					      if (verifica1 == 1) { //verifica se passou pela contagem do primeiro while, se sim, deve ser aplicado esse print
					        printf(" e ");
					      }
					      if(vse >= 90000) {
					        if (vse== 90000) {
					          printf("noventa mil ");
					          vse = vse%90000;
					        }else{
					          printf("noventa ");
					          vse = vse%90000;
					        }
					      }
					      if(vse >= 80000) {
					        if (vse== 80000) {
					          printf("oitenta mil ");
					          vse = vse%80000;
					        }else{
					          printf("oitenta ");
					          vse = vse%80000;
					        }
					      }
					        if(vse >= 70000) {
					        if (vse==70000) {
					          printf("setenta mil ");
					          vse = vse%70000;
					        }else{
					          printf("setenta ");
					          vse = vse%70000;
					        }
					      }
					      if(vse >= 60000) {
					        if (vse==60000) {
					          printf("sessenta mil ");
					          vse = vse%60000;
					        }else{
					          printf("sessenta ");
					          vse = vse%60000;
					        }
					      }
					      if(vse >= 50000) {
					        if (vse==50000) {
					          printf("cinquenta mil ");
					          vse = vse%50000;
					        }else{
					          printf("cinquenta ");
					          vse = vse%50000;
					        }
					      }
					      if(vse >= 40000) {
					        if (vse==40000) {
					          printf("quarenta mil ");
					          vse = vse%40000;
					        }else{
					          printf("quarenta ");
					          vse = vse%40000;
					        }
					      }
					      if(vse >= 30000) {
					        if (vse==30000) {
					          printf("trinta mil ");
					          vse = vse%30000;
					        }else{
					          printf("trinta ");
					          vse = vse%30000;
					        }
					      }
					      if(vse >= 20000) {
					        if (vse==20000) {
					          printf("vinte mil ");
					          vse = vse%20000;
					        }else{
					          printf("vinte ");
					          vse = vse%20000;
					        }
					      }
					      if(vse == 19000) {
					        printf("dezenove ");
					        vse = vse%19000;
					      }
					      if(vse == 18000) {
					        printf("dezoito ");
					        vse = vse%18;
					      }
					      if(vse == 17000) {
					        printf("dezessete ");
					        vse = vse%17000;
					      }
					      if(vse == 16000) {
					        printf("dezesseis ");
					        vse = vse%16000;
					      }
					      if(vse == 15000) {
					        printf("quinze ");
					        vse = vse%15000;
					      }
					      if(vse == 14000) {
					        printf("quatorze ");
					        vse = vse%14000;
					      }
					      if(vse == 13000) {
					        printf("treze ");
					        vse = vse%13000;
					      }
					      if(vse == 12000) {
					        printf("doze ");
					        vse = vse%12000;
					      }
					      if(vse == 11000) {
					        printf("onze ");
					        vse = vse%11000;
					      }
					      if(vse >= 10000) {
					        if (vse==10000) {
					          printf("dez mil ");
					          vse = vse%10000;
					        }else{
					          printf("dez ");
					          vse = vse%10000;
					        }
					      }
					    }
					
					    if (vse >= 1000) {
					      if (verifica2==1) {
					        printf("e ");
					      }
					      verifica3 = 1;
					      if(vse >= 9000) {
					        if (vse==9000) {
					          printf("nove mil ");
					          vse = vse%9000;
					        }else{
					          printf("nove ");
					          vse = vse%9000;
					        }
					      }
					      if(vse >= 8000) {
					        if (vse==8000) {
					          printf("oito mil ");
					          vse = vse%8000;
					        }else{
					          printf("oito ");
					          vse = vse%8000;
					        }
					      }
					      if(vse >= 7000) {
					        if (vse==7000) {
					          printf("sete mil ");
					          vse = vse%7000;
					        }else{
					          printf("sete ");
					          vse = vse%7000;
					        }
					      }
					      if(vse >= 6000) {
					        if (vse==6000) {
					          printf("seis mil ");
					          vse = vse%6000;
					        }else{
					          printf("seis ");
					          vse = vse%6000;
					        }
					      }
					      if(vse >= 5000) {
					        if (vse==5000) {
					          printf("cinco mil ");
					          vse = vse%5000;
					        }else{
					          printf("cinco ");
					          vse = vse%5000;
					        }
					      }
					      if(vse >= 4000) {
					        if (vse==4000) {
					          printf("quatro mil ");
					          vse = vse%4000;
					        }else{
					          printf("quatro ");
					          vse = vse%4000;
					        }
					      }
					      if(vse >= 3000) {
					        if (vse==3000) {
					          printf("tres mil ");
					          vse = vse%3000;
					        }else{
					          printf("tres ");
					          vse = vse%3000;
					        }
					      }
					      if(vse >= 2000) {
					        if (vse==2000) {
					          printf("dois mil ");
					          vse = vse%2000;
					        }else{
					          printf("dois ");
					          vse = vse%2000;
					        }
					      }
					      if(vse >= 1000) {
					        if (vse==1000 && verifica2 != 1 ) {
					          printf("mil ");
					          vse = vse%1000;
					        }else{
					          printf("um ");
					          vse = vse%1000;
					        }
					      }
					    }
						//Centena
					    if (vse >= 100) {
					      if (verifica1 == 1 && verifica2 != 1) {
					        printf("mil ");
					      }else if (verifica2 == 1) {
					        printf("mil ");
					      }else if (verifica3==1 && verifica2!=1) {
					        printf("mil ");
					      }
					      verifica4 = 1;
					      if(vse >= 900) {
					        if (vse==900) {
					          printf("novecentos ");
					          vse = vse%900;
					        }else{
					          printf("novecentos ");
					          vse = vse%900;
					        }
					      }
					      if(vse >= 800) {
					        if (vse==800) {
					          printf("oitocentos ");
					          vse = vse%800;
					        }else{
					          printf("oitocentos ");
					          vse = vse%800;
					        }
					      }
					      if(vse >= 700) {
					        if (vse==700) {
					          printf("setecentos ");
					          vse = vse%700;
					        }else{
					          printf("setecentos ");
					          vse = vse%700;
					        }
					      }
					      if(vse >= 600) {
					        if (vse==600) {
					          printf("seiscentos ");
					          vse = vse%600;
					        }else{
					          printf("seiscentos ");
					          vse = vse%600;
					        }
					      }
					      if(vse >= 500) {
					        if (vse==500) {
					          printf("quinhentos ");
					          vse = vse%500;
					        }else{
					          printf("quinhentos ");
					          vse = vse%500;
					        }
					      }
					      if(vse >= 400) {
					        if (vse==400) {
					          printf("quatrocentos ");
					          vse = vse%400;
					        }else{
					          printf("quatrocentos ");
					          vse = vse%400;
					        }
					      }
					      if(vse >= 300) {
					        if (vse==300) {
					          printf("trezentos ");
					          vse = vse%300;
					        }else{
					          printf("trezentos ");
					          vse = vse%300;
					        }
					      }
					      if(vse >= 200) {
					        if (vse==200) {
					          printf("duzentos ");
					          vse = vse%200;
					        }else{
					          printf("duzentos ");
					          vse = vse%200;
					        }
					      }
					      if(vse >= 100) {
					        if (vse==100) {
					          printf("cem ");
					          vse = vse%100;
					        }else{
					          printf("cento ");
					          vse = vse%100;
					        }
					      }
					    }
						//Dezena
					    if (vse >= 10){
					      if (verifica2 == 1 && verifica3!=1 && verifica4 !=1) {
					        printf("mil e ");
					      }
					      if (verifica3 == 1 && verifica4 != 1) {
					        printf("mil ");
					      }
					      if (verifica4 == 1) {
					        printf("e ");
					      }
					      verifica5 = 1;
					
					      if(vse >= 90) {
					        if (vse==90) {
					          printf("noventa ");
					          vse = vse%90;
					        }else{
					          printf("noventa ");
					          vse = vse%90;
					        }
					      }
					      if(vse >= 80) {
					        if (vse==80) {
					          printf("oitenta ");
					          vse = vse%80;
					        }else{
					          printf("oitenta ");
					          vse = vse%80;
					        }
					      }
					      if(vse >= 70) {
					        if (vse==70) {
					          printf("setenta ");
					          vse = vse%70;
					        }else{
					          printf("setenta ");
					          vse = vse%70;
					        }
					      }
					      if(vse >= 60) {
					        if (vse==60) {
					          printf("sessenta ");
					          vse = vse%60;
					        }else{
					          printf("sessenta ");
					          vse = vse%60;
					        }
					      }
					      if(vse >= 50) {
					        if (vse==50) {
					          printf("cinquenta ");
					          vse = vse%50;
					        }else{
					          printf("cinquenta ");
					          vse = vse%50;
					        }
					      }
					      if(vse >= 40) {
					        if (vse==40) {
					          printf("quarenta ");
					          vse = vse%40;
					        }else{
					          printf("quarenta ");
					          vse = vse%40;
					        }
					      }
					      if(vse >= 30) {
					        if (vse==30) {
					          printf("trinta ");
					          vse = vse%30;
					        }else{
					          printf("trinta ");
					          vse = vse%30;
					        }
					      }
					      if(vse >= 20) {
					        if (vse==20) {
					          printf("vinte ");
					          vse = vse%20;
					        }else{
					          printf("vinte ");
					          vse = vse%20;
					        }
					      }
					      if(vse == 19) {
					        printf("dezenove ");
					        vse = vse%19;
					      }
					      if(vse == 18) {
					        printf("dezoito ");
					        vse = vse%18;
					      }
					      if(vse == 17) {
					        printf("dezessete ");
					        vse = vse%17;
					      }
					      if(vse == 16) {
					        printf("dezesseis ");
					        vse = vse%16;
					      }
					      if(vse == 15) {
					        printf("quinze ");
					        vse = vse%15;
					      }
					      if(vse == 14) {
					        printf("quatorze ");
					        vse = vse%14;
					      }
					      if(vse == 13) {
					        printf("treze ");
					        vse = vse%13;
					      }
					      if(vse == 12) {
					        printf("doze ");
					        vse = vse%12;
					      }
					      if(vse == 11) {
					        printf("onze ");
					        vse = vse%11;
					      }
					      if(vse == 10) {
					        printf("dez ");
					        vse = vse%10;
					      }
					    }
						//Unidade
					    if (vse >= 1) {
					      if (verifica2 == 1 && verifica3!=4 && verifica4 !=1 && verifica5 != 1) {
					        printf("mil e ");
					      }
					      if (verifica5 == 1) {
					        printf("e ");
					      }
					      if(vse == 1) {
					        printf("um ");
					      }
					
					      if(vse == 2) {
					        printf("dois ");
					      }
					      if(vse == 3) {
					        printf("tres ");
					      }
					      if(vse == 4) {
					        printf("quatro ");
					      }
					      if(vse == 5) {
					        printf("cinco ");
					      }
					      if(vse == 6) {
					        printf("seis ");
					      }
					      if(vse == 7) {
					        printf("sete ");
					      }
					      if(vse == 8) {
					        printf("oito ");
					      }
					      if(vse == 9) {
					        printf("nove ");
					      }
					    }
					}
					    printf("reais \n");
							system("\npause");
							break;
						//Quantidade de cedulas no Caixa
						case 3:
							printf("\nA quantidade de cedulas neste caixa eh: %i\n", qtdced);
							printf("\n\n%i - Cedulas de 450", qced450);
							printf("\n\n%i - Cedulas de 250", qced250);
							printf("\n\n%i - Cedulas de 50", qced50);
							printf("\n\n%i - Cedulas de 20", qced20);
							printf("\n\n%i - Cedulas de 10", qced10);
							printf("\n\n%i - Cedulas de 5", qced5);
							printf("\n\n%i - Cedulas de 2", qced2);
							printf("\n\n%i - Cedulas de 1\n", qced1);
							system("\npause");
							break;
						//Abastecer o Caixa			
						case 4:
							printf("\nVoce escolheu a opcao - ABASTECER CAIXA\n");
							system("pause");
							system("cls");
						do{	
							printf("\nMenu Abastecer Caixa");
							printf("\n\n(450) - Cedulas de 450");
							printf("\n\n(250) - Cedulas de 250");
							printf("\n\n(50) - Cedulas de 50");
							printf("\n\n(20) - Cedulas de 20");
							printf("\n\n(10) - Cedulas de 10");
							printf("\n\n(5) - Cedulas de 5");
							printf("\n\n(2) - Cedulas de 2");
							printf("\n\n(1) - Cedulas de 1");
							printf("\n\n(0) - Voltar ao Menu Gerente");
							printf("\n\nDigite a opcao desejada: ");
							scanf("%i", &opma);
							
							switch(opma){
								system("pause");
								system("cls");
								//Para abastecer as cedulas de 450 reais
								case 450:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 100\n\n",qced450);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced450 == 100){
										printf("\n\nNao ha mais capacidade para notas de 450, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 100){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 100\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced450 = qced450 + nab;
										while(qced450 > 100){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced450 = qced450 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced450 = qced450 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced450);		
										system("pause");
										system("cls");	
									}
									break;	
								//Para abastecer as cedulas de 250 reais	
								case 250:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 200\n\n",qced250);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced250 == 200){
										printf("\n\nNao ha mais capacidade para notas de 250, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 200){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 200\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced250 = qced250 + nab;
										while(qced250 > 250){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced250 = qced250 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced250 = qced250 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced250);		
										system("pause");
										system("cls");	
									}
									break;		
								//Para abastecer as cedulas de 50 reais	
								case 50:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 400\n\n",qced50);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced50 == 400){
										printf("\n\nNao ha mais capacidade para notas de 50, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 400){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 400\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced50 = qced50 + nab;
										while(qced50 > 400){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced50 = qced50 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced50 = qced50 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced50);		
										system("pause");
										system("cls");	
									}	
									break;	
								//Para abastecer as cedulas de 20 reais	
								case 20:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 800\n\n",qced20);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced20 == 800){
										printf("\n\nNao ha mais capacidade para notas de 20, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 800){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 800\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced20 = qced20 + nab;
										while(qced20 > 800){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced20 = qced20 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced20 = qced20 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced20);		
										system("pause");
										system("cls");	
									}	
									break;	
								//Para abastecer as cedulas de 10 reais	
								case 10:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 1600\n\n",qced10);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced10 == 1600){
										printf("\n\nNao ha mais capacidade para notas de 10, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 1600){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 1600\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced10 = qced10 + nab;
										while(qced10 > 1600){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced10 = qced10 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced10 = qced10 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced10);		
										system("pause");
										system("cls");	
									}	
									break;		
								//Para abastecer as cedulas de 5 reais	
								case 5:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 3200\n\n",qced5);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced450 == 3200){
										printf("\n\nNao ha mais capacidade para notas de 5, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 3200){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 3200\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced5 = qced5 + nab;
										while(qced5 > 3200){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced5 = qced5 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced5 = qced5 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced5);		
										system("pause");
										system("cls");	
									}
									break;		
								//Para abastecer as cedulas de 2 reais	
								case 2:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 6400\n\n",qced2);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced2 == 6400){
										printf("\n\nNao ha mais capacidade para notas de 2, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 6400){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 6400\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced2 = qced2 + nab;
										while(qced2 > 6400){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced2 = qced2 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced2 = qced2 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced2);		
										system("pause");
										system("cls");	
									}	
									break;	
								//Para abastecer as cedulas de 1 real	
								case 1:
									printf("\n\nA quantidade de cedulas atual eh de: %i, e o limite eh 12800\n\n",qced1);
									printf("\nInforme a quantia de notas para abastecer: ");
									scanf("%i", &nab);
									
									if(qced1 == 12800){
										printf("\n\nNao ha mais capacidade para notas de 1, o limite foi alcancado!");
									}else{
										while(nab <= 0 || nab > 12800){
											printf("\nQuantidade de notas invalidas! A quantidade deve estar entre 1 e 100\n");
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
										}
										qced1 = qced1 + nab;
										while(qced1 > 12800){
											printf("\n\nValor ultrapassou o limite, insira novamente!\n\n");
											qced1 = qced1 - nab;
											printf("\nInforme a quantia de notas para abastecer: ");
											scanf("%i", &nab);
											qced1 = qced1 + nab;
										}
										qtdced = qtdced + nab;
										printf("A nova quantidade de cedulas eh: %i \n\n",qced1);		
										system("pause");
										system("cls");	
									}	
									break;	
								//Encerrar o Menu de Abastecimento	
								case 0:
									break;
								//Caso o usuario digite uma opcao nao listada no menu de abastecimento	
								default:printf("\nOpcao Invalida!\n");
										system("pause");
										system("cls");
										break;
							}
					}while (opma != 0);
							//Encerrar o Menu Gerente
							case 5:
								break;
							//Caso o usuario digite uma opcao nao listada no menu gerente	
							default:printf("\nOpcao Invalida!\n");
									system("pause");
									break;
					}

			}while(opmg != 5);
						break;
			}
		}
	}while(opmp != 3);
	printf("\nDesenvolvido por: \nGabriel Faga Monteiro (RGM: 43560)\nRomeu Couto Gontijo Batista (RGM: 43577)\nSthefany Conceicao Duquini (RGM: 43578)");
}
