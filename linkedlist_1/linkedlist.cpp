#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>


struct User
{
	int Index;
	int Kor;
	User* Next;
};

int userCount = 0;
User* HeadUList = 0;
User* EndU = 0;
int num = 0;

void DeleteAll();
// 1)������ �ʱ�ȭ �� �Է�
FILE* Create();
// 3) �ε��ؼ� ����
void Load();
// 4) ȭ�� ���
void Draw();


void main()
{
	bool run = true;
	while (run)
	{
		int select = 0;
		printf("\n����(0),���(1),����(2),�߰�(3),�ε�(4),����(5),�˻�(6),����(7),����(99) :");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
		{
			FILE* fp = Create();
			DeleteAll();
			printf("������ �����Ǿ� ���ϴ�");
		}break;

		case 1:
		{
			Load();
			Draw();
			DeleteAll();
		}break;

		default:
		{

		}break;
		}
	}
	//1)������ �ʱ�ȭ �� �Է�
	//FILE* fp = Create();
	//DeleteAll();
	//2)�߰�
	//3)�ε��ؼ� ����
	//Load();
	//4)ȭ�����
	//Draw();
	//DeleteAll();
}


void AddLink()
{
	User* Nuser = (User*)malloc(sizeof(User));
	Nuser->Index = userCount + 1;
	Nuser->Kor = rand() % 100;
	Nuser->Next = NULL;

	if (HeadUList == NULL)
	{
		HeadUList = Nuser;
		EndU = Nuser;
		userCount++;
		return;
	}
	EndU->Next = Nuser;
	EndU = Nuser;
	userCount++;
}

FILE* Create()
{
	num = 0;
	userCount = 0;
	printf("������ ���� �Է� : ");
	scanf("%d", &num);
	for (int Uc = 0; Uc < num; Uc++)
	{
		AddLink();
	}

	FILE* fpWrite = fopen("test.txt", "r+b");
	if (fpWrite == NULL)
	{
		fpWrite = fopen("test.txt", "wb");
		for (User* Nuser = HeadUList; Nuser != NULL; Nuser = Nuser->Next)
		{
			fwrite(Nuser, sizeof(User), 1, fpWrite);
		}
		//fseek(fpWrite, 0, SEEK_SET);
	}
	fclose(fpWrite);
	return fpWrite;
}

void DeleteAll()
{
	while (HeadUList->Next)
	{
		User* FreeNode = HeadUList->Next;
		User* NextNode = FreeNode->Next;
		HeadUList->Next = NextNode;
		free(FreeNode);
		FreeNode = NULL;
	}
	free(HeadUList);
	HeadUList = NULL;
}

void Load()
{
	FILE* fpRead = fopen("test.txt", "rb");
	if (fpRead != NULL)
	{
		User* Nuser = (User*)malloc(sizeof(User));
		fread(Nuser, sizeof(User), 1, fpRead);
		HeadUList = Nuser;
		EndU = Nuser;

		for (EndU=Nuser;EndU->Next!=NULL;)
		{
			User* Nuser = (User*)malloc(sizeof(User));
			fread(Nuser, sizeof(User), 1, fpRead);
			Nuser->Next = NULL;
			EndU->Next = Nuser;
			EndU = Nuser;
		}
	}
}

void Draw()
{
	for (User* Puser = HeadUList; Puser != NULL; Puser = Puser->Next)
	{
		printf("%d %d\n", Puser->Index, Puser->Kor);
	}
}
friend void operator <<(std::ostream& os, const PUser& data);