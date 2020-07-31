#pragma once

#include <list>
#include <memory>
#include <string>

class Component;
class GameObject;

class ComponentManager {
public:
	static void addTestOutPutComponent(const std::shared_ptr<GameObject>& gameObject);
	static void addDestroyObjectComponent(const std::shared_ptr<GameObject>& gameObject, const std::string& objectName);
	static void addCloneObjectComponent(int cloneNum, const std::shared_ptr<GameObject>& gameObject);
	static void addComponent(const std::shared_ptr<Component> component);
	static void update();
	static void draw();
	static void deleteComponent();
	static void addComponents(const std::list<std::shared_ptr<Component>>& components, const std::shared_ptr<GameObject>& gameObject);

private:
	static std::list<std::shared_ptr<Component>> m_components;
};