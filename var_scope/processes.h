#ifndef MYPROCESSES_H
#define MYPROCESSES_H

struct processes{
int ID;
char name[30];
};

static int nextprocessid();
int createnewprocess(char name);
int stopprocess(int ID);
#endif