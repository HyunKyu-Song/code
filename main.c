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
		
		printf("선택: ");
		scanf("%d", &select);
		
		system("cls");
		
		switch(select)
		{
			case 0:
				if(password())
				{
					admin();
					
					printf("\n선택: ");
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
				printf(" - 프로그램이 종료되었습니다 -\n\n");
				printf("================================\n\n\n\n\n");
				break;
			default:
				fail();
		}
		if(select == 6)
			break;
		printf("\nEnter...");
		fflush(stdin); //번호 입력 대신 문자로 잘못 입력시 무한루프에 빠짐을 해결해줌 
		getch();
	}
	return 0;
}
