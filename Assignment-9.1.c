#include<stdio.h>
		struct stud_result
			{
				int er_no;
				char stud_name[20];
				int phy_mrks;
				int chem_mrks;
				int math_mrks;
				int avg_mrks;
				int total_mrks;
				float percentage;
				char result_grade;
				
			};
	int main()
		{
			int i;
			char d,f;
			struct stud_result s1;
			printf("Enter the Student Name\n");
			scanf("%s",s1.stud_name);
			printf("Enter the Enrollment Number\n");
			scanf("%d",&s1.er_no);
			printf("Enter the Physics Marks\n ");
			scanf("%d",&s1.phy_mrks);
			printf("Enter the Chemistry Marks\n");
			scanf("%d",&s1.chem_mrks);
			printf("Enter the Mathematics Marks\n");
			scanf("%d",&s1.math_mrks);
			printf("Enter the Average Marks");
			scanf("%d",&s1.avg_mrks);
			printf("Enter the Total Marks\n");
			scanf("%d",&s1.total_mrks);
			printf("Enter the Percentage\n");
			scanf("%f",&s1.percentage);
			printf("Enter the Result Grade\n");
			scanf("%c",&s1.result_grade);
			    if(s1.percentage>=35)
			    	{
			    		printf("Yeah! you had clear your exam");
					}
					 else if(s1.percentage <=34)
					 	{
					 		printf("Opps! you had not clear your exam");
						 }
						else if(s1.avg_mrks>=100)
							{
								printf("You are eligibale for further studies");
							}
							else if(s1.avg_mrks<=99)
								{
									printf("You are not eligible for further studies");
								}
								else if(s1.result_grade>=d)
									{
										printf("Your result is pass");
									}
									else if(s1.result_grade<=f)
										{
											printf("Your result is fail");
										}
								 else
								 	{
								 		printf("You are eligible for undergrad");
									 }
					for(i=0;i<5;i++)
					 {
						printf("%s stud_result. Enter the Student Name\n",s1.stud_name);
						printf("%d stud_result.Enter the Enrollment Number \n",s1.er_no);
						printf("%d stud_result. Enter the Physics Marks\n",s1.phy_mrks);
						printf("%d stud_result.Enter the Chemistry Marks\n",s1.chem_mrks);
						printf("%d stud_result.Enter the Mathematics Marks\n",s1.math_mrks);
                        printf("%d stud_result.Enter the Average Marks\n",s1.avg_mrks);
						printf("%d stud_result.Total Marks\n",s1.total_mrks);
						printf("%f stud_result.Percentage\n",s1.percentage);
						printf("%c stud_result.Result Grade\n ",s1.result_grade);	
					 }
					  for(i=0;i<5;i++)
					   {
					  	printf("Enter the Student results\n");
					  	float percentage=(s1.phy_mrks+s1.chem_mrks+s1.math_mrks)/300*100;
					   }
 return 0;
}
