//#include "header.h"
#include "input.h"
#include "judge.h"
#include "random.h"
int main()
{
	// ０〜９の中から数値を４つランダムに抽選する
	int* _randomNumber1 = _RandomNumberPointer();
	int* _randomNumber2 = _RandomNumberPointer();
	int* _randomNumber3 = _RandomNumberPointer();
	int* _randomNumber4 = _RandomNumberPointer();

	// ランダム数と入力数が一致するまでプレイヤーの入力を繰り返す.
	while (true)
	{
		// プレイヤーの入力数のポインタを取得.
		int* _playerNumber1 = _PlayerNumberPointer();
		int* _playerNumber2 = _PlayerNumberPointer();
		int* _playerNumber3 = _PlayerNumberPointer();
		int* _playerNumber4 = _PlayerNumberPointer();


		// ランダム数と入力数のポインタを比較してヒット数を確認.
		JudgeResult result1 = *CompareHitNumber(_randomNumber1, _playerNumber1);
		JudgeResult result2 = *CompareHitNumber(_randomNumber2, _playerNumber2);
		JudgeResult result3 = *CompareHitNumber(_randomNumber3, _playerNumber3);
		JudgeResult result4 = *CompareHitNumber(_randomNumber4, _playerNumber4);
		ShowResult(result1);
		ShowResult(result2);
		ShowResult(result3);
		ShowResult(result4);
		//if (result == JudgeResult::Correct)
		//{ // ゲームクリアしたら終了.
		//	break;
		//}
	}
}