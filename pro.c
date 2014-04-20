# include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define no 2
struct courses{

int course_code;
int feedback;
int difficulty_level;
int *group;
int group_point;
int no_of_courses;
int selection_point;
};
struct student{
char name[20];
long roll;
int cpi;
int year;
int *group;
int no_of_courses;
};
int main()
{

courses years[4][no], first[no], second [no], third[no], fourth[no];
//taking inputs about the course details.
for(int i=0; i<4; i++)
{
cout<<"\n Enter the details of the courses in year "<<i+1<<":\n";
for(int j=0; j<no; j++)
{
   cout<<"--------------------------------";
   cout<<"\n Enter the course code:\t";
   cin>>years[i][j].course_code;
   cout<<"\n Enter the feedback points for the course:\t";
   cin>>years[i][j].feedback;
   cout<<"\n Enter the difficulty level of the course:\t";
   cin>>years[i][j].difficulty_level;
   cout<<"\n Enter the number of courses in the group:\t";
   cin>>years[i][j].no_of_courses;
   years[i][j].group= (int *) malloc(sizeof(int)*years[i][j].no_of_courses);

   if(years[i][j].no_of_courses>0){
   cout<<"\n Enter the course codes of the courses in this group:\t";
   for(int k=0; k<years[i][j].no_of_courses; k++){
   cout<<"\n Enter the code for subject #"<<k+1<<":\t";
   cin>>years[i][j].group[k];
   }
   years[i][j].selection_point=years[i][j].feedback;
}
}
}
for(int i=0; i<4; i++)
{
cout<<"\n The details of the courses in year "<<i+1<<" are:\n";
for(int j=0; j<no; j++)
{
   cout<<"---------------------------------";
   cout<<"\n course code:\t"<<years[i][j].course_code;
   cout<<"\n course difficulty level:\t"<<years[i][j].difficulty_level;
   cout<<"\n course feedback point:\t"<<years[i][j].feedback;

   if(years[i][j].no_of_courses>0){
   cout<<"\n The courses in this courses group are:";
   for(int k=0; k< years[i][j].no_of_courses; k++)
   {
       cout<<"\n course code:\t"<<years[i][j].group[k];
   }
}
cout<<endl;
}

}

/*
//2nd year
cout<<"\n Enter the details of the second year courses:\n";
for(int i=0; i<no; i++)
{
   cout<<"--------------------------------";
   cout<<"\n Enter the course code:\t";
   cin>>second[i].course_code;
   cout<<"\n Enter the feedback points for the course:\t";
   cin>>second[i].feedback;
   cout<<"\n Enter the difficulty level of the course:\t";
   cin>>second[i].difficulty_level;
   cout<<"\n Enter the number of courses in the group:\t";
   cin>>second[i].no_of_courses;
   first[i].group= (int *) malloc(sizeof(int)*second[i].no_of_courses);

   if(second[i].no_of_courses>0){
   cout<<"\n Enter the course codes of the courses in this group:\t";
   for(int j=0; j<second[i].no_of_courses; j++){
   cout<<"\n Enter the code for subject #"<<j+1<<":\t";
   cin>>second[i].group[j];
   }
   second[i].selection_point=second[i].feedback;
}
}

cout<<"\n The details of the courses in second year are:\n";
for(int i=0; i<no; i++)
{
   cout<<"---------------------------------";
   cout<<"\n course code:\t"<<second[i].course_code;
   cout<<"\n course difficulty level:\t"<<second[i].difficulty_level;
   cout<<"\n course feedback point:\t"<<second[i].feedback;

   if(second[i].no_of_courses>0){
   cout<<"\n The courses in this courses group are:";
   for(int j=0; j< second[i].no_of_courses; j++)
   {
       cout<<"\n course code:\t"<<second[i].group[j];
   }
}
}
//3rd year
cout<<"\n Enter the details of the third year courses:\n";
for(int i=0; i<no; i++)
{
   cout<<"--------------------------------";
   cout<<"\n Enter the course code:\t";
   cin>>third[i].course_code;
   cout<<"\n Enter the feedback points for the course:\t";
   cin>>third[i].feedback;
   cout<<"\n Enter the difficulty level of the course:\t";
   cin>>third[i].difficulty_level;
   cout<<"\n Enter the number of courses in the group:\t";
   cin>>third[i].no_of_courses;
   third[i].group= (int *) malloc(sizeof(int)*third[i].no_of_courses);
   if(third[i].no_of_courses>0){
   cout<<"\n Enter the course codes of the courses in this group:\t";
   for(int j=0; j<third[i].no_of_courses; j++){
   cout<<"\n Enter the code for subject #"<<j+1<<":\t";
   cin>>third[i].group[j];
   }
   third[i].selection_point=third[i].feedback;
}
}
cout<<"\n The details of the courses in third year are:\n";
for(int i=0; i<no; i++)
{
   cout<<"---------------------------------";
   cout<<"\n course code:\t"<<third[i].course_code;
   cout<<"\n course difficulty level:\t"<<third[i].difficulty_level;
   cout<<"\n course feedback point:\t"<<third[i].feedback;

   if(third[i].no_of_courses>0){
   cout<<"\n The courses in this courses group are:";
   for(int j=0; j< third[i].no_of_courses; j++)
   {
       cout<<"\n course code:\t"<<third[i].group[j];
   }
}
}
//4th year
cout<<"\n Enter the details of the fourth year courses:\n";
for(int i=0; i<no; i++)
{
   cout<<"--------------------------------";
   cout<<"\n Enter the course code:\t";
   cin>>fourth[i].course_code;
   cout<<"\n Enter the feedback points for the course:\t";
   cin>>fourth[i].feedback;
   cout<<"\n Enter the difficulty level of the course:\t";
   cin>>fourth[i].difficulty_level;
   cout<<"\n Enter the number of courses in the group:\t";
   cin>>fourth[i].no_of_courses;
   fourth[i].group= (int *) malloc(sizeof(int)*fourth[i].no_of_courses);

   if(fourth[i].no_of_courses>0)
   {
   cout<<"\n Enter the course codes of the courses in this group:\t";
   for(int j=0; j<fourth[i].no_of_courses; j++){
   cout<<"\n Enter the code for subject #"<<j+1<<":\t";
   cin>>fourth[i].group[j];
   }
   fourth[i].selection_point=fourth[i].feedback;
   }
}

cout<<"\n The details of the courses in fourth year are:\n";
for(int i=0; i<no; i++)
{
   cout<<"---------------------------------";
   cout<<"\n course code:\t"<<fourth[i].course_code;
   cout<<"\n course difficulty level:\t"<<fourth[i].difficulty_level;
   cout<<"\n course feedback point:\t"<<fourth[i].feedback;
   if(fourth[i].no_of_courses>0)
   {
      cout<<"\n The courses in this courses group are:";

      for(int j=0; j< fourth[i].no_of_courses; j++)
      {
       cout<<"\n course code:\t"<<fourth[i].group[j];
      }
   }
}

*/




//student input
student a;
cout<<"\n Enter Student's name:\t";
cin>>a.name;
cout<<"\n Enter Student's roll number:\t";
cin>>a.roll;
cout<<"\n Enter Student's current cpi:\t";
cin>>a.cpi;
cout<<"\n Enter Student's year:\t";
cin>>a.year;
cout<<"\n Enter the number of courses taken in the past:\t";
cin>>a.no_of_courses;
a.group= (int *) malloc(sizeof(int)*a.no_of_courses);
if(a.no_of_courses>0)
{
cout<<"\n Enter the course codes of the courses taken in the past:\t";
for(int j=0; j<a.no_of_courses; j++){
cout<<"\n Enter the code for subject #"<<j+1<<":\t";
cin>>a.group[j];
}
}
cout<<"\n Name:\t"<<a.name<<"\n Roll:\t"<<a.roll<<"\n CPI:\t"<<a.cpi<<"\n Year:\t"<<a.year;
if(a.no_of_courses>0)
{
cout<<"\n The course codes of the courses taken in the past are:\n";
for(int j=0; j<a.no_of_courses; j++){
cout<<"\n Subject #"<<j+1<<":\t "<<a.group[j];
}
}


return 0;
}
