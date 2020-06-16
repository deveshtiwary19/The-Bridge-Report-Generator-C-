#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>
#include<time.h>



int humidity,rain,Htemp,Ltemp;
/*ALL the variables used in the function to fetch the weather conditions of the location declared globally;*/



int conditions(int c)
{//The following function is hardcoded to get the program location details.

    if(c==1)
    {
        humidity=30;
        rain=60;
        Htemp=30;
        Ltemp=10;
    }
    else if(c==2)
    {
        humidity=25;
        rain=45;
        Htemp=30;
        Ltemp=12;

    }
else if(c==3)
{
    humidity=17;
        rain=35;
        Htemp=27;
        Ltemp=12;

}
else if(c==4)
{

humidity=20;
        rain=40;
        Htemp=25;
        Ltemp=15;

}
else if(c==5)
{
    humidity=28;
        rain=50;
        Htemp=28;
        Ltemp=14;

}
else if(c==6)
{
    humidity=13;
        rain=30;
        Htemp=23;
        Ltemp=9;

}
else if(c==7)
{
    humidity=12;
        rain=20;
        Htemp=25;
        Ltemp=7;

}
else if(c==8)
{

    humidity=12;
        rain=20;
        Htemp=25;
        Ltemp=7;

}
}

int openFile(char str[])
{
    int ch;
    FILE *ptr=NULL;
    char *filename=str;
    ptr=fopen(filename,"r");
     ch=getc(ptr);
            while(ch!=EOF)
            {
                putchar(ch);
                ch=getc(ptr);
            }
            return 0;
}





