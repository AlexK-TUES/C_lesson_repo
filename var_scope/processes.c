#include <stdio.h>
#include "processes.h"

struct processes process[5];
int processescount = 0;

static int nextprocessid(){
    int ID = processescount + 1;
}

int createnewprocess(char name){
    if (processescount < 5){
        process[processescount].ID = nextprocessid();
        process[processescount].name = name; //Why code broky here?
        processescount++;
        return process[processescount].ID,process[processescount].name;}
    else {
        printf("Error: Too many processes!");
        return 0;}
}

int stopprocess(int ID){
    process[ID].name = 'np';
    for(int i = process[ID].ID;i<=processescount;i++){
        if (process[i].name!='np'){
            int temp = process[i].ID;
            process[i].ID = process[ID].ID;
            process[ID].ID = temp;
        }
        
    }
}
