#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 struct film
 	{
 		char movie_name[20];
 		float show_time;
		char genre[10];
		char language[10];
		float movie_ticket; 
	 };
	 int main()
	 {
            int i,n,s1;
            printf("Enter the number of movies ");
            scanf("%d",&n);
            struct film f1[n];
            for(i=0;i<n;i++)
            {
	        struct film s1;
			printf("Enter the movie name\n");
			scanf("%s",&s1.movie_name);
			printf("Enter the movie show time\n");
			scanf("%f",&s1.show_time);
			printf("Enter the genre \n ");
			scanf("%s",&s1.genre);
			printf("Enter the language\n");
			scanf("%d",&s1.language);
			printf("Enter the movie ticket price\n");
			scanf("%f",&s1.movie_ticket);
		}
		    struct film 
			{
	           printf("List the film name\n");	
		    for(i=0;i<n;i++)
			{
				printf("Film %s",i+1);
				printf("Show Time %f",s1.movie_time);
				printf("Genre %s",s1.genre);
				printf("Language %s",s1.language);
				printf("Movie Ticket %f",s1.movie_time);
	    }
			};
         return 0;
}
