#pragma once
#include "SceneBase.h"

namespace Game
{
	// �V�[���Ǘ��N���X
	class SceneManager
	{
	private:
		// ���ݎ��s����Ă���V�[��
		ScenePtr currentScene;
		// �ύX����s�����V�[��
		ScenePtr nextScene;
		// �G�t�F�N�g�����t���O
		bool effectStart;
		// �G�t�F�N�g�����t���O
		bool effectInStart;
		// �G�t�F�N�g�����t���O
		bool effectOutStart;
		// �V�[���G�t�F�N�g���s�t���[��
		int waitCount;
		// �V�[���G�t�F�N�g�J�E���^
		int effectCount;
	public:
		// �R���X�g���N�^
		SceneManager();
		// �f�X�g���N�^
		~SceneManager();
		// ������
		void Initialize(int sceneNo, int wait);
		// �X�V
		void Update();
		// �`��
		void Render();
		// ���
		void Release();
		// �V�[���̐���
		ScenePtr Create(int sceneNo);

	};
}

