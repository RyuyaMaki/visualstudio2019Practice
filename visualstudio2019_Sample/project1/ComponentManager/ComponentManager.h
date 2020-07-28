#pragma once

#include <list>
#include <memory>
#include <string>

class Component;
class GameObject;

class ComponentManager {
public:
	static void addTestOutPutComponent(std::shared_ptr<GameObject>& gameObject);
	static void addDestroyObjectComponent(const std::shared_ptr<GameObject>& gameObject, const std::string& objectName);
	static void update();
	static void draw();
	static void deleteComponent();

private:
	static std::list<std::shared_ptr<Component>> m_components;
};