//n명?
#define _CRT_SECURE_NO_WARNINGS
#define MAX_USER 2
#include <stdio.h>
struct TUser
{
	//char szName[10];
	int iIndex;
	//int iAge;
	int iKor;
	//int iEng;
	//int iMat;
	//int iTotal;
	//int iAve;
};

void Create();
void Load();
void Draw();
void Insert();

void main()
{
	//1)데이터 초기화 및 입력
	TUser userList[MAX_USER];
	userList[0].iIndex = 0;
	userList[0].iKor = 90;
	userList[1].iIndex = 1;
	userList[1].iKor = 80;
	//2)파일 생성 후 저장
	FILE* fpWrite = fopen("test.txt","w");
	//블럭단위 입출력함수
	fwrite(&userList , sizeof(TUser) , MAX_USER, fpWrite);
	for (int iuser = 0; iuser < MAX_USER; iuser++)
	{
		fprintf(fpWrite ,"% d % d \n", userList[iuser].iIndex, userList[iuser].iKor);
	}
	fclose(fpWrite);
	//3) 로드해서 저장
	FILE* fpRead = fopen("test.txt", "r");
	if (fpRead != NULL)
	{
		fread(&userList, sizeof(TUser), MAX_USER, fpRead);
		for (int iuser = 0; iuser < MAX_USER; iuser++)
		{
			fscanf(fpRead, "%d %d", &userList[iuser].iIndex, &userList[iuser].iKor);
		}
	}
	fclose(fpRead);
	//4)화면출력
	for (int iuser = 0; iuser < MAX_USER; iuser++)
	{
		printf("%d %d \n", userList[iuser].iIndex, userList[iuser].iKor);
	}
}