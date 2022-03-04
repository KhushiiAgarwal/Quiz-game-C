#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int countr=0,r,i;
    char choice;

    //INTRODUCTION- Sanskruti
    printf("\t\t\t  C PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t    WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t    THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t    PLAY QUIZZES ");
    printf("\n\t\t\t      and ");
    printf("\n\t\t\t    EARN POINTS ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to  START the game");
    printf("\n\t\t > Press U for SPORTS QUIZ             ");
    printf("\n\t\t > Press I for ENTERTAINMENT QUIZ             ");
    printf("\n\t\t > Press H for HELP             ");
    printf("\n\t\t > Press E to  EXIT             ");
    printf("\n\t\t________________________________________\n\n");
    choice=toupper(getch());
    //MAIN MENU- Khushi

    if (choice=='I')
	{
	goto EntertainmentQuiz;
	}

    //HELP- Sanskruti
    printf("\n\n                               HELP");
    printf("\n ------------------  Welcome to C Program Quiz Game --------------------------");
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n\t  > Game consists of 2 categories: ");
    printf("\n\t\t  1. Sports Quiz");
    printf("\n\t\t  2. Entertainment Quiz ");
    printf("\n\t  > Each category comprises 3 rounds: ");
    printf("\n\t\t  1. Easy ");
    printf("\n\t\t  2. Medium");
    printf("\n\t\t  3. Difficult");
    printf("\n\t  > Each round will have 10 questions.");
    printf("\n\t  > For each question you will be given 4 options and you have to press A, B ,C or D for the right option.");
    printf("\n\t  > 10 points will be awarded for each right answer.");
    printf("\n\t  > No negative points for wrong answer.");
    printf("\n\t  > Final score will be available after each round.");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!!!!!");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press P for the final score");
    printf("\n\t\t > Press Y to  START the game");
    printf("\n\t\t > Press Z to  return  to the MAIN MENU ");
    //MENU- Khushi
    //Entertainment and sports quiz easy medium and hard options

    EntertainmentQuiz:

    //Entertainment Questions
    //Easy

     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
	{
	case 1:
		printf("\n\nFictional Gadget `ANYWHERE DOOR` is seen in which cartoon ?\n");
		printf("\n\nA.Shinchan\t\tB.Mighty Raju \n\nC.Ninja Hathori\t\tD.Doraemon\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Doraemon");getch();
		       break;}

	case 2:
		printf("\n\n\nWhat`s the full form of `DDLJ` , one of the hit movie of Shahrukh Khan?\n");
		printf("\n\nA.Dil Diya Love Jo\t\tB.Dilwali Doll  Le Jayenge\n\nC.Dilwali Dulhania Le Jayenge \t\tD.Delhi Dehradun Le Jayenge\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is c.Dilwali Dulhania Le Jayenge ");getch();
		       break;
		       }

        case 3:
		printf("\n\n\nWho killed  `Bahubali`? \n");
		printf("\n\nA.Bhallaldev\t\tB.Badshah\n\nC.Kattappa\t\tD.Mahendra\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kattappa");getch();
		       break;}

        case 4:
		printf("\n\n\nThor  uses which of the following weapon?\n");
		printf("\n\nA.Gun\t\tB.Hammer\n\nC.Axe\t\tD.Cannon\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.Hammer");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nMr. Bean have which colour of car ?\n");
		printf("\n\nA.Orange\t\tB.Blue\n\nC.Green\t\t\tccD.Black\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Green");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nWhich sweet helps Chota Bheem to gain instant energy?\n");
		printf("\n\nA.Laddoo \t\tB.Gulabjamun\n\nC.Rasmalai\t\tD.Pedha\n");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Laddoo");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWho wants to eat Jerry?\n");
		printf("\n\nA.Oggy\t\tB.Tom\n\nC.Krish\t\tD.Raju\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Tom");getch();
		       break;}

        case 8:
		printf("\n\n\n`Super 30` movie is based on which entrance exam ?\n");
		printf("\n\nA.UPSC\t\tB.NEET\n\nC.GATE\t\tD.IIT-JEE\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.IIT-JEE");getch();
		       break;}

        case 9:
		printf("\n\n\nWhich organization is featured in movie `Mission Mangal`?\n");
		printf("\n\nA.DRDO\t\tB.ISRO\n\nC.IUCAA\t\tD.TIFR\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.ISRO");getch();
		       break;}

        case 10:
		printf("\n\n\n` give me some sunshine , give me some rain ` , is song of which movie?\n");
		printf("\n\nA.3 Idiots\t\tB.Mission Mangal\n\nC.Super 30\t\tD.Swades\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.3 Idiots");getch();
		       break;}

        }
    }

    //Medium

    for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
	{
	case 1:
		printf("\n\n`Lungi Dance` song is featured in ________\n");
		printf("\n\nA.Chennai Express\t\tB.Pushpa\n\nC.Chennai vs China \t\tD.Robot\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Chennai Express");getch();
		       break;}

	case 2:
		printf("\n\n\nWhich actress is in movie `Phantom` ?\n");
		printf("\n\nA.Ileana D'Cruz\t\tB.Katrina Kaif\n\nC.Alia Bhat\t\tD.Sonakshi Sinha\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Katrina Kaif");getch();
		       break;
		       }

        case 3:
		printf("\n\n\nFull form of TASC in web series `THE FAMILY MAN`? \n");
		printf("\n\nA.Threat Analysis & Surveillence Call\t\tB.Threat Anatomy & Surveillence Call\n\nC.Threat Analysis & Surveillence Cell\t\tD.Threat Analysis & Stockmarket Cell\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Threat Analysis & Surveillence Call");getch();
		       break;}

        case 4:
		printf("\n\n\nWhich personality is covered in  web series `SCAM 1992`?\n");
		printf("\n\nA.Nirav Modi \t\tB.Harshad Mehta\n\nC.Vijay Malya\t\tD.Rakesh Wadhavan\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.Harshad Mehta");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nWhich Indian Soldier is featured in movie `SHERSHAH`?\n");
		printf("\n\nA. Lt. Manoj Pandey\t\tB. Gr. Yogendra Yadav\n\nC. Cpt. Vikram Batra\t\tD. Maj. Rajesh Adhikari\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C. Cpt. Vikram Batra");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nReal character name of Amir Khan in 3 Idiots?\n");
		printf("\n\nA.Rancho\t\tB.Hoshiyar\n\nC.Raju\t\tD.Phunsuk Wangdu\n");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Phunsuk Wangdu");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nThe first heist in web series in the web  series money heist  was carried out at which place?\n");
		printf("\n\nA.Royal mint of Pen\t\tB.Royal mint of Spain\n\nC.Royal mint of Francel\t\tD.Royal mint of England\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Royal mint of Spain");getch();
		       break;}

        case 8:
		printf("\n\n\nTo whom did captain Steve Rogers handed over his shield ?\n");
		printf("\n\nA.Sam Wilson\t\tB.Bruce Banner\n\nC.Willson Chad\t\tD.President\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Sam Wilson");getch();
		       break;}

        case 9:
		printf("\n\n\nWhich actor played the role of spider man in the movie THE AMAZING SPIDER MAN?\n");
		printf("\n\nA.Andrew Garfield\t\tB.Bruce Wayne\n\nC.Chris Hemsworth\t\tD.Bruce Banner\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Andrew Garfield");getch();
		       break;}

        case 10:
		printf("\n\n\nHow many infinity stones exists in the movies of  Marval Studios`s cinamatic universal  films?\n");
		printf("\n\nA.Five\t\tB.Eight\n\nC.Six\t\tD.Seven\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Six");getch();
		       break;}

        }
    }

    return 0;
}
