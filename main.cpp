#include "DxLib.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ) {
	ChangeWindowMode(true);
	if( DxLib_Init() == -1 ){
		return -1 ;
	}
	DrawString(50, 50, "西大和学園の奇跡", GetColor(255,255,255));
	WaitKey() ;				// キー入力待ち
	DxLib_End() ;				// ＤＸライブラリ使用の終了処理
	return 0 ;				// ソフトの終了 
}