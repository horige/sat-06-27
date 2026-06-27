#pragma once
enum class JudgeResult
{
	Hit,
	Blow
};

// ランダム数と入力数を比較.
JudgeResult *CompareHitNumber(int *randomNumber, int *playerNumber);
JudgeResult *CompareBlowNumber(int *randomNumber, int *playerNumber);

// ヒット数とブロー数をカウントする変数.
static int HitCount;
static int BlowCount;

// 結果を表示.
void ShowResult(JudgeResult result);
