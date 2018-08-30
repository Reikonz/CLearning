/***************************/
/******Phuong, Dang*********/
/******CECS 121-02**********/
/********HomeWork#4*********/
/********7/14/2014**********/
/***************************/
#include<stdio.h>
#include<time.h>
#include<strings.h>
void selectWord(char[][13],int);
void drawMan(int);
void checkWord(char,char[][13],int,char[],char[],int *,int *,int *);

main()
{
	int option, index, i, score=0;
	char guess;
	char length[65], word[65];
    char list[65][13]={{"sailboat"},{"school"}, {"rug"}, {"chalk"}, {"tusk"},{"camera"}, {"pajamas"}, {"cello"}, {"cake"}, {"beehive"}, {"gate"}, {"swing"}, {"lighthouse"}, {"toe"}, {"newspaper"}, {"stingray"}, {"brain"}, {"french"}, {"purse"}, {"soda"}, {"money"}, {"dryer"}, {"scale"}, {"clam"}, {"knee"}, {"artist"}, {"stomach"}, {"ticket"}, {"face"}, {"tv"}, {"can"}, {"blowfish"}, {"popsicle"}, {"beaver"}, {"snowball"}, {"dollar"}, {"sprinkler"}, {"hair"}, {"bathroom"}, {"rain"}, {"skirt"}, {"beach"}, {"suitcase"}, {"garden"}, {"doormat"}, {"pretzel"}, {"watering"}, {"fur"}, {"birthday"}, {"fries"}, {"owl"}, {"chin"}, {"spool"}, {"mushroom"}, {"peach"}, {"pelican"}, {"pineapple"}, {"flagpole"}, {"doghouse"}, {"boot"}, {"flute"}, {"quilt"}, {"hook"}, {"rainbow"}, {"happy"}};

	do{
	 srand(time(NULL));
     index=rand()%65;
     int fails=0;
     int win = 0;
     //int correct=0;
     system("cls");
     printf("Main Menu\n1-New Game\n2-Score\n3-Quit\n");
     scanf("%d",&option);
     fflush(stdin);
     
     
     
     switch(option)
     {
     	case 1:
     		selectWord(list,index);
     		printf("\n");
     		system("pause");
     		for(i=0;i<strlen(list[index]);i++)
		{
			length[i]='-';
		}
     		do
     		{
				system("cls");
     			drawMan(fails);
     			printf("\nfails: %d", fails);
     			checkWord(guess,list,index,length,word,&fails,&score,&win);
     			if(win == strlen(list[index]))
				 {
     				break;
     			 }
     		}while(fails!=7);
     		if(fails==7)
     		{
     			system("cls");
     			printf("You Lose\nYour word was '%s'\n",list[index]);
     		}
     		else
     		{
     			system("cls");
     			printf("You Win!\nYour word was '%s'\n",list[index]);
     			
     		}
     		system("pause");
     		break;
     	case 2:
     		printf("Score: %d\n",score);
     		score=0;
     		system("pause");
     		system("cls");
     		break;
     	case 3:
     		return 0;
     		break;
     		
     	
	 }
	 }while(option!=3);
}

/*draw man*/
void drawMan(int fails)
{
	switch(fails)
	{
		case 0:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      \n");
	printf("\t\t\t|     \n");
	printf("\t\t\t|     \n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
	break;
		case 1:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      0\n");
	printf("\t\t\t|     \n");
	printf("\t\t\t|     \n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
	break;
		case 2:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      0\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|     \n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
	break;
		case 3:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      0\n");
	printf("\t\t\t|     /|\n");
	printf("\t\t\t|     \n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
	break;
		case 4:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      0\n");
	printf("\t\t\t|     /|\\\n");
	printf("\t\t\t|     \n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
	break;
		case 5:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      0\n");
	printf("\t\t\t|     /|\\\n");
	printf("\t\t\t|     /\n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
	break;
		case 6:
	printf("\t\t\t+------+\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      |\n");
	printf("\t\t\t|      0\n");
	printf("\t\t\t|     /|\\\n");
	printf("\t\t\t|     / \\\n");
    printf("\t\t\t|	      \n");
	printf("\t\t       /|\\ ");
}
}
	
	
/*check guess*/
void checkWord(char guess,char list[][13],int index,char length[],char word[],int *fails, int *score,int *win)
{
	int i,flag=0;
	strcpy(word,list[index]);
	
	/*print blanks and correct letters*/
	printf("\n%d letters\n",strlen(list[index]));
		for(i=0;i<strlen(list[index]);i++)
		{
		printf("%c",length[i]);
		}
	
	printf("\nEnter letter: ");
    scanf("%c",&guess);
   	fflush(stdin);
		
	/*replace blanks with correct letter*/
	for(i=0;i<strlen(list[index]);i++)
	{
		if(guess==word[i])
		{
			flag = 1;
			length[i]=guess;
			(*score)++;
			(*win)++;
		}
	}	
	if(flag == 0){
		(*fails)++;
		(*score)--;
	}
}

//select word
void selectWord(char list[][13],int index)
{
	int i;
	printf("\nYour word contains %d letters\n",strlen(list[index]));
	for(i=0;i<strlen(list[index]);i++)
	{
		printf("_ ");
	}
	printf("\n");
}
