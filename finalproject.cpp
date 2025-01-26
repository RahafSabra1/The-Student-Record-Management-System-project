                                 //project langauge C++//
                     /* student Name of the project are :  Rahaf Sabra */
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
#include<string.h>
void mainMenu();
void adminFunction();
void recordStudent();
void addStudent();
void viewStudent();
void updateStudents();
void deleteStudents();
int size=0,i;
char name[400][100];
char name2[400][100];
int main()
{
mainMenu();
}
void mainMenu(){
  system("cls");
  int no;
  printf("\n\n\n\n\t\t\t\t\t logain As :");
  printf("\n\n\n\n\t\t\t\t\t 1.Aamin.");
  printf("\n\n\n\n\t\t\t\t\t 2.student.");
  printf("\n\n\n\n\t\t\t\t\t 3.Exit.");
  printf("\n\n\n\n\t\t\t\t\t Enter your choice :");
  scanf("%d",&no);
  switch(no){
  case 1:adminFunction();
  mainMenu();
  break;
  case 2:recordStudent();
  getch();
  mainMenu();
  break;
  case 3:system("cls"); 
  printf("\n\n\n\n\n\t\t\t\t\tOuitting the program.");
  exit(0);
  default : system("cls");
  mainMenu();
  }
}
// record student //
void recordStudent(){
  int no3;
  system("cls");
  printf("\t|Students page|\n\n\n");
  printf("\twelcome as Student\n\n\n\n");
  printf("1.Back to Main Menu\n2.Exit\n");
  printf("Enter choice:");
  scanf("%d",&no3);
  switch (no3){
  case 1:mainMenu();
  break;
    case 2:system("cls"); 
  printf("\n\n\n\n\n\t\t\t\t\tOuitting the program.\n");
  exit(0);
  getch();
  default : system("cls");
  recordStudent();
  }
}

// adminFunctions //
void adminFunction(){
  system("cls");
  int no1;
  printf("\n\t\t\t\t\t|logged In as Admin|\n\n\n\n\n");
  printf("\t\t\t\t\t1.add Student Record\n");
  printf("\t\t\t\t\t2.View All Student Record\n");
  printf("\t\t\t\t\t3.update Student Record\n");
  printf("\t\t\t\t\t4.Delet Student Record\n");
  printf("\t\t\t\t\t5.mainMenu\n");
  printf("\t\t\t\t\t6.Exit\n");
  printf("\t\t\t\t\tEnter choice:");
  scanf("%d",&no1);
  switch(no1){
  case 1: addStudent();
  mainMenu();
  break;
  case 2: viewStudent();
  getch();
  mainMenu();
  break;
  case 3: updateStudents();
  mainMenu();
  break;
  case 4: deleteStudents();
  mainMenu();
  break ;
  case 5: mainMenu();
  break;
  case 6 :system("cls"); 
  printf("\n\n\n\n\n\t\t\t\t\tOuitting the program.\n");
  exit(0); 
  default : system("cls");
  adminFunction();
    }
}

//add students//
void addStudent(){
  system("cls");
  printf("Enter the First Name :");
  scanf("%s",name[size]);
  printf("Enter the Last Name :");
  scanf("%s",name2[size]);
  ++size;
  adminFunction();
}
//viewStudent //
void viewStudent(){
  system("cls");
  printf("\t\t\t\t\t|Student record|\n\n\n\n");
  printf("---------------------------------------------------------------------------------------\n");
  printf("Number\t\t\tName\n");
  for (i=0;i<size;i++)
  printf("%d\t\t\t%s%s\n\n",i+1,name[i],name2[i]);
  //printf("%d\t\t%s\n",i+1,strcat(name[i],name2[i]));//
  printf("---------------------------------------------------------------------------------------\n\n\n");
  printf("1.Back to Admin Menu\n2.Exit\n");
  printf("Enter your choice:");
  int no4;
  scanf("%d",&no4);
  switch (no4){
  case 1:adminFunction();
  break;
  case 2:system("cls"); 
  printf("\n\n\n\n\n\t\t\t\t\tOuitting the program.\n");
  exit(0);
  default : system("cls");
  viewStudent();
  }
}
//updateStudents//
void updateStudents(){ 
system("cls");
int no4;
printf("Enter the Number of Students:");
scanf("%d",&no4);
printf("\nEnter the New First Name :");
scanf("%s",name[no4-1]);
printf("Enter the New Last Name :");
scanf("%s",name2[no4-1]);
adminFunction();
}
//deleteStudents//
void deleteStudents()
{int no6;
system("cls");
printf("Enter the Number of Students:");
scanf("%d",&no6);
for (i=--no6;i<size;i++)
{
strcpy(name[i],name[i+1]);
strcpy(name2[i],name2[i+1]);
}
--size;
adminFunction();
}
