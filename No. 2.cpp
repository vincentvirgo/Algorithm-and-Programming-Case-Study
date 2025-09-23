#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
	char location[100];
	char city[100];
	int price;
	int room;
	int bathroom;
	int carpark;
	char type[100];
	char furnish[100];
};

//Function untuk display data berdasarkan rows yang diinput, jika rows lebih besar dari total data maka akan di display semua data
void displayData(struct data list[],int row,int index)
{
	if(row>index)
	{
		printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
					
		for(int i =0;i<index;i++)
		{
			printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
						
		}
	}
	else{
			printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
					
			for(int i =0;i<row;i++)
			{	
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
			}
		}
}

//Function untuk melakukan searching data berdasarkan column yang dipilih dan melakukan display semua data yang tercari
void searchTarget(struct data list[],int index,char column[])
{
	int found;
	if(strcmp(column,"Location") == 0)
	{
		char targetLocation[100];
		printf("What data do you want to find? ");
		scanf("%s",&targetLocation); getchar();
		found = 0;
		for(int i =0;i<index;i++)
		{
			if(strcmp(list[i].location,targetLocation)==0)
			{
				if(strcmp(list[i].location,targetLocation)==0 && found == 0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
								
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	
	else if(strcmp(column,"City")==0)
	{
		char targetCity[100];
		printf("What data do you want to find? ");
		scanf("%s",&targetCity); getchar();
		found = 0;
		for(int i =0;i<index;i++)
		{
			if(strcmp(list[i].city,targetCity) == 0)
			{
				if(strcmp(list[i].city,targetCity) == 0 && found==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	else if(strcmp(column,"Price")==0)
	{
		int targetPrice;
		printf("What data do you want to find? ");
		scanf("%d",&targetPrice); getchar();
		found = 0;
		for(int i =0;i<index;i++)
		{
			if(list[i].price == targetPrice)
			{
				if(list[i].price == targetPrice && found ==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	else if(strcmp(column,"Rooms")==0)
	{
		int targetRoom;
		printf("What data do you want to find? ");
		scanf("%d",&targetRoom); getchar();
		found =0;
		for(int i =0;i<index;i++)
		{
			if(list[i].room == targetRoom)
			{
				if(list[i].room == targetRoom && found ==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	else if(strcmp(column,"Bathroom")==0)
	{
		int targetBathroom;
		printf("What data do you want to find? ");
		scanf("%d",&targetBathroom); getchar();
		found =0;
		for(int i =0;i<index;i++)
		{
			if(list[i].bathroom == targetBathroom)
			{
				if(list[i].bathroom == targetBathroom && found ==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	else if(strcmp(column,"Carpark")==0)
	{
		int targetCarpark;
		printf("What data do you want to find? ");
		scanf("%d",&targetCarpark); getchar();
		found =0;
		for(int i =0;i<index;i++)
		{
			if(list[i].carpark == targetCarpark)
			{
				if(list[i].carpark == targetCarpark && found ==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	else if(strcmp(column,"Type")==0)
	{
		char targetType[100];
		printf("What data do you want to find? ");
		scanf("%s",&targetType); getchar();
		found = 0;
		for(int i =0;i<index;i++)
		{
			if(strcmp(list[i].type,targetType) == 0)
			{
				if(strcmp(list[i].type,targetType) == 0 && found==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	else if(strcmp(column,"Furnish")==0)
	{
		char targetFurnish[100];
		printf("What data do you want to find? ");
		scanf("%s",&targetFurnish); getchar();
		found = 0;
		for(int i =0;i<index;i++)
		{
			if(strcmp(list[i].furnish,targetFurnish) == 0)
			{
				if(strcmp(list[i].furnish,targetFurnish) == 0 && found==0)
				{
					printf("Data found. Detail of data:\n");
					printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
				}
				printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
				found++;
			}
		}
	}
	if(found < 1)
	{
		printf("Data not found!\n");
	}
}

//Function untuk melakukan sorting data secara ascending/descending berdasarkan inputan dan column yang dipilih 
void sortTarget(struct data list[],int index,char column[],char sort[])
{
	int found;
	if(strcmp(column,"Location") == 0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].location,list[j].location) > 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].location,list[j].location) < 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	
	else if(strcmp(column,"City")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].city,list[j].city) > 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].city,list[j].city) < 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	else if(strcmp(column,"Price")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].price > list[j].price)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].price < list[j].price)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	else if(strcmp(column,"Rooms")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].room > list[j].room)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].room < list[j].room)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	else if(strcmp(column,"Bathroom")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].bathroom > list[j].bathroom)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].bathroom < list[j].bathroom)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	else if(strcmp(column,"Carpark")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].carpark > list[j].carpark)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(list[i].carpark < list[j].carpark)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	else if(strcmp(column,"Type")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].type,list[j].type) > 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].type,list[j].type) < 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	else if(strcmp(column,"Furnish")==0)
	{
		found = 0;
		if(strcmp(sort,"asc")==0)
		{
		
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].furnish,list[j].furnish) > 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
		else if(strcmp(sort,"desc")==0)
		{
			for(int i =0;i<index-1;i++)
			{
				for(int j =i+1;j<index;j++)
				{
					if(strcmp(list[i].furnish,list[j].furnish) < 0)
					{
						struct data temp = list[i];
						list[i] = list[j];
						list[j] = temp;
					}
				}
			}
		}
	}
	for(int i =0;i<10;i++)
	{
		if(found == 0)
		{
			printf("Data found. Detail of data:\n");
			printf("%-25s %-15s %-10s %-8s %-10s %-10s %-10s %-10s\n","Location","City","Price","Rooms","Bathroom","Carpark","Type","Furnish");
		}
									
		printf("%-25s %-15s %-10d %-8d %-10d %-10d %-10s %-10s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
		found++;
	}
}

//Function untuk mengexport data kepada file baru yang nama file diinput
void exportData(struct data list[],int index,char fileName[])
{
	char name[101], file[101];
    strcpy(name, fileName);
    strcpy(file, ".csv");

	FILE *fp2 = fopen(strcat(name,file),"w");
	for(int i =0;i<index;i++)
	{
		fprintf(fp2,"%s,%s,%d,%d,%d,%d,%s,%s\n",list[i].location,list[i].city,list[i].price,list[i].room,list[i].bathroom,list[i].carpark,list[i].type,list[i].furnish);
	}
	fclose(fp2);
	printf("Data successfully written to file %s.csv!\n",fileName);
	
}
int main()
{
	int index = 0;
	struct data list[4000];
	int choose,row,valid;
	char column[100];
	char fileName[100];
	char sort[100];
	//read file
	FILE *fp = fopen("file.csv","r");
	if(fp == NULL)
	{
		perror("Error");
	}
	else{
		fscanf(fp,"%*[^\n]\n");
		while(!feof(fp))
		{

			fscanf(fp,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%s\n",&list[index].location,&list[index].city,&list[index].price,&list[index].room,&list[index].bathroom,&list[index].carpark,&list[index].type,&list[index].furnish);
			index++;
			
		}
		fclose(fp);
	}
	
	do{
		system("cls");
		printf("What do you want to do?\n");
		printf("1. Display data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		
		do{
			printf("Your choice: ");
			scanf("%d",&choose); getchar();
		} while(choose > 5 || choose < 1);

		switch(choose)
		{
			case 1:
				if(index ==0){
					printf("No Data\n");
				}
				else{
					do{
						printf("Number of rows: ");
						scanf("%d",&row); getchar();
					}while(row<1);
					displayData(list,row,index);
					}
				break;
				
			case 2:
					do{
							
						valid = 0;
						printf("Choose column: ");
						scanf("%s",&column); getchar();
						if(strcmp(column,"Location")==0 || strcmp(column,"City")==0 || strcmp(column,"Price")==0 || strcmp(column,"Rooms")==0 || strcmp(column,"Bathroom")==0 || strcmp(column,"Carpark")==0 || strcmp(column,"Type")==0 || strcmp(column,"Furnish")==0)
						{
							valid++;
						}
					}while(valid==0);
					searchTarget(list,index,column);	
					break;
				
			case 3:
				do{
					valid = 0;
					printf("Choose column: ");
					scanf("%s",&column); getchar();
					if(strcmp(column,"Location")==0 || strcmp(column,"City")==0 || strcmp(column,"Price")==0 || strcmp(column,"Rooms")==0 || strcmp(column,"Bathroom")==0 || strcmp(column,"Carpark")==0 || strcmp(column,"Type")==0 || strcmp(column,"Furnish")==0)
					{
						valid++;
					}
				}while(valid==0);
				do{
					valid =0;
					printf("Sort ascending or descending? ");
					scanf("%s",&sort); getchar();
					if(strcmp(sort,"asc")==0 || strcmp(sort,"desc")==0)
					{
						valid++;
					}
				}while(valid==0);
				sortTarget(list,index,column,sort);
				break;
			
			case 4:
				printf("File name: ");
				scanf("%s",&fileName); getchar();
				exportData(list,index,fileName);
				break;
			
		}
		getchar();
	}while(choose!=5);
	return 0;
}
