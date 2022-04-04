#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char name[20], address[20],age[20],weight[20],height[20];
    
    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    gets(age);
    printf("Enter your address : ");
    gets(address);
    printf("Enter your height: ");
    gets(height);
    printf("Enter your weight: ");
    gets(weight);

    printf("===================\n");
    printf("=     BIODATA     =\n");
    printf("===================\n");
    printf("Name    : %s\n",name);  
    printf("Age     : %s\n",age);
    printf("Address : %s\n",address);
    printf("Height  : %s\n",height);
    printf("Weight  : %s\n",weight);

    return 0;
}
