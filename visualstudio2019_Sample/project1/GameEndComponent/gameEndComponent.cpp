#include "gameEndComponent.h"
#include "../Game/Game.h"

GameEndComponent::GameEndComponent(const std::string& inputStr):
    m_inputStr{inputStr}
{
}

std::shared_ptr<Component> GameEndComponent::createClone()
{
    return std::shared_ptr<Component>();
}

void GameEndComponent::input(const std::string& inputOrder)
{
    if (inputOrder == m_inputStr) {
        Game::end();
    }
}