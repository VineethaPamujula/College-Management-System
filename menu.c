#include<stdio.h>
#include<windows.h>
struct student{
    char Name[20];
    char Rollno[20];
    long long int Mobile_no;
    char Email[25];
    char City[20];
    char Gender;
};
struct course{
    char Name[20];
    int Id;
    char Duration[20];
};
struct club{
    char Name[20];
    char Incharge[20];
    char Day[20];
};
void gotoxy(int x,int y)
{

    COORD C;
    C.X=x;
    C.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
}
int main()
{
   gotoxy(42,10);
   printf("* * * * * * * * * * * * * * *");
   gotoxy(42,11);
   printf("* ");
   gotoxy(70,11);
   printf("* ");
   gotoxy(44,11);
   printf("COLLEGE MANAGEMENT SYTEM\n");
   gotoxy(42,12);
   printf("* * * * * * * * * * * * * * *");
   gotoxy(43,15);
   printf("Press any key to continue");
   getch();
   menu();
   return 0;
}
void menu()
{
   int choice;
   system("cls");
   gotoxy(45,3);
   printf("COLLEGE MANAGEMENT SYTEM");
   gotoxy(45,5);
   printf("----------MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.Admin");
   gotoxy(50,10);
   printf("2.Student");
   gotoxy(50,11);
   printf("3.Exit");
   gotoxy(50,13);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: admin();
               break;

       case 2:student();
               break;

       case 3:exit(1);
            break;
       default:printf("Invalid Case");


   }
}
void admin()
{
    int choice;
    system("cls");
   gotoxy(48,3);
   printf("COLLEGE MANAGEMENT SYTEM");
   gotoxy(45,5);
   printf("---------- ADMIN MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.Manage Student");
   gotoxy(50,10);
   printf("2.Manage Course");
   gotoxy(50,11);
   printf("3.Club Management");
   gotoxy(50,12);
   printf("4.Academic performance");
   gotoxy(50,13);
   printf("5.quit");
   gotoxy(50,15);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: manageStudent();
               break;

       case 2:manageCourse();
               break;

       case 3:clubManagement();
               break;

       case 4:academicPerformance();
               break;

       case 5:exit(1);
              break;
       default:printf("Invalid Case");


   }
}

void student()
{
   int choice;
   system("cls");
   gotoxy(48,3);
   printf("COLLEGE MANAGEMENT SYTEM");
   gotoxy(45,5);
   printf("---------- STUDENT MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.View Subject List");
   gotoxy(50,10);
   printf("2.Lecture Schedule");
   gotoxy(50,11);
   printf("3.Club List");
   gotoxy(50,12);
   printf("4.Academic performance");
   gotoxy(50,13);
   printf("5.quit");
   gotoxy(50,15);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: viewSubject();
               break;

       case 2:lectureSchedule();
               break;

       case 3:clubList();
               break;

       case 4:academicPerformance();
               break;

       case 5:exit(1);
              break;
       default:printf("Invalid Case");


   }
}

