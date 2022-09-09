#ifndef __GRADUATION_PROJECT_H__
#define __GRADUATION_PROJECT_H__

#define N 100 //학생 정보 배열의 최대 크기 
#define MAX 55 //최대 학생 수 
#define STD_NUM 50 //출력 학생 수

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
	int cnt; //학생 수를 세기 위한 변수 
}List;

typedef struct load{
	STD arr[MAX];
	int cnt;
}Load_List; //메모장에 저장된 정보를 프로그램에 로드시킴

void admin(void); //관리자 모드 
void menu(void); //메인 선택창 
void now(void); //현재 시간 
int catagory(void); //카테고리 선택창 

void Init(List *list, Load_List *load); //초기화 
void Insert(FILE **fp, List *list); //학생 정보 입력 
void fail(void); //잘못 입력 시 알림 
void Load(FILE **fp, List *list, Load_List *load); //파일 입출력을 사용해 메모장에 학생 정보를 입력 
void Load_Print(Load_List *load); //메모장에 저장된  

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
