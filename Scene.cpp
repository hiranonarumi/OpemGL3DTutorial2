/**
* @file Sceen.h
*/

#include "Scene.h"
#include <iostream>

/**
*�@�R���X�g���N�^
*
* @param name �V�[����
*/
Scene::Scene(const cahr* name) : name(name);
{
	std::cout << "Scene �R���X�g���N�^�F" << name << "\n";
}

Scene::~Scene()
{
	Finalize();
	std::cout << "Scene �f�X�g���N�^�F" << name << "\n";
}

void Scene::Play()
{
	isActive = true;
	std::cout << "Scene Play�F" << name << "\n";
}

void Scene::Stop()
{
	isActive = false;
	std::cout << "Scene Stop�F" << name << "\n";
}

void Scene::Show()
{
	isVisible = true;
	std::cout << "Scene Show�F" << name << "\n";
}

void Scene::Hide()
{
	isVisible = false;
	std::cout << "Scene Hide�F" << name << "\n";
}


const std::string& Scene::Name() const
{
	return name;
}


bool Scene::IsActive() const
{
	return isActive;
}


bool Scene::IsVisible() const
{
	return isVisible;
}