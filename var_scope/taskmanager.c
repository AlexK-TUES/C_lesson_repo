#include <stdio.h>
#include "processes.h"

extern struct processes process[5];
extern int processescount;

extern int createnewprocess(char name);
extern int stopprocess(int ID);

void main(){
    printf("To create a process press 1. To list all processes press 2. To stop a process press 3. To exit press ctrl and C.\n");
    while (1){
        int choise = scanf("%d",&choise);
        if (choise == 1){
            printf("Chose a name for the process:\n");
            char i = getchar();
            createnewprocess(i);
            if (createnewprocess(i)!=0) printf("Process %c with ID %d has been created.\n",process[i].name,process[i].ID);
        }
        if (choise == 2){
            for (int i = 0;i<processescount;i++){
                if (process[i].name == "np") printf("Nonexistant process.\n");
                else printf("Process %c with ID %d exists."),process[i].name,process[i].ID;
            }
        }
        if (choise == 3){
            printf("Enter the ID of the process to be killed:\n");
            char i = getchar();
            stopprocess(i);
            printf("The process has been terminated.\n");
        }
    }
}