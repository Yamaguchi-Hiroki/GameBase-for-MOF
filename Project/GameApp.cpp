/*************************************************************************//*!
					
					@file	GameApp.cpp
					@brief	��{�Q�[���A�v���B

															@author	�_�c�@��
															@date	2014.05.14
*//**************************************************************************/

//INCLUDE
#include	"GameApp.h"
#include     "GameDefine.h"

#include <vector>
#include <list>

using TexturePtr = std::shared_ptr<CTexture>;
std::vector<TexturePtr>textureArray;
std::vector<int>testArray;
std::list<int>testList;

using namespace Game;

/*************************************************************************//*!
		@brief			�A�v���P�[�V�����̏�����
		@param			None
				
		@return			TRUE		����<br>
						����ȊO	���s�A�G���[�R�[�h���߂�l�ƂȂ�
*//**************************************************************************/
MofBool CGameApp::Initialize(void){

	sceneManager.Initialize(SceneName_Title, 60);


	MOF_PRINTLOG("�z��v�f�� : %d \n",testArray.size());

	for (int i = 0; i < 3; i++)
	{
		testArray.push_back(10 + i);
		testList.push_back(10 + i);
		
	}

	for (int itr : testArray)
	{
		std::list<int>::iterator it = testList.begin();
		MOF_PRINTLOG("�z��v�f��[] : %d \n", itr);
	}

	testArray.push_back(10);

	return TRUE;
}
/*************************************************************************//*!
		@brief			�A�v���P�[�V�����̍X�V
		@param			None
				
		@return			TRUE		����<br>
						����ȊO	���s�A�G���[�R�[�h���߂�l�ƂȂ�
*//**************************************************************************/
MofBool CGameApp::Update(void){
	//�L�[�̍X�V
	g_pInput->RefreshKey();

	//�V�[���̍X�V
	sceneManager.Update();

	return TRUE;
}
/*************************************************************************//*!
		@brief			�A�v���P�[�V�����̕`��
		@param			None
				
		@return			TRUE		����<br>
						����ȊO	���s�A�G���[�R�[�h���߂�l�ƂȂ�
*//**************************************************************************/
MofBool CGameApp::Render(void){
	//�`��J�n
	g_pGraphics->RenderStart();
	//��ʂ̃N���A
	g_pGraphics->ClearTarget(0.0f,0.0f,1.0f,0.0f,1.0f,0);

	//�V�[���̕`��
	sceneManager.Render();

	//�`��̏I��
	g_pGraphics->RenderEnd();
	return TRUE;
}
/*************************************************************************//*!
		@brief			�A�v���P�[�V�����̉��
		@param			None
				
		@return			TRUE		����<br>
						����ȊO	���s�A�G���[�R�[�h���߂�l�ƂȂ�
*//**************************************************************************/
MofBool CGameApp::Release(void){

	sceneManager.Release();
	return TRUE;
}