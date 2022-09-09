#include <stdio.h>
#include "Graduation_Project.h"

int main(void){
	
	List list;
	Load_List load;
	FILE *fp;
	int select, num;
	char *p;
	
	Init(&list, &load);
	Load(&fp, &list, &load);
	
	while(1)
	{
		system("cls");
		menu();
		
		printf("����: ");
		scanf("%d", &select);
		
		system("cls");
		
		switch(select)
		{
			case 0:
				if(password())
				{
					admin();
					
					printf("\n����: ");
					scanf("%d", &select);
					system("cls");
					
					if(select == 1)
						Load_Print(&load);
					else if(select == 2)
						Insert(&fp, &list);
					else if(select == 3)
						Load(&fp, &list, &load);
				}
				break;
			case 1:
				num = catagory();
				if(num == -1)
					fail();
				else
				{
					num = item(&load, num);
					if(num == 0)
						;
					else if(num == -1)
						fail();
					else
						std_data(&load, num);
				}
				break;
			case 2:
				num = Search(&load);
				Search_Name(&load, num);
				break;
			case 3:
				Random_Matching(&load);
				break;
			case 4:
				Current_State(&load);
				break;
			case 5:
				manual(); 
				break;	
			case 6:
				system("cls");
				printf("\n\n\n\n================================\n\n");
				printf(" - ���α׷��� ����Ǿ����ϴ� -\n\n");
				printf("================================\n\n\n\n\n");
				break;
			default:
				fail();
		}
		if(select == 6)
			break;
		printf("\nEnter...");
		fflush(stdin); //��ȣ �Է� ��� ���ڷ� �߸� �Է½� ���ѷ����� ������ �ذ����� 
		getch();
	}
	return 0;
}
