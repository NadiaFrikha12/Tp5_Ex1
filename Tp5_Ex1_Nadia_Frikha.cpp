#include<stdio.h>
#include<string.h>
int main(){
	char TXT[201];
	int L; //longueur de la chaine
	int nb=0; //nombre d'occurence de 'e'
	
	//lire une chaine
	printf("donner une ligne de text ne depassant pas 200 caracteres \n");
	gets(TXT);
	
	//afficher la longueur de la chaine 
	L=strlen(TXT);
	printf("la longueur L de la chaine est:%d \n",L);
	
	//afficher le nombre d'occurence de 'e'
	for(int i=0;i<strlen(TXT);i++){
		if (TXT[i]=='e') {
			nb++ ;
		}
	}
	printf("le nombre d'occurence de 'e': %d \n",nb);
	
	// afficher la chaine 
	puts(TXT);
	
	//afficher la phrase a rebours
	printf("la phrase a rebours est: %s \n",strrev(TXT));
	
	return 0;
}
