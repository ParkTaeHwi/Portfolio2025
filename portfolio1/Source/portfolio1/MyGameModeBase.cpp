// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"

AMyGameModeBase::AMyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AMyCharacter> pawn	// static -> �����ڰ� ������ ȣ��Ǿ �� ���� �����ϰ� ���ִ� ����
	(TEXT("/Game/BluePrint/BP_MyCharacter.BP_MyCharacter_C"));	// BluePrint Class Type�� ������ �� _C�� ��������

	if (pawn.Succeeded())	// �������Ʈ Ŭ������ ã�Ҵٸ�
	{
		DefaultPawnClass = pawn.Class;	// ã�� �������Ʈ Ŭ������ ����Ʈ�� ����
	}
}
