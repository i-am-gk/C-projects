#include<stdio.h> //standar input and output header file//

#include<windows.h> //contains declarations for all of the functions in the Windows API//

#include<conio.h> //Console Input/Output functions//

#include<string.h> //String functions//

#define CANDIDATE_COUNT // #define created a constant that is used to represent numbers, strings, or other expressions//

#define CANDIDATE1 "Imran Khan PTI"

#define CANDIDATE2 "Nawaz Shareef PMLN"

#define CANDIDATE3 "Asif ali zardari PPP"

#define CANDIDATE4 "Molana Fazl-ur-Rehman JUI"

#define CANDIDATE5 "Siraj-ul-Haq JI "

#define CANDIDATE6 "Muslim League Q"

#define CANDIDATE7 "Mustafa Kamal PSZP "

#define CANDIDATE8  "Sheikh Rasheed ALP"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0,votesCount5=0,votesCount6=0;

int votesCount7=0,votesCount8=0, spoiledvotes=0;
//Function one of the program
void castVote()
{
int choice;    
printf("\n\n ###\" CANDIDATES WHO TOOK PART IN THIS ELECTION ARE \" ####\n\n");
printf("\n 1. %s\n", CANDIDATE1);
printf("\n 2. %s\n", CANDIDATE2);
printf("\n 3. %s\n", CANDIDATE3);
printf("\n 4. %s\n", CANDIDATE4);
printf("\n 5. %s\n", CANDIDATE5);
printf("\n 6. %s\n" , CANDIDATE6);
printf("\n 7. %s\n" , CANDIDATE7);
printf("\n 8. %s\n" , CANDIDATE8);
printf("\n 9. %s\n", "None of These");
printf("\n\n Input your choice (1 - 9)\n ");
scanf("%d",&choice);

switch(choice){
    case 1: 
	votesCount1++; 
	break;
    case 2: 
	votesCount2++;
	 break;
    case 3:
	 votesCount3++; 
	 break;
    case 4:
	 votesCount4++;
	  break;
    case 5:
	 votesCount5++;
	  break;
    case 6:
	 votesCount6++;
	  break;
    case 7:
	 votesCount7++; 
	 break;
	case 8:
	 votesCount8++;
	  break;
    case 9: 
	spoiledvotes++;
	 break;
    default: 
	printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}

printf("\nYOUR VOTE HAS BEEN CASTED...... !!");
Sleep(1000);//It's like fore delay function it is used for delaying time standard of statements
//It uses value in micro seconds//

system("cls"); // it is  used for closing menu of the output
}

//2nd function of the program//
void votesCount()
{
printf("\n\n HERE IS THE VOTING STATISTICS\n");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d" , CANDIDATE5, votesCount5);
printf("\n %s - %d" , CANDIDATE6, votesCount6);
printf("\n %s - %d" , CANDIDATE7, votesCount7);
printf("\n %s - %d" , CANDIDATE8, votesCount8);            
printf("\n %s - %d ", "Spoiled Votes", spoiledvotes); 
getchar();
}

//3rd function of the program//

void getLeadingCandidate()
{
	
    printf("\n\n  #### Leading Candiate Till Now is####\n\n");
    
	 if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4 &&votesCount1>votesCount5 && votesCount1>votesCount6 && votesCount1 >votesCount7)
    printf("[%s]",CANDIDATE1); 
	  if (votesCount2>votesCount1 && votesCount2>votesCount3 && votesCount2 >votesCount4 && votesCount2>votesCount5 && votesCount2>votesCount6 && votesCount2 >votesCount7)
    printf("[%s]",CANDIDATE2); 
    
    if(votesCount3>votesCount1 && votesCount3>votesCount2 && votesCount3 >votesCount4 && votesCount3>votesCount5 && votesCount3>votesCount6 && votesCount3 >votesCount7)
    printf("[%s]",CANDIDATE3);

	   if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3 && votesCount4>votesCount5 && votesCount4>votesCount6 && votesCount4 >votesCount7)
    printf("[%s]",CANDIDATE4); 
	 
	 if(votesCount5>votesCount1 && votesCount5>votesCount2 && votesCount5 >votesCount3 && votesCount5>votesCount4 && votesCount5>votesCount6 && votesCount5 >votesCount7)
    printf("[%s]",CANDIDATE5); 
    
     if(votesCount6>votesCount1 && votesCount6>votesCount2 && votesCount6 >votesCount3 && votesCount6>votesCount4 && votesCount6>votesCount5 && votesCount6 >votesCount7)
    printf("[%s]",CANDIDATE6); 
   
     if(votesCount7>votesCount1 && votesCount7>votesCount2 && votesCount7 >votesCount3 && votesCount7>votesCount4 && votesCount7>votesCount5 && votesCount7 >votesCount6)
    printf("[%s]",CANDIDATE7); 
    
     if(votesCount8>votesCount1 && votesCount8>votesCount2 && votesCount8 >votesCount3 && votesCount8>votesCount4 && votesCount8>votesCount5 && votesCount8 >votesCount6)
    printf("[%s]",CANDIDATE8);    
   
}

