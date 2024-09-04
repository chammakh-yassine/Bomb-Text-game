

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
 char TXT[201];
 char bomb;
 size_t size1,size2;
 int I,J,bo,y,ban;
 time_t Random_seed=time(NULL); // return time from unix period 

 srand(Random_seed); //to change the seed or rand() function this way we can have each time deffirent random number
  bomb= 'a'+rand()%26;
  // just a little cheat if you want to know the Bomb before play
 // printf("your bomb is %c\n",bomb;
 
 //now we start by taking the text from the player
 printf("enter your text please:\t");
 gets(TXT);
 size1 = strlen(TXT);//this is to restore the size of the text 
 printf("\nyour text is: \"%s\", be ready for the bomb\n",TXT);
 //we will use this loof to check our text and when we will find the bomb chracter we will bomb the player text at this point
 for(I=0;I<201;I++)
 {
 	if(I%2==0) printf(">"); // just some visual things lol
 	else printf(".");
 	//here the best part so if the bomb was in your text you will lose the rest of it
     if (TXT[I] == bomb){
	  TXT[I]='\0';
	  printf("\nBOOOOOOM");
	  break;}
	  
 }
 // calculating the percentage rest of your text. the bigger the better for you
 size2 = strlen(TXT);
 int score = (size1!=0)? size2*100/size1 : -100 ;
 	
 
 printf("\nooo ow the rest of your text is\n %s \n your score %i%%",TXT,score);
  return 0;
}
