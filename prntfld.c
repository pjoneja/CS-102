#include <stdio.h>
#define BIGENUF 512
void prntfld(char line[],int fldno);
int numflds(char line[]);
int findfld(char line[],int fldno);
main(int argc,char *argv[])
	{
	char line[BIGENUF],c;
	int hop;
	if(argc != 2)
		{
		printf("ERROR: usage prntfld fldnum\n");
		exit(0);
		}
	while(fgets(line,sizeof(line),stdin)!=NULL)
		{
		printf("%s",line);
		//prntfld(line,atoi(argv[1]));
		for(hop=1;hop < numflds(line);hop++)
			{
			printf("%2d) ",hop);
			prntfld(line,hop);
			printf("\n");
			}
		printf("\n");
		}
	}
void prntfld(char line[],int fldno)
	{
	int n;
	if(fldno<1 || fldno >numflds(line))
		return;
	n=findfld(line,fldno);
	for(;line[n]!=';' && line[n]!='\n';n++)
		putchar(line[n]);
	return;
	}
int numflds(char line[])
	{
	int n;
	int amt;
	for(n=0,amt=1;n<strlen(line);n++)
		{
		if(line[n]==';'||line[n]=='\n')
			amt++;
		}
	return amt;
	}
int findfld(char line[],int fldno)
	{
	int fl;
	int amt;
	for(fl=1,amt=0;fl != fldno;amt++)
		{
		if(line[amt]!=';'&& line[amt]!='\n')
			continue;
		else
			{
			fl++;
			}
		}
	return amt;
	}
			
	
		
