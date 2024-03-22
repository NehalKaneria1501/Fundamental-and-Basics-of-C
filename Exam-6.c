#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define p printf
struct movie 
{
    char title[20];
    char time[20];
};
char *movieTitle[20],*movieTime[20];
int movieCount=0;
int main() 
{
    struct movie aMovie={"Hello","Hello"};
    puts("Welcome to VOX cinemas");
    puts("Please enter the movie title (enter -1 to end):");
    scanf("%s" ,&aMovie.title);
    while(aMovie.title[0]!='-'||aMovie.title[1]!='1') 
	{
        puts("Please enter the movie's time");
        scanf("%s",&aMovie.time);
        movieTitle[movieCount]=aMovie.title;
        movieTime[movieCount]=aMovie.time;
        printf("movieTitle[%d]=%s\n",movieCount,movieTitle[movieCount]); 
        printf("movieTime[%d]=%s\n",movieCount,movieTime[movieCount]);  
        movieCount++;
        puts("Please enter the movie title (enter -1 to end):");
        scanf("%s",&aMovie.title);
    }
    printf("%s",movieTitle[0]);
    int numberOfMovies=movieCount;
    puts("\n\n\nMovie Title\t\tMovie Time");
    for(movieCount=0;movieCount!=numberOfMovies;movieCount++) 
	{
        printf("%s\t\t\t%s\n",movieTitle[movieCount],movieTime[movieCount]);
    }
    while(1);
}
