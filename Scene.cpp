/**
* @file Sceen.h
*/

#include "Scene.h"
#include <iostream>

/**
*　コンストラクタ
*
* @param name シーン名
*/
Scene::Scene(const cahr* name) : name(name);
{
	std::cout << "Scene コンストラクタ：" << name << "\n";
}

Scene::~Scene()
{
	Finalize();
	std::cout << "Scene デストラクタ：" << name << "\n";
}

void Scene::Play()
{
	isActive = true;
	std::cout << "Scene Play：" << name << "\n";
}

void Scene::Stop()
{
	isActive = false;
	std::cout << "Scene Stop：" << name << "\n";
}

void Scene::Show()
{
	isVisible = true;
	std::cout << "Scene Show：" << name << "\n";
}

void Scene::Hide()
{
	isVisible = false;
	std::cout << "Scene Hide：" << name << "\n";
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