void display() {

	
	int choice;
	int i;
	system ("Color 70");//it is done for colour i have choosen white background with black text colour//

do{
printf("\n\n ......... Welcome to Election/Voting 2022.........");
Sleep(1000);
printf("\n\n 1. Cast the Vote\n");
Sleep(1000);
printf("\n 2. Find Vote Count\n");
Sleep(1000);
printf("\n 3. Find leading Candidate\n");
Sleep(1000);
printf("\n 0. Program Details\n");
printf("\n\n Please enter your choice\n ");
Sleep(1000);
scanf("%d", &choice);
system("cls");

switch(choice)
{
case 1:
 castVote();
 break;

case 2:
 votesCount();
 break;

case 3:
 getLeadingCandidate();
 break;

default:
	// credits of the program
 printf("\n \tTHANK U FOR VOTING HERE... !\n "); // back slash n escape sequence used for moving to next line
 Sleep(3000);
 printf("\n\tTHIS PROGRAM HAS BEEN MADE BY..\n"); // back slash t escape sequence used for spacing 
 Sleep(2000);
 printf("\nGHANI ABDUL REHMAN KHAN");
 Sleep(3000);
 printf("\n\n\"B.S.S.E 1st SECTION C\"");
 Sleep(4000);
 printf("\n\n\t TEACHER \"SIR JAVED ALI\"\n\n");
Sleep(900000); //large value given to sleep function for large delay//
}

}

while(choice!=0);
//hold the screen
getchar();

}


int main () // main slot of program
{
	system ("Color 80"); // 2 for blue , 6 for indigon, 7 for white light ,
	printf("\n\n\t\tWELCOME TO ELECTION//VOTING SYSTEM 2022....");
	Sleep(3000);
	printf("\n\n\tTHIS PANEL IS PASSWORD PROTECTED....");
	Sleep(3000);
    char pass[10],password[10]="comsats";
    int c=0;
    printf("\n\n\t\tKindly Enter the password to login =:");
    scanf("\n%s",&pass);
    printf("\n\n System Is Checking Your Password KINDLY WAIT...\n\n");
    Sleep(2000);
  
  /*  do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0'; */ // it is another way of generating password 
    
    if (strcmp(pass,password)==0) // strcmp function is used to compare the string arguments 
    //it compares strings lexicographically which means it compares both the strings character by character.
    //It starts comparing the very first character of strings until the characters of both strings
	// are equal or NULL character is found.//
        {
		printf("\n\n\tPASSWORD MATCHED....!");
		printf("\n\n\tLOADING");
		Sleep(3000);
		
        for(c=0;c<=9;c++) //loop used for printing dots in front of LOADING.I wanted to print almost 9 dots.//
        {
        
            printf(".");
            Sleep(1000); 
         
        }
        system("cls");
        display (); // FUNCTION CALLING 
        //it will refer us back to dislay function//
        
       	}
       	else
	{
		printf("\tSORRY..");
		Sleep(3000);
    	printf("\n\n\tYou entered Wrong password....\n\n");
    	Sleep(3000);
    	printf("\n\n\tWe are taking you back to PASSWORD PANEL...");
    	Sleep(3000);
    	system("cls");
    	main(); // it will refer to int  main //
       
	}
}
/*
0 = Black      		 8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White
    */
