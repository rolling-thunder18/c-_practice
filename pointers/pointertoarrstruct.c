#include <stdio.h>
struct stud {
    int id;
    char name[20];
    float cgpa;

};

int main(){
    struct stud arr[3];
    struct stud *p;
    p=arr;
    printf("enter details for students: \n");
    for(int i=0;i<3;i++){
        printf("details of student %d: \n", i+1);
        printf("id: ");   scanf("%d",&(p+i)->id);
      
        printf("name: "); scanf("%s", &(p+i)->name);
        
        printf("cgpa: "); scanf("%f",&(p+i)->cgpa);
        

        
    }
    float avggpa=0;
    for(int i=0;i<3;i++){
        avggpa+=(p+i)->cgpa;

    }


    avggpa/=3;

printf("HERE ARE THE DETAILS FOR ALL THE STUDENTS IN THIS PLACE \n");

    for(int i=0;i<3;i++){
         printf("details of student %d: \n", i+1);
          printf("id: %d\n",(p+i)->id);
          printf("name: %s\n", (p+i)->name);
          printf("cgpa: %f\n",(p+i)->cgpa);

    }
    printf("avg cgpa of the students are: %f",avggpa);
    return 0;
}