void manageStudent()
{
    int choice;
   system("cls");
   gotoxy(50,3);
   printf("MANAGE STUDENT");
   gotoxy(45,5);
   printf("----------MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.Add");
   gotoxy(50,10);
   printf("2.View");
   gotoxy(50,11);
   printf("3.Modify");
   gotoxy(50,13);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: addStudent();
               break;

       case 2:viewStudent();
               break;

       case 3:modifyStudent();
               break;

       case 4:exit(1);
            break;
       default:printf("Invalid Case");


   }
}
void manageCourse()
{
    int choice;
   system("cls");
   gotoxy(50,3);
   printf("MANAGE COURSE");
   gotoxy(45,5);
   printf("----------MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.Add");
   gotoxy(50,10);
   printf("2.View");
   gotoxy(50,11);
   printf("3.Modify");
   gotoxy(50,13);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: addCourse();
               break;

       case 2:viewCourse();
               break;

       case 3:modifyCourse();
               break;

       case 4:exit(1);
            break;
       default:printf("Invalid Case");


   }
}
void clubManagement()
{
    int choice;
   system("cls");
   gotoxy(50,3);
   printf("CLUB MANAGEMENT");
   gotoxy(45,5);
   printf("----------MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.Add");
   gotoxy(50,10);
   printf("2.View");
   gotoxy(50,11);
   printf("3.Modify");
   gotoxy(50,13);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: addClub();
               break;

       case 2:viewClub();
               break;

       case 3:modifyClub();
               break;

       case 4:exit(1);
            break;
       default:printf("Invalid Case");


   }
}
void academicPerformance()
{
    int choice;
   system("cls");
   gotoxy(47,3);
   printf("ACADEMIC PERFOEMANCE");
   gotoxy(45,5);
   printf("----------MENU----------");
   gotoxy(50,7);
   printf("Choose the option");
   gotoxy(50,9);
   printf("1.Add");
   gotoxy(50,10);
   printf("2.View");
   gotoxy(50,11);
   printf("3.Modify");
   gotoxy(50,13);
   printf("Enter your choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: addCourse();
               break;

       case 2:viewCourse();
               break;

       case 3:modifyCourse();
               break;

       case 4:exit(1);
            break;
       default:printf("Invalid Case");


   }
}
void viewSubject()
{
   system("cls");
   gotoxy(45,3);
   printf("View Subject List");

}
void lectureSchedule()
{
   system("cls");
   gotoxy(45,3);
   printf("Lecture Schedule");

}
void clubList()
{
   system("cls");
   gotoxy(45,3);
   printf("Club List");

}
void addStudent()
{
 system("cls");
 struct student s;
 FILE *fp=fopen("student.txt","ab+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 printf("Enter Student Name:");
 fflush(stdin);
 gets(s.Name);
 printf("Enter Student RollNo:");
 scanf("%s",&s.Rollno);
 printf("Enter Student MobileNo:");
 scanf("%lld",&s.Mobile_no);
 printf("Enter Student Email:");
 scanf("%s",&s.Email);
 printf("Enter Student City:");
 fflush(stdin);
 gets(s.City);
 printf("Enter Student Gender:");
 fflush(stdin);
 scanf("%c",&s.Gender);
 fwrite(&s,sizeof(s),1,fp);
 fclose(fp);
 printf("New Student Record added successfully");
}
void viewStudent()
{
 system("cls");
 struct student s;
 FILE *fp=fopen("student.txt","rb+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 while(fread(&s,sizeof(s),1,fp)==1)
 {
     printf("Student Name:%s\n",s.Name);
     printf("Student RollNo:%s\n",s.Rollno);
     printf("Student MobileNo:%lld\n",s.Mobile_no);
     printf("Student Email:%s\n",s.Email);
     printf("Student City:%s\n",s.City);
     printf("Student Gender:%c\n",s.Gender);
 }
 fclose(fp);
}
void modifyStudent()
{
 system("cls");
 struct student s;
 char Name[20];
 FILE *fp=fopen("student.txt","rb+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 printf("Enter the name to be modified:");
 scanf("%s",Name);
 while(fread(&s,sizeof(s),1,fp)==1)
 {
     if(strcmp(s.Name,Name)==0)
     {
         printf("Enter Student Name:");
         scanf("%s",&s.Name);
         printf("Enter Student RollNo:");
         scanf("%s",&s.Rollno);
         printf("Enter Student MobileNo:");
         scanf("%lld",&s.Mobile_no);
         printf("Enter Student Email:");
         scanf("%s",&s.Email);
         printf("Enter Student City:");
         scanf("%s",&s.City);
         printf("Enter Student Gender:");
         fflush(stdin);
         scanf("%c",&s.Gender);
         fseek(fp,-sizeof(s),SEEK_CUR);
         fwrite(&s,sizeof(s),1,fp);
         break;
     }
 }
 fclose(fp);
}
void addCourse()
{
 system("cls");
 struct course c;
 FILE *fp=fopen("course.txt","ab+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 printf("Enter Course Name:");
 fflush(stdin);
 gets(c.Name);
 printf("Enter Course Id:");
 scanf("%d",&c.Id);
 printf("Enter Course Duration:");
 fflush(stdin);
 gets(c.Duration);
 fwrite(&c,sizeof(c),1,fp);
 fclose(fp);
 printf("New Course added successfully");
}
void viewCourse()
{
 system("cls");
 struct course c;
 FILE *fp=fopen("course.txt","rb+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 while(fread(&c,sizeof(c),1,fp)==1)
 {
     printf("Course Name:%s\n",c.Name);
     printf("Course Id:%d\n",c.Id);
     printf("Course Duration:%s\n",c.Duration);

 }
 fclose(fp);
}
void modifyCourse()
{
 system("cls");
 struct course c;
 char Name[20];
 FILE *fp=fopen("course.txt","rb+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 printf("Enter the course to be modified:");
 scanf("%s",Name);
 while(fread(&c,sizeof(c),1,fp)==1)
 {
     if(strcmp(c.Name,Name)==0)
     {
         printf("Enter Course Name:");
        fflush(stdin);
        gets(c.Name);
         printf("Enter Course Id:");
         scanf("%d",&c.Id);
         printf("Enter Course Duration:");
         fflush(stdin);
         gets(c.Duration);
         fseek(fp,-sizeof(c),SEEK_CUR);
         fwrite(&c,sizeof(c),1,fp);
         break;
     }
 }
 fclose(fp);
}
void addClub()
{
 system("cls");
 struct club l;
 FILE *fp=fopen("club.txt","ab+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 printf("Enter Club Name:");
 fflush(stdin);
 gets(l.Name);
 printf("Enter Club Incharge Name:");
 fflush(stdin);
 gets(l.Incharge);
 printf("Enter Club Conducting Day:");
 fflush(stdin);
 gets(l.Day);
 fwrite(&l,sizeof(l),1,fp);
 fclose(fp);
 printf("New Club added successfully");
}
void viewClub()
{
 system("cls");
 struct club l;
 FILE *fp=fopen("club.txt","rb+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 while(fread(&l,sizeof(l),1,fp)==1)
 {
     printf("Club Name:%s\n",l.Name);
     printf("Club Incharge:%s\n",l.Incharge);
     printf("Club conducting day:%s\n",l.Day);

 }
 fclose(fp);
}
void modifyClub()
{
 system("cls");
 struct club l;
 char Name[20];
 FILE *fp=fopen("club.txt","rb+");
 if(fp==NULL)
 {
     printf("File is not available");
     exit(0);
 }
 printf("Enter the club to be modified:");
 fflush(stdin);
gets(Name);
 while(fread(&l,sizeof(l),1,fp)==1)
 {
     if(strcmp(l.Name,Name)==0)
     {
         printf("Enter Club Name:");
        fflush(stdin);
        gets(l.Name);
        printf("Enter Club Incharge name:");
        fflush(stdin);
        gets(l.Incharge);
         printf("Enter Club Conducting Day:");
         fflush(stdin);
         gets(l.Day);
         fseek(fp,-sizeof(l),SEEK_CUR);
         fwrite(&l,sizeof(l),1,fp);
         break;
     }
 }
 fclose(fp);
}

