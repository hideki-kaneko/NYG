#include "DxLib.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ) {
	ChangeWindowMode(true);
	if( DxLib_Init() == -1 ){
		return -1 ;
	}
	DrawString(50, 50, "����a�w���̊��", GetColor(255,255,255));
	WaitKey() ;				// �L�[���͑҂�
	DxLib_End() ;				// �c�w���C�u�����g�p�̏I������
	return 0 ;				// �\�t�g�̏I�� 
}