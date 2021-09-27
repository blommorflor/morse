#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


main()
{
	int i, j;
	char m[29][6] = { {".-"}, {"-..."}, {"-.-."}, {"-.."},{ "."}, {"..-."},{"--."},{"...."},{".."},{".---"},{"-.-"},{".-.."},{"--"}
					,{"-."},{"--.--"},{"---"},{".--."},{"--.-"},{".-."},{"..."},{"-"},{"..-"},{"...-"},{".--"},{"-..-"},{"-.--"},{"--.."},{"//"}};
					
	char l[29] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
	
	int n;
	printf("No olvidar escribir siempre en mayusculas\n");
	printf("1-Traducir de texto a morse\n2-Traducir de morse a texto\n");
	scanf("%d",&n);
	getchar();
	if(n==1)
	{
		char texto [10000];
		printf("Escribe una oracion\n");
		getchar();
		gets(texto);
		
		for(i=0;i<29;i++)
		for(j=0;j<texto[i];j++)
	
		if (texto[i]==l[j])
		
		printf("%s", m[j]);
		
		getch();
		return 0;
		system("pause");
	}
	if(n==2)
	{
		char morse[30];
		printf("Escribe una oracion en morse\nNo intrudicir un espacio hasta finalizar la oracion\nPara intrudicir un espacio utilice ( / )\n");	
		
		scanf("%s", &morse);
		while(morse!=" ")
		{			
			for(i=0;i<29;i++)
			{
				for(j=0;j<29;j++)
				{
					if(morse==m[i])
					{
						printf("A");
					}
				}
			}
		}
	}
	
}
