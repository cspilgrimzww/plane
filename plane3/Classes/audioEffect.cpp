#include "audioEffect.h"

USING_NS_CC;


void audioEffect::addWelcomSceneEffect(){
	//���뱳������
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn") )
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
			"music/welcomeScene.mp3", true);
	}
	
}


void audioEffect::addSelectSceneEffect(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
			"music/selectScene.mp3", true);
		CocosDenshion::SimpleAudioEngine::getInstance()->setBackgroundMusicVolume(0.01);
	}
	
}


void audioEffect::addGameScene(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		if (UserDefault::getInstance()->getIntegerForKey("CheckPoint") == 1)
		{
			CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
				"music/checkPoint1.mp3", true);
		}
		else if (UserDefault::getInstance()->getIntegerForKey("CheckPoint") == 2)
		{
			CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
				"music/checkPoint2.mp3", true);

		}
		else{
			CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
				"music/checkPoint3.mp3", true);
		}
	}

	
}

void audioEffect::addEndlessGameMode(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
			"music/endlessGameMode.mp3", true);

	}
	
}
void audioEffect::addBossGameMode(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
			"music/bossGameMode.mp3", true);
	}
	
}

void audioEffect::myPlaneChoose(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic(
			"music/myPlaneChoose.mp3", true);
		CocosDenshion::SimpleAudioEngine::getInstance()->setBackgroundMusicVolume(0.3);
	}
}
	


void audioEffect::addFireEffect(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
		"music/fireEffect.mp3", false); //��ѭ��
	CocosDenshion::SimpleAudioEngine::getInstance()->setEffectsVolume(0.3);
	}
	
}
void audioEffect::whenPause(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic(
			);
	}
	
	
}

void audioEffect::whenResume(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->resumeBackgroundMusic(
			);
	}

}

void audioEffect::GameoverEffect(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
			"music/GameOver.mp3", false); //��ѭ��
	}
	
}
void audioEffect::enemyExplosion(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
			"music/enenmyexplodeEffect.mp3", false); //��ѭ��
	}
	
}

void audioEffect::bossExplosion(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{	
		CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
			"music/bossDestroyEffect.mp3", false); //��ѭ��
		CocosDenshion::SimpleAudioEngine::getInstance()->setEffectsVolume(1.0);

	}

}

void audioEffect::gainMissile(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
		"music/GainMissle.mp3", false); //��ѭ��

	}
	
}
void audioEffect::gainBulletLevelUp(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
		"music/BulletLevelUp.mp3", false); //��ѭ��
	}
	
}

void audioEffect::MissleBlowUp(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
			"music/Fly.mp3", false); //��ѭ��
	}
	
}

void audioEffect::warning(){
	if (UserDefault::getInstance()->getBoolForKey("isSoundOn"))
	{
		CocosDenshion::SimpleAudioEngine::getInstance()->playEffect(
		"music/warning.wav", false); //��ѭ��
	}
	
}

void audioEffect::stopAllAudio(){
	CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

void audioEffect::resumeAllAudio(){
	CocosDenshion::SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
