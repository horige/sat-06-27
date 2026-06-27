//‚¿‚å‚í‚æ
//#include "header.h"
#include <stdio.h>
#include "judge.h"

/// <summary>
/// C++—ñ‹“Œ^Ql: https://af-e.net/cpp-enum-class/
/// </summary>
/// <param name="randomNumber"></param>
/// <param name="playerNumber"></param>
/// <returns></returns>
JudgeResult *CompareHitNumber(int *randomNumber, int *playerNumber)
{
	if (*playerNumber == *randomNumber)
	{ // “ü—Í”‚ª—”‚Æˆê’v‚µ‚Ä‚¢‚½‚ç.
		return new JudgeResult(JudgeResult::Hit);
	}
}

JudgeResult *CompareBlowNumber(int *randomNumber, int *playerNumber)
{
	if (*playerNumber == *randomNumber)
	{ // “ü—Í”‚ª—”‚Æˆê’v‚µ‚Ä‚¢‚½‚ç.
		return new JudgeResult(JudgeResult::Blow);
	}
}

void ShowResult(JudgeResult result)
{
	switch (result)
	{
	case JudgeResult::Hit:
		printf("ƒqƒbƒg\n");
		HitCount++;
		break;
	case JudgeResult::Blow:
		printf("ƒuƒ[\n");
		BlowCount++;
		break;
	}
}