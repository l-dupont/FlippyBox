#include "Drawable.h"

Drawable::Drawable(sf::Sprite sprite, std::shared_ptr<Coordinates> coordinates) : m_sprite(sprite), m_coordinates(coordinates)
{}

void Drawable::draw(sf::RenderWindow& window)
{
    window.draw(m_sprite);
}