int main()
{
    int conditions();
    int saveFile();

    int choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8;//The list of choices declared
    int pillars,lanes,open,save,location,condition;//list of integers used
    float age,lenght,budget,railing,road,pillar;//List of floats used
    char File[20],File1[20],ext[]=".txt";
    tag1:
    system("COLOR 02");
    printf("\t\t|------------------------------------------------------------|\n\t\t|==================UTTARAKHAND GOVERNMENT====================|\n\t\t|*****************THE CODE FREAKS PRESENTS*******************|\n\t\t|-----------------The Bridge Report System-------------------|\n\t\t|							     |\n\t\t|HELLO USER,,						     |\n\t\t|Enter your paasword to start using.			     |\n\t\t|============================================================|\n\t\t|************************************************************|\n\t\t|------------------------------------------------------------|\n");
    scanf("%d",&choice1);Beep(500,300);


    if(choice1==1234)
    {
        tag2:
        system("CLS");
        printf("\t\t|------------------------------------------------------------|\n\t\t|==================UTTARAKHAND GOVERNMENT====================|\n\t\t|*****************THE CODE FREAKS PRESENTS*******************|\n\t\t|-----------------The Bridge Report System-------------------|\n\t\t|							     |\n\t\t|Enter 1 to create a new report.			     |\n\t\t|Enter 2 to view existing report			     |\n\t\t|============================================================|\n\t\t|************************************************************|\n\t\t|------------------------------------------------------------|\n");
        scanf("%d",&choice2);Beep(500,300);
        if(choice2==1)
        {
            tag3:
            system("CLS");
            system("COLOR 64");
            printf("Start Entering the details of the bridge:\n");
            printf("How old the bridge is(in years)?\n");
            scanf("%f",&age);Beep(500,300);
            printf("What is the lenght of the Bridge?(in meters)\n");
            scanf("%f",&lenght);Beep(500,300);
            printf("How many pillars are there in the Bridge\n");
            scanf("%d",&pillars);Beep(500,300);
            printf("How many lanes are there on the bridge?\n");
            scanf("%d",&lanes);Beep(500,300);
            system("CLS");
tag4:
            printf("\t\t|-----------------------------------------------|\n\t\t|===============================================|\n\t\t|CONFIRM THE DETAILS:                           |\n\t\t|_______________________________________________|\n\t\t|The Bridge is %.1f years old.\n\t\t|The Bridge is %.1f meters long.\n\t\t|The Bridge has %d pillars.\n\t\t|The Bridge has %d lanes on it.\n\t\t|===============================================|\n\t\t|_______________________________________________|\n\t\t|***********************************************|\n",age,lenght,pillars,lanes);
            printf("\n\nEnter your choice\n1.Confirm\n2.Re-Enter\n");
            scanf("%d",&choice3);Beep(500,300);

            if(choice3==1)
            {
                tag5:
                system("COLOR 04");
                system("CLS");
                if(age<10)
                {
                    printf("Well! The bridge seems new!\nLets Move to fetch the location\n");
                    printf("\t|----------------------------|\n\t|____________________________|\n\t|Press 1 to select loaction. |\n\t|Press 2 to Exit.            |\n\t|____________________________|\n\t|----------------------------|\n");
                    scanf("%d",&choice4);Beep(500,300);
                }
                else if(age>10&&age<25)
                         {
                    printf("Well! The bridge may need some minor repairs!\nLets Move to fetch the location\n");
                    printf("\t|----------------------------|\n\t|____________________________|\n\t|Press 1 to select loaction. |\n\t|Press 2 to Exit.            |\n\t|____________________________|\n\t|----------------------------|\n");
                    scanf("%d",&choice4);Beep(500,300);
                }
                else if(age>25&&age<40)
                     {
                    printf("Well! The bridge may need some repairs!\nLets Move to fetch the location\n");
                    printf("\t|----------------------------|\n\t|____________________________|\n\t|Press 1 to select loaction. |\n\t|Press 2 to Exit.            |\n\t|____________________________|\n\t|----------------------------|\n");
                    scanf("%d",&choice4);Beep(500,300);
                }
                else if(age>40&&age<=50)
                {

                    printf("Well! The bridge Should be repaired soon!!\nLets Move to fetch the location\n");
                    printf("\t|----------------------------|\n\t|____________________________|\n\t|Press 1 to select loaction. |\n\t|Press 2 to Exit.            |\n\t|____________________________|\n\t|----------------------------|\n");
                    scanf("%d",&choice4);Beep(500,300);
                }
                else
                    {
                    printf("Well! The bridge definitely needs repair!\nMust be brought to the note of department too!\nLets Move to fetch the location\n");
                    printf("\t|----------------------------|\n\t|____________________________|\n\t|Press 1 to select loaction. |\n\t|Press 2 to Exit.            |\n\t|____________________________|\n\t|----------------------------|\n");
                    scanf("%d",&choice4);Beep(500,300);
                }
                system("CLS");
tag7:
                if(choice4==1)
                {
                    tag6:

                    printf("\t\t|--------------------------------------------|\n\t\t|=========UTTRAKHAND DISTRICTS LIST==========|\n\t\t|********************************************|\n\t\t|Choose The Location:			     |\n\t\t|1.LOCATION A				     |\n\t\t|2.LOCATION B      			     |\n\t\t|3.LOCATION C				     |\n\t\t|4.LOCATION D				     |\n\t\t|5.LOCATION E				     |\n\t\t|6.LOCATION F				     |\n\t\t|7.LOCATION G				     |\n\t\t|8.LOCATION H				     |\n\t\t|********************************************|\n\t\t|=============================THE CODE-FREAKS|\n\t\t|--------------------------------------------|\n");
                    scanf("%d",&location);Beep(500,300);
                }
                else if(choice4==2)
                {
                    system("CLS");
                    printf("\t\t|-------------------------------------|\n\t\t|-------------------------------------|\n\t\t|Application Closed!!		      |\n\t\t|Thanks For Using.                    |\n\t\t|=====================================|\n\t\t|*********THE CODE FREAKS*************|\n\t\t|-------------------------------------|\n");
                    return 0;
                }
                else
                {
                    system("CLS");
                    printf("WRONG INPUT!!TRY AGAIN\n");
                    goto tag5;
                }
                tag8:
                if(location==1)
                {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION A==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==2)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION B==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==3)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION C==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==4)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION D==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==5)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION E==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==6)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION F==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==7)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION G==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else if(location==8)
                     {
                    system("CLS");
                    condition=conditions(location);
                    printf("\t\t|-----------------------------------|\n\t\t|===========LOCATION H==============|\n\t\t|***********************************|\n\t\t|Average Humidity= %d percent\n\t\t|Average Rainfall= %d percent\n\t\t|Highest Temperature= %d 'c\n\t\t|Lowest Temperature= %d 'c\n\t\t|***********************************|\n\t\t|====================THE CODE-FREAKS|\n\t\t|-----------------------------------|\n",humidity,rain,Htemp,Ltemp);
                    printf("Enter 1 to get the report.\nEnter 2 to Enter location again\nEnter 3 to exit\n");
                    scanf("%d",&choice5);Beep(500,300);
                }
                else
                {
                    system("CLS");
                    printf("LOCATION NOT FOUND!! TRY AGAIN\n");
                    goto tag6;
                }
                system("CLS");
                railing=lenght*300;
                road=lenght*500;
                pillar=pillars*1000;
                budget=(railing+road+pillar);
                if(choice5==1)
                {
                        time_t t;
                        time(&t);
                    tag9:    //Following are the codes to read the current date and time to print on the report;
                    system("COLOR 02");
                    printf("\t\t|--------------------------------------------------------------------------------|\n\t\t|=======================THE UTTARAKHAND GOVERNMENT===============================|\n\t\t|***************IN ASSOCIATION WITH THE CODE FREAK DEVELOPERS********************|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|___________________________THE BRIDGE REPORT____________________________________|\n\t\t|										 |\n\t\t|The Details of the loaction are:						 |\n\t\t|Average Humidity at the location is %d percent.\n\t\t|Average Rainfall at the location id %d percent.\n\t\t|The Highest Temperature for this Month is %d  degree celsius.\n\t\t|The Lowest Temperature for this Month is %d degree celsius.\n\t\t|--------------------------------------------------------------------------------|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|The Roads Need repair if Rainfall is more than 45 percent.			 |\n\t\t|The railings Need repair if humidity is more than 40 percent.  		 |\n\t\t|The railings Need repair too if temperature range is very low or very high.	 |\n\t\t|The Pillars need repair if the rainfall in the location is more than 50 percent.|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|The Budget ideas involved are as follows:					 |\n\t\t|Budget for railing: %.2f lacs.\n\t\t|Budget for roads: %.2f lacs.\n\t\t|Budget for pillars: %.2f thousands.\n\t\t|================================================================================|\n\t\t|Overall Budget= %.2f lacs.\n\t\t|________________________________________________________________________________|\n\t\t|Time and Date of Report Creation:						 |\n\t\t|%s\n\t\t|================================================================================|\n\t\t|************************************************************AUTHORISED SIGNATURE|\n\t\t|--------------------------------------------------------------------------------|\n",humidity,rain,Htemp,Ltemp,railing,road,pillar,budget,ctime(&t));
                    printf("\n\tEnter 1 to save the report in a text file.\n\tEnter 2 to Exit the application.\n\t");
                    scanf("%d",&choice6);Beep(500,300);

                    if(choice6==1)
                    {
                        system("CLS");
                        system("COLOR 04");
                        printf("Enter the name of the file in which you want to save the report.\n");
                        scanf("%s",&File1);
                        strcat(File1,ext);
                         FILE *ptr=NULL;
                        char *filename=File1;
                        ptr=fopen(filename,"w");

                        fprintf(ptr,"\t\t|--------------------------------------------------------------------------------|\n\t\t|=======================THE UTTARAKHAND GOVERNMENT===============================|\n\t\t|***************IN ASSOCIATION WITH THE CODE FREAK DEVELOPERS********************|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|___________________________THE BRIDGE REPORT____________________________________|\n\t\t|										 |\n\t\t|The Details of the loaction are:						 |\n\t\t|Average Humidity at the location is %d percent.\n\t\t|Average Rainfall at the location id %d percent.\n\t\t|The Highest Temperature for this Month is %d  degree celsius.\n\t\t|The Lowest Temperature for this Month is %d degree celsius.\n\t\t|--------------------------------------------------------------------------------|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|The Roads Need repair if Rainfall is more than 45 percent.			 |\n\t\t|The railings Need repair if humidity is more than 40 percent.  		 |\n\t\t|The railings Need repair too if temperature range is very low or very high.	 |\n\t\t|The Pillars need repair if the rainfall in the location is more than 50 percent.|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|--------------------------------------------------------------------------------|\n\t\t|The Budget ideas involved are as follows:					 |\n\t\t|Budget for railing: %.2f lacs.\n\t\t|Budget for roads: %.2f lacs.\n\t\t|Budget for pillars: %.2f thousands.\n\t\t|================================================================================|\n\t\t|Overall Budget= %.2f lacs.\n\t\t|________________________________________________________________________________|\n\t\t|Time and Date of Report Creation:						 |\n\t\t|%s\n\t\t|================================================================================|\n\t\t|************************************************************AUTHORISED SIGNATURE|\n\t\t|--------------------------------------------------------------------------------|\n",humidity,rain,Htemp,Ltemp,railing,road,pillar,budget,ctime(&t));
                        system("CLS");
                        printf("File Saved Sucessfully!!\n");
                        tag10:
                        printf("\nEnter 1 to REUSE the appliaction\nEnter 2 Exit the application\n");
                        fclose(ptr);
                        scanf("%d",&choice7);
                        if(choice7==1)
                        {
                            system("CLS");
                            system("COLOR 02");
                            goto tag2;
                        }
                        else if(choice7==2)
                        {
                            system("CLS");
                            printf("\t\t|-------------------------------------|\n\t\t|-------------------------------------|\n\t\t|Application Closed!!		      |\n\t\t|Thanks For Using.                    |\n\t\t|=====================================|\n\t\t|*********THE CODE FREAKS*************|\n\t\t|-------------------------------------|\n");
                            return 0;
                        }
                        else
                        {
                            system("CLS");
                            printf("WRONG INPUT!!TRY AGAIN\n");
                            goto tag10;
                        }

                    }
                    else if(choice6==2)
                    {
                        system("CLS");
                        printf("\t\t|-------------------------------------|\n\t\t|-------------------------------------|\n\t\t|Application Closed!!		      |\n\t\t|Thanks For Using.                    |\n\t\t|=====================================|\n\t\t|*********THE CODE FREAKS*************|\n\t\t|-------------------------------------|\n");
                        return 0;
                    }
                    else
                    {
                        system("CLS");
                        printf("WRONG INPUT!! TRY AGAIN\n");
                        goto tag9;
                    }
                }
                else if(choice5==2)
                {
                    system("CLS");
                    goto tag7;
                }
                else if(choice5==3)
                {
                    system("CLS");
                    printf("\t\t|-------------------------------------|\n\t\t|-------------------------------------|\n\t\t|Application Closed!!		      |\n\t\t|Thanks For Using.                    |\n\t\t|=====================================|\n\t\t|*********THE CODE FREAKS*************|\n\t\t|-------------------------------------|\n");
                    return 0;
                }
                else
                {
                    system("CLS");
                    printf("WRONG INPUT!! ENTER AGAIN\n");
                    goto tag8;
                }



            }
            else if(choice3==2)
            {
                system("CLS");
                goto tag3;
            }
            else
            {
                system("CLS");
                printf("WRONG INPUT!TRY AGAIN\n");
                goto tag4;
            }
        }

        else if(choice2==2)
        {
            system("CLS");
            printf("Enter the file name of the report you want to view?\n");
            scanf("%s",&File);Beep(500,300);
            strcat(File,ext);
            system("CLS");
            open=openFile(File);
            if(open==0)
            {
    tag11:
            printf("\n\t\tEnter 1 to REUSE the appliaction\n\t\tEnter 2 to exit\n\t\t");
            scanf("%d",&choice8);
            if(choice8==1)
            {
                system("CLS");
                system("COLOR 02");
                goto tag2;
            }
            else if(choice8==2)
            {
                system("CLS");
                printf("\t\t|-------------------------------------|\n\t\t|-------------------------------------|\n\t\t|Application Closed!!		      |\n\t\t|Thanks For Using.                    |\n\t\t|=====================================|\n\t\t|*********THE CODE FREAKS*************|\n\t\t|-------------------------------------|\n");
                return 0;
            }
            else
            {
                system("CLS");
                printf("WRONG INPUT TRY AGAIN!!\n");
               goto tag11;
            }
            }
            else
            {
                goto tag11;
                printf("FILE NOT FOUND!!");
            }
        }
        else
        {
            system("CLS");
            goto tag2;
            printf("WRONG CHOICE!!TRY AGAIN\n");
        }




    }
    else
        {
            system("CLS");
            printf("WRONG PASSWORD!TRY AGAIN\n");
            goto tag1;
        }

        return 0;
}
