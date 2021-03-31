#include<stdio.h>
#include<string.h>

void main()
{
	char message[100], encrypt[100], decrypt[100];
	int key, i;
	printf("Enter the message which needs to be encrypted:");
	scanf("%s", message);
	printf("Enter the key by which you want to shift the text:");
	scanf("%d",&key);
	
	for(i=0;message[i]!='\0';i++)
	{
		if(message[i]>='a' && message[i]<='z')
		{
			encrypt[i]=message[i]+key;
			if(encrypt[i]>'z')
			{
				encrypt[i]=encrypt[i]-26;
			}
		}
		else if(message[i]>='A' && message[i]<='Z')
		{
			encrypt[i]=message[i]+key;
			if(encrypt[i]>'Z')
			{
				encrypt[i]=encrypt[i]-26;
			}
		}
	}
	printf("Encrypted message is: %s\n", encrypt);
	for(i=0;encrypt[i]!='\0';i++)
	{
		if(encrypt[i]>='a' && encrypt[i]<='z')
		{
			decrypt[i]= encrypt[i]-key;
			if(decrypt[i]<'a')
			{	
				decrypt[i] = decrypt[i]+26;	
			}
		}
		else if(encrypt[i]>='A' && encrypt[i]<='Z')
		{
			decrypt[i]= encrypt[i]-key;
			if(decrypt[i]<'A')
			{
				decrypt[i]= decrypt[i]+26;
			}
		}
	}
	printf("Decrypted message is: %s\n",decrypt);
}

