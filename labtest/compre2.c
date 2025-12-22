#include <stdio.h>
#define NUM_MATCHES 3
typedef struct {
 char name[20];
 int jersy_no;
 int goals[NUM_MATCHES];
 char country[20];
 int total_goals;
} Player;
void Score(Player p[], int n) { //Function to calculate the total goals of each player
 for(int k=0;k<n;k++)
 {
    p[k].total_goals=0;
    for(int j=0;j<NUM_MATCHES;j++){
        p[k].total_goals+=p[k].goals[j];

    }
 }
}
void readInfo(Player p[], int n) { //Function to read each player’s info
 for(int i=0;i<n;i++)
 {
 printf("Enter the name, jersy_no, and country name of each player\n");
 printf("name: ");
 scanf(" %[^\n]",p[i].name);

getchar();

printf("jersy number: ");

scanf(" %d",&p[i].jersy_no);
printf("country name: ");
scanf(" %[^\n]",p[i].country);
getchar();


//
printf("Enter the goal records for each player\n");
for(int j=0;j<NUM_MATCHES;j++){
    scanf("%d",&p[i].goals[j]);

}
 }
 Score(p,n);
}


int maxGoals(Player p[], int n) { //Function to return the index (pos) of the player with maximum goals
 int max=p[0].total_goals, pos=0;
 for(int i=0;i<n;i++){
    if(max<p[i].total_goals){
        max=p[i].total_goals;
        pos=i;

    }

}

return pos;
}
int main() {
 int num_players;
 printf("enter number of players: ");

 scanf("%d", &num_players);
 Player p[num_players];
 readInfo(p, num_players);
 int k=maxGoals(p, num_players);
 printf("Details of the highest Goal Scorer\n");
 printf("Name: %s \t jersy_no:%d \t Country:%s\t Total Goals:%d\n ", p[k].name, p[k].jersy_no, p[k].country,p[k].total_goals);
 return 0;
} 