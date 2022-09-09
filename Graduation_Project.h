#ifndef __GRADUATION_PROJECT_H__
#define __GRADUATION_PROJECT_H__

#define N 100 //�л� ���� �迭�� �ִ� ũ�� 
#define MAX 55 //�ִ� �л� �� 
#define STD_NUM 50 //��� �л� ��

typedef struct student{
	char name[20];
	int num;
	char hometown[20];
	char food[N];
	char music[N];
	char movie[N];
	char exercise[N];
	char game[N];
	char drink[50];
	char hobby[50];
	char interest[50];
	char alcohol[30];
	char propensity[30];
	char season[30];
	int balance[6];
}STD;

typedef struct list{
	STD arr[MAX];
	int cnt; //�л� ���� ���� ���� ���� 
}List;

typedef struct load{
	STD arr[MAX];
	int cnt;
}Load_List; //�޸��忡 ����� ������ ���α׷��� �ε��Ŵ

void admin(void); //������ ��� 
void menu(void); //���� ����â 
void now(void); //���� �ð� 
int catagory(void); //ī�װ� ����â 

void Init(List *list, Load_List *load); //�ʱ�ȭ 
void Insert(FILE **fp, List *list); //�л� ���� �Է� 
void fail(void); //�߸� �Է� �� �˸� 
void Load(FILE **fp, List *list, Load_List *load); //���� ������� ����� �޸��忡 �л� ������ �Է� 
void Load_Print(Load_List *load); //�޸��忡 �����  

int password(void);
void manual(void);
void ex(void);
int balance(int arr[]);
void Random_Matching(Load_List *load);
void Current_State(Load_List *load);
int Search(Load_List *load);
void Search_Name(Load_List *load, int n);

int std_hometown(Load_List *load, char str[]);
int std_food(Load_List *load, char str[]);
int std_music(Load_List *load, char str[]);
int std_movie(Load_List *load, char str[]);
int std_exercise(Load_List *load, char str[]);
int std_game(Load_List *load, char str[]);
int std_drink(Load_List *load, char str[]);
int std_hobby(Load_List *load, char str[]);
int std_interest(Load_List *load, char str[]);
int std_alcohol(Load_List *load, char str[]);
int std_propensity(Load_List *load, char str[]);
int std_season(Load_List *load, char str[]);

char* hometown(void);
char* food(void);
char* music(void);
char* movie(void);
char* exercise(void);
char* game(void);
char* drink(void);
char* hobby(void);
char* interest(void);
char* alcohol(void);
char* propensity(void);
char* season(void);

int item(Load_List *load, int num); 
void std_data(Load_List *load, int n);

#endif
