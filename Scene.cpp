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
}

Scene::~Scene()
{
	Finalize();
}

void Scene::Play()
{
	isActive = true;
}

void Scene::Stop()
{
	isActive = false;
}

void Scene::Show()
{
	isVisible = true;
}

void Scene::Hide()
{
	isVisible = false;
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