//n��?
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
	//1)������ �ʱ�ȭ �� �Է�
	TUser userList[MAX_USER];
	userList[0].iIndex = 0;
	userList[0].iKor = 90;
	userList[1].iIndex = 1;
	userList[1].iKor = 80;
	//2)���� ���� �� ����
	FILE* fpWrite = fopen("test.txt","w");
	//������ ������Լ�
	fwrite(&userList , sizeof(TUser) , MAX_USER, fpWrite);
	for (int iuser = 0; iuser < MAX_USER; iuser++)
	{
		fprintf(fpWrite ,"% d % d \n", userList[iuser].iIndex, userList[iuser].iKor);
	}
	fclose(fpWrite);
	//3) �ε��ؼ� ����
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
	//4)ȭ�����
	for (int iuser = 0; iuser < MAX_USER; iuser++)
	{
		printf("%d %d \n", userList[iuser].iIndex, userList[iuser].iKor);
	}
}