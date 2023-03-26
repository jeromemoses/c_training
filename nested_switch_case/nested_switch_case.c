#include<stdio.h>

char student_name[50] = " ";
int std;
char section;
int roll_no;
int recorrection;
int re_registry;
int char_to_int_section;
int roll_no_switch;

void section_to_int()
{
    if(section == 'a' || section == 'A')char_to_int_section = 1;
    else if(section == 'b' || section == 'B')char_to_int_section = 2;
    else if(section == 'c' || section == 'C')char_to_int_section = 3;
    else {
        char_to_int_section = 4;
    }

}

void roll_no_check()
{
    if(roll_no > 30)
    {
        printf("###You have etered the invalid roll number pleas enter between 1 - 30 : ");
        scanf("%d",&roll_no);
    }
    
    if(roll_no <= 15)
    {
        roll_no_switch  = 1;         
    }
    else if(roll_no > 15 && roll_no <= 30)
    {
        roll_no_switch = 2;
    }
    else
    {
        roll_no_switch = 3;
    }
    
}

int main()
{
    //Asks students details in the consol terminal
    printf("\t\t\t#####Exam hall ticket number registrator#####\n");
    switch_function:
    printf("\n\t\t  ---------Please answer all the questions below---------\n\n");
    
    printf("Enter your name: ");
    scanf("%s",&student_name);

    printf("\nEnter the standard your studing : 1st - 12th:");
    scanf("%d",&std);
    
    printf("\nEnter your section A , B , C:");
    scanf("%s",&section);

    printf("\nEnter your Roll number 1-30:");
    scanf("%d",&roll_no);

    printf("\n\n-----Please confirm your details you provided-----\n\n");
    printf("Your name:\t%s \nStandard:\t%d \nSection:\t%c \nRoll NO:\t%d\n\n",student_name,std,section,roll_no);
    
    printf("###>If the given details is wrong press 1 to Re-enter your details or 0 to continue: ");
    scanf("%d",&recorrection);
    printf("\n\n");

    //assigning section to according section switch cases
    if(section == 'a' || section == 'A')char_to_int_section = 1;
    else if(section == 'b' || section == 'B')char_to_int_section = 2;
    else if(section == 'c' || section == 'C')char_to_int_section = 3;
    else {
        char_to_int_section = 4;
    }

    //assigning roll number to according roll number switch cases
    if(roll_no <= 15)
    {
        roll_no_switch  = 1;         
    }
    else if(roll_no > 15 && roll_no <= 30)
    {
        roll_no_switch = 2;
    }
    else
    {
        roll_no_switch = 3;
    }

    if(recorrection)
    {
        goto switch_function;
    }
    
    std_correction_loop:
    switch(std)
    {
        case 1:
        {
            section1:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll11:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll11;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll12:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll12;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll13:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll13;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section1;
                break;
            }
        }
        break;
        /////-----------------------------------End of case 1---------------------------------------/////
        case 2:
        {
            section2:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll21:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll21;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll22:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll22;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll23:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll23;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section2;
                break;
            }
        }
        break;
        /////------------------------------------End of case 2---------------------------------------/////
        case 3:
        {
            section3:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll31:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll31;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll32:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll32;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll33:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll33;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section3;
                break;
            }
        }
        break;
        /////----------------------------------End of case 3---------------------------------------/////
        case 4:
        {
            section4:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll41:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll41;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll42:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll42;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll43:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll43;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section4;
                break;
            }
        }
        break;
        /////----------------------------------End of case 4---------------------------------------/////
        case 5:
        {
            section5:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll51:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll51;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll52:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll52;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll53:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll53;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section5;
                break;
            }
        }
        break;
        /////----------------------------------End of case 5---------------------------------------/////
        case 6:
        {
            section6:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll61:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll61;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll62:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll62;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll63:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll63;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section6;
                break;
            }
        }
        break;
        /////----------------------------------End of case 6---------------------------------------/////
        case 7:
        {
            section7:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll71:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll71;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll72:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll72;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll73:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll73;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section7;
                break;
            }
        }
        break;
        /////----------------------------------End of case 7---------------------------------------/////
        case 8:
        {
            section8:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll81:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll81;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll82:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll82;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll83:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll83;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section8;
                break;
            }
        }
        break;
        /////----------------------------------End of case 8---------------------------------------/////
        case 9:
        {
            section9:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll91:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll91;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll92:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll92;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll93:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll93;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section9;
                break;
            }
        }
        break;
        /////----------------------------------End of case 9---------------------------------------/////
        case 10:
        {
            section10:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll101:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll101;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll102:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll102;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll103:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll103;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section10;
                break;
            }
        }
        break;
        /////----------------------------------End of case 10---------------------------------------/////
        case 11:
        {
            section11:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll111:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll111;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll112:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll112;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll113:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll113;
                        break;
                    }
                }
                break;

                default:
                printf("###you have entered the invalid section please enter between A,B,C: ");
                scanf("%s",&section);
                section_to_int();
                goto section11;
                break;
            }
        }
        break;
        /////----------------------------------End of case 11---------------------------------------/////
        case 12:
        {
            section12:
            switch(char_to_int_section)
            {
                case 1:
                {
                    roll121:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll121;
                        break;
                    }
                }
                break;

                case 2:
                {
                    roll122:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll122;
                        break;
                    }
                }
                break;

                case 3:
                {
                    roll123:
                    switch(roll_no_switch)
                    {
                        case 1:
                        printf("###Your hall ticket number : #10%d%d0A ",roll_no,std);
                        break;

                        case 2:
                        printf("###Your hall ticket number : #20%d%d0A ",roll_no,std);
                        break;

                        default:
                        roll_no_check();
                        goto roll123;
                        break;
                    }
                }
                break;
            }
        }
        break;
        /////----------------------------------End of case 12---------------------------------------/////
        default:
        {
            printf("###You have entered the invalid standard pleas enter between 1-12 std : ");
            scanf("%d",&std);
            goto std_correction_loop;
        }
        
    }

    printf("\n\n\n");
    printf("###Do you want to register another hall ticket ?\n1 = yes , 0 = NO : ");
    scanf("%d",&re_registry);
    if (re_registry)
    {
        goto switch_function;
    }
    
}