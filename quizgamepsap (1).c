#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){

    int countr=0,r,i;
    char choice;
    int counter;

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

	game_entertainmentdifficult:
       counter=0;
        for ( i = 0; i <= 10; i++)
        {
            system("cls");
            r=i;
            switch(r)
            {
                case 1:
                printf("\n\nHow many oscar awards was won by 'Slumdog Millionare' movie?");
                printf("\n\nA. 5\t\tB. 7\n\nC. 9\t\tD. 8");
                if(toupper(getch())=='D')
                {
                    printf("\n\n Correct!!!  The correct answer is D. 8");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is D. 8");
                        getch();
                        //goto score;
                        break;

                    }
                case 2:
                printf("\n\n What is the name of the Skyscapper in Die Hard?");
                printf("\n\nA. Nakatomi Plaza\t\tB. Tanabata Plaza\n\nC. Hinadori Plaza \t\tD. Chinatown Plaza" );
                if(toupper(getch())=='A')
                {
                    printf("\n\n Correct!!!  The correct answer is A. Nakatomi Plaza");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is A. Nakatomi Plaza");
                        getch();
                        //goto score;
                        break;
                    }
                case 3:
                printf("\n\n What creature is aragog in Harry Potter?");
                printf("\n\nA. Hunstman spider\t\tB. Acromantula \n\nC. Tarantula \t\tD. Wolf spider ");
                if(toupper(getch())=='B')
                {
                    printf("\n\n Correct!!!  The correct answer is B. Acromantula");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is B. Acromantula");
                        getch();
                        //goto score;
                        break;

                    }
                case 4:
                printf("\n\n Which of them is not a founder of Hogwarts?");
                printf("\n\nA. Rowena Ravenclaw\t\tB. Godric Gryffindor\n\nC. Herena Hufflepuff\t\tD. Salazar Slytherin");
                if(toupper(getch())=='C')
                {
                    printf("\n\n Correct!!!  The correct answer is C. Herena Hufflepuff");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is C. Herena Hufflepuff");
                        getch();
                        //goto score;
                        break;

                    }
                case 5:
                printf("\n\n Gloomy Sunday's original version in written in which language?");
                printf("\n\nA. German\t\tB. Hungarian\n\nC. Spanish\t\tD. French");
                 if(toupper(getch())=='B')
                {
                    printf("\n\n Correct!!!  The correct answer is B. Hungarian");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is B. Hungarian");
                        getch();
                        //goto score;
                        break;

                    }
                case 6:
                printf("\n\nAishwarya Rai Bacchan was crowned as Miss World in which year?");
                printf("\n\nA. 1998\t\tB. 2000\n\nC. 1989\t\tD. 1994");
                if(toupper(getch())=='D')
                {
                    printf("\n\n Correct!!!  The correct answer is D. 1994");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is D. 1994");
                        getch();
                        //goto score;
                        break;

                    }
                case 7:
                printf("\n\n What was the last name of Rose in movie Titanic?");
                printf("\n\nA. Calvert\t\tB. Gatlin\n\nC. Adair\t\tD. Ashford");
                if(toupper(getch())=='A')
                {
                    printf("\n\n Correct!!!  The correct answer is A. Calvert");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is A. Calvert");
                        getch();
                        //goto score;
                        break;

                    }
                case 8:
                printf("\n\n On FRIENDS what was the name of Monica and Ross's grandmother who died?");
                printf("\n\nA. Ashley\t\tB. Alice\n\nC. Adele\t\tD. Althea");
                if(toupper(getch())=='D')
                {
                    printf("\n\n Correct!!!  The correct answer is D. Althea");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is D. Althea");
                        getch();
                        //goto score;
                        break;

                    }
                case 9:
                printf("\n\n How long did the Great Ninja War last in naruto?");
                printf("\n\nA. 2 days\t\tB. 1.5 days\n\nC. 2.5 days\t\t D. 3 days");
                if(toupper(getch())=='A')
                {
                    printf("\n\n Correct!!!  The correct answer is A. 2 days");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is A. 2 days");
                        getch();
                        //goto score;
                        break;

                    }
                case 10:
                printf("\n\n How many carat is the HEART OF THE OCEAN necklace from Titanic?");
                printf("\n\nA. 72 carat\t\tB. 36 carat\n\nC. 56 carat \t\tD. 24 carat");
                if(toupper(getch())=='C')
                {
                    printf("\n\n Correct!!!  The correct answer is C. 56 carat");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is C. 56 carat");
                        getch();
                        //goto score;
                        break;

                    }
            }
        }

	//Sports Quiz
	//Easy

     	for(i=1;i<=10;i++)
     	{system("cls");
     	r=i;

     	switch(r)
	{
	case 1:
		printf("\n\nWho was the first Indian to qualify for olympics?\n");
		printf("\n\nA.Shiny Abraham	\t\tB.PT Usha \n\nC.Karnam Malleshwari\t\tD.Jyotirmony Sikdar\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;
             }
		else
		       {printf("\n\nWrong!!! The correct answer is B.PT Usha");getch();
		       break;}

	case 2:
		printf("\n\n\nNeeraj Chopra is associated to which of the following game?\n");
		printf("\n\nA.Haptathlon\t\tB.Javelin Throw\n\nC.Tennis  \t\tD.Wrestling");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Javelin Throw ");getch();
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
		printf("\n\n\nThe first female wrestler to win a medal ay Olympics is\n");
		printf("\n\nA.Sakshi Malik\t\tB.Babita Kumari\n\nC.Vinesh Phogat\t\tD.Geeta Phogat\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.Geeta Phogat");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nWho is first Indian woman to win 2 Olympic medals?\n");
		printf("\n\nA.Saina Nehwal\t\tB.Mary Kom\n\nC.Sakshi Malik\t\tD)PV Sindhu\t\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.PV Sindhu");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nWhich team won maximum IPL titles?\n");
		printf("\n\nA.CSK \t\t\nB.KKR\nC.MI\t\tD.DD\n");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.MI");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nMirabai Chanu won silver medal in Olympics 2021 in which category?\n");
		printf("\n\nA.55Kg\t\tB.64Kg\n\nC.59Kg\t\tD.49Kg\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.49Kg");getch();
		       break;}

        case 8:
		printf("\n\n\nWho won India's first Olympic Medal in badminton?\n");
		printf("\n\nA.Prakash Padukone\t\tB.P Gopichand\n\nC.Saina Nehwal\t\tD.Kidambi Srikanth\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Saina Nehwal");getch();
		       break;}

        case 9:
		printf("\n\n\nIn which country headquarters of FIFA are located?\n");
		printf("\n\nA.Switzerland\t\tB.Spain\n\nC.France\t\tD.Netherlands \n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Switzerland");getch();
		       break;}

        case 10:
		printf("\n\n\nWho is first Indian to win 2 Paralympic medals?\n");
		printf("\n\nA.Deepa Malik\t\tB.Bhavina Patel\n\nC.Karamjyoti Dalal\t\tD.Avani Lekhara\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Avani Lekhara");getch();
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
		printf("\n\nWhich one of the following Cricketers has been declared by the ICC as 'Cricketer of the Twentieth Century ?\n");
		printf("\n\nA.Sachin Tendulkar\t\tB.Kapil Dev \n\nC.Rahul Dravid\t\tD.Anil Kumble\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kapil Dev");getch();
		       break;}

	case 2:
		printf("\n\n\nNehru trophy is related to which game?\n");
		printf("\n\nA.) Cricket\t\tB.Badminton\n\nC.Football\t\tD.Hockey\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Football ");getch();
		       break;
		       }

        case 3:
		printf("\n\n\n' Queen's berry rules ' is the name given to the rules in \n");
		printf("\n\nA.Cricket\t\tB.Tennis\n\nC.Hockey\t\tD.Boxing \n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Boxing");getch();
		       break;}

        case 4:
		printf("\n\n\nThe Indian football team made its first appearance at Olympics in \n");
		printf("\n\nA.1936\t\tB.1948\n\nC.1952\t\tD.1956\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.1948");getch();
		       break;
		       }

        case 5:
		printf("\n\n\nWhich is the only woman to have won the three Wimbledon titles in a row\n");
		printf("\n\nA.Mari Pearey\t\tB.Miton\n\nC.Sang Chan\t\t\tD.Steffi Graff\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.Steffi Graff");
		       getch();
		       break;
		       }

		case 6:
		printf("\n\n\nHow many times did Geet Sethi win the IBSF World Billiards title?\n");
		printf("\n\nA.2 \t\tB.3\n\nC.4\t\tD.5\n");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.3");
		       getch();
		       break;}

        case 7:
		printf("\n\n\nHow many Olympic medals has Usain Bolt won in his career?\n");
		printf("\n\nA.8\t\tB.9\n\nC.7\t\tD.10\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.8");getch();
		       break;}

        case 8:
		printf("\n\n\nWho was India's first One-day captain?\n");
		printf("\n\nA.Sunil Gavaskar\t\tB.Ajit Wadekar\n\nC.Kapil Dev\t\tD.Manoj Prabhakar\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Ajit Wadekar");getch();
		       break;}

        case 9:
		printf("\n\n\nSathiyan Gnanasekaran is associated with which sports?\n");
		printf("\n\nA.Tennis\t\tB.Boxing\n\nC.Badminton\t\tD.Table Tennis\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Table Tennis");getch();
		       break;}

        case 10:
		printf("\n\n\nWhich of the following International Tennis Tournaments is not held at the same venue each year?\n");
		printf("\n\nA. Davis Cup\t\tB.U.S. Open\n\nC.French Open\t\tD.Australian Open\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Davis Cup");getch();
		       break;}

        }
    }

	//Difficult

	game_sportsdifficult:
        counter=0;
        for ( i = 0; i <= 10; i++)
        {
            system("cls");
            r=i;
            switch(r)
            {
                case 1:
                printf("\n\n When and where were the first 'Oylmpic' games held?");
                printf("\n\nA. Athens(Greece),1896\t\tB. Paris(France),1900\n\nC. Beijing(China),1890\t\tD. Tokyo(Japan),1897");
                if(toupper(getch())=='A')
                {
                    printf("\n\n Correct!!!  The correct answer is A. Athens(Greece),1896");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is A. Athens(Greece),1896");
                        getch();
                        //goto score;
                        break;

                    }
                case 2:
                 printf("\n\n Which is the largest cricket stadium in the world?");
                printf("\n\nA. Melbourne Cricket Ground, Melbourne\t\tB. Eden Gardens, Kolkata \n\nC. Narendra Modi Stadium, Ahmedabad \t\tD. Perth Stadium,Perth" );
                if(toupper(getch())=='C')
                {
                    printf("\n\n Correct!!!  The correct answer is C. Narendra Modi Stadium, Ahmedabad");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is C. Narendra Modi Stadium, Ahmedabad");
                        getch();
                        //goto score;
                        break;
                    }
                case 3:
                printf("\n\n What was the official name of first cricket world cup?");
                printf("\n\nA. Coupe du Monde\t\tB. Prudential World Cup \n\nC. Australian treble \t\tD. Hosts triumph ");
                if(toupper(getch())=='B')
                {
                    printf("\n\n Correct!!!  The correct answer is B. Prudential World Cup");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is B. Prudential World Cup");
                        getch();
                        //goto score;
                        break;

                    }
                case 4:
                printf("\n\n Which country holds the record of most number of cricket world cup wins?");
                printf("\n\nA. India 7\t\tB. Australia 5\n\nC. England 4\t\tD. South Africa 5");
                if(toupper(getch())=='B')
                {
                    printf("\n\n Correct!!!  The correct answer is B. Australia 5");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is B. Australia 5");
                        getch();
                        //goto score;
                        break;

                    }
                case 5:
                printf("\n\n Ryder Cup is realted to which sports?");
                printf("\n\nA. Golf\t\tB. Chess\n\nC. Badminton\t\tD. Pole vaulting");
                if(toupper(getch())=='A')
                {
                    printf("\n\n Correct!!!  The correct answer is A. Golf");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is A. Golf");
                        getch();
                        //goto score;
                        break;

                    }
                case 6:
                printf("\n\n Where did the 30th Adriatic Pearl tournament took place?");
                printf("\n\nA. Triana\t\tB. Tivat\n\nC. Kotor\t\tD. Montenegro");
                if(toupper(getch())=='D')
                {
                    printf("\n\n Correct!!!  The correct answer is D. Montenegro");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is D. Montenegro");
                        getch();
                        //goto score;
                        break;

                    }
                case 7:
                printf("\n\n What was the fastest hatrick in Premier League?");
                printf("\n\nA. 1min 54 sec\t\tB. 2min 36 sec\n\nC. 2min 56sec\t\tD. 2min 57sec");
                if(toupper(getch())=='C')
                {
                    printf("\n\n Correct!!!  The correct answer is C. 2min 56sec");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is C. 2min 56sec");
                        getch();
                        //goto score;
                        break;

                    }
                case 8:
                printf("\n\n What is Usain Bolt's blistering 100m world record time?");
                printf("\n\nA. 9.44sec\t\tB. 10.4sec\n\nC. 8.34sec\t\tD. 9.58sec");
                if(toupper(getch())=='D')
                {
                    printf("\n\n Correct!!!  The correct answer is D. 9.58sec");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is D. 9.58sec");
                        getch();
                        //goto score;
                        break;

                    }
                case 9:
                printf("\n\n Which of these is not a real sport?");
                printf("\n\nA. Foot golf\t\tB. Hand rounders\n\nC. Chess boxing");
                if(toupper(getch())=='B')
                {
                    printf("\n\n Correct!!!  The correct answer is B. Hand rounders");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is B. Hand rounders");
                        getch();
                        //goto score;
                        break;

                    }
                case 10:
                printf("\n\n When did Indian football team made its first appearance in olympics?");
                printf("\n\nA. 1946\t\tB. 1938\n\nC. 1948 \t\tD. 1950");
                if(toupper(getch())=='C')
                {
                    printf("\n\n Correct!!!  The correct answer is C. 1948");
                    counter++;
                    getch();
                }
                    else
                    {
                        printf("\n\n Wrong!!!  The correct answer is C. 1948");
                        getch();
                        //goto score;
                        break;

                    }
            }


    }
    return 0;
}

