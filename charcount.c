//
//  charcount.c
//  charcount
//
//  Created by Pranav on 12/14/14.
//  Copyright (c) 2014 Cooper Union. All rights reserved.
//

#include <stdio.h>
#define ARMAX 512
int main()
	{
	int upper[26],lower[26],digits[10],other,n;
	char line[ARMAX],*pc;
	for(n=0;n<26;n++)
		{
		upper[n]=0;
		lower[n]=0;
		if(n<10)
			digits[n]=0;
		}
	other=0;
	while(fgets(line,sizeof(line),stdin)!=NULL)
		{
		printf("%s",line);
		for(pc=line;*pc != '\0';pc++)
			{
			if(*pc >= 'A' && *pc <= 'Z')
				{
				//upper case
				upper[*pc - 'A']++;
				continue;
				}
			if(*pc >= 'a' && *pc <= 'z')
				{
				lower[*pc - 'a']++;
				continue;
				}
			if(*pc >= '0' && *pc <= '9')
				{
				digits[*pc - '0']++;
				continue;
				}
			other++;
			}
        //printf("%c",'A'+1);
        //printf("%d",upper[1]);
            for(n=0;n<26;n++)
                printf("%c = %d\n",('A'+n),upper[n]);
            for(n=0;n<26;n++)
                printf("%c = %d\n",'a'+n,lower[n]);
            for(n=0;n<10;n++)
                printf("%c = %d\n",'0'+n,digits[n]);
            printf("Other chars = %d\n",other);
		}
	}
