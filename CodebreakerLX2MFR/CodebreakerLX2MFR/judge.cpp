//ちょわよ
//ちょわよ
//#include "header.h"
#include <stdio.h>
#include "judge.h"
bool IsGameClear = false;

/// <summary>
/// C++列挙型参考: https://af-e.net/cpp-enum-class/
/// </summary>
/// <param name="randomNumber"></param>
/// <param name="playerNumber"></param>
/// <returns></returns>
JudgeResult *CompareHitNumber(int *randomNumber, int *playerNumber)
{
	printf("乱数: %d\n", *randomNumber);
	printf("入力数: %d\n", *playerNumber);
	if (*playerNumber == *randomNumber)
	{ // 入力数が乱数と一致していたら.
		return new JudgeResult(JudgeResult::Hit);
	}
	else
	{
		return new JudgeResult(JudgeResult::miss);
	}
}

JudgeResult *CompareBlowNumber(int *randomNumber, int *playerNumber)
{
	if (*playerNumber == *randomNumber)
	{ // 入力数が乱数と一致していたら.
		return new JudgeResult(JudgeResult::Blow);
	}
	else
	{
		return new JudgeResult(JudgeResult::miss);
	}
}

void ShowResult(JudgeResult result)
{
	for(int i = 0; i < 4; i++)
	{
		switch (result)
		{
		case JudgeResult::Hit:
			printf("ヒット\n");
			HitCount++;
		case JudgeResult::Blow:
			printf("ブロー\n");
			BlowCount++;
		case JudgeResult::miss:
			printf("ヒット数: %d\n", HitCount);
			printf("ブロー数: %d\n", BlowCount);
			break;
		}
	}
	if(HitCount == 4)
	{
		IsGameClear = true;
	}
	else {
		HitCount = 0;
		BlowCount = 0;
	}
}