#include<stdio.h>
#include<limits.h>

int main(){
    
    printf("|%-25s|%-5s|%-5s|%-20s|%-20s|\n","name","pm","size","minValue","maxValue");
    printf("|%-25s|%-5s|%-5d|%-20d|%-20d|\n","short int","%hd",sizeof(short),SHRT_MIN,SHRT_MAX);
    printf("|%-25s|%-5s|%-5d|%-20d|%-20d|\n","unsigned short int","%hu",sizeof(unsigned short),SHRT_MIN,USHRT_MAX);
    printf("|%-25s|%-5s|%-5d|%-20u|%-20u|\n","unsigned int","%u",sizeof(unsigned),0,UINT_MAX);
    printf("|%-25s|%-5s|%-5d|%-20d|%-20d|\n","int","%d",sizeof(int),INT_MIN,INT_MAX);
    printf("|%-25s|%-5s|%-5d|%-20ld|%-20ld|\n","long int","%ld",sizeof(long),0,LONG_MAX);
    printf("|%-25s|%-5s|%-5d|%-20lu|%-20lu|\n","unsigned long int","%lu",sizeof(unsigned long),LONG_MIN,ULONG_MAX);
    printf("|%-25s|%-5s|%-5d|%-20lld|%-20lld|\n","long long int","%lld",sizeof(long long),LLONG_MIN,LLONG_MAX);
    printf("|%-25s|%-5s|%-5d|%-20llu|%-20llu|\n","unsigned long long int","%llu",sizeof(unsigned long long),0,ULLONG_MAX);

    return 0;
}