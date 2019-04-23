/**
* @file Sceen.h
*/

#ifndef SCENE_H_INCLUDED
#define SCENE_H_INCLUDED
#include <memory>
#include <string>

class SceneStack;

/**
* シーンの基底のクラス
*/
class Scene {
public:
	Scene(const char* name);
	Scene(const Scene&) = delete;
	Scene& operator = (const Scene&) = delete;
	virtual ~Scene();

	virtual bool Initialize() = 0 {}
	virtual bool ProcessInput() = 0 {}
	virtual bool Updata(float) = 0 {}
	virtual bool Render() = 0 {}
	virtual bool Finalize() = 0 {}

	virtual bool Play();
	virtual bool Stop();
	virtual bool Show();
	virtual bool Hide();

	const std::string& Name() const;
	bool IsActive() const;
	bool IsVisible() const;

private:
	std::string name;
	bool isVisible = true;
	bool isActive = true;
};
using ScenePtr = std::shared_ptr<Scene>;

#endif // SCENE_H_INCLUDED
