#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    //Variables y partes del cuerpo
    sf::RenderWindow window(sf::VideoMode(800, 800), "Ids Test");
    sf::CircleShape Head(100.f);
    sf::CircleShape Body(150.f);
    sf::CircleShape mouth(50, 3);
    sf::CircleShape eye(15.f);
    sf::CircleShape iris(13.f);
    sf::CircleShape mano(50.f);
    sf::RectangleShape pata(sf::Vector2f(15, 90));
    
   
    
    

    
    
    
    //posicion y color de las variables
  

    mouth.setFillColor(sf::Color(249, 121, 0));
    mouth.setPosition(190, 260);
    mouth.rotate(30.f);
        

    Head.setPosition(220, 230);
    Head.setFillColor(sf::Color::Yellow);
   
    Body.setPosition(290, 370);
    Body.setFillColor(sf::Color::Yellow);

    eye.setFillColor(sf::Color(0, 0, 0));
    eye.setPosition(260, 260);

    iris.setFillColor(sf::Color(255, 255, 255));
    iris.setPosition(262, 262);
    
    mano.setFillColor(sf::Color(250, 190, 5));
    mano.setPosition(350, 450);
    mano.setScale(2, 1);
    mano.rotate(30.f);

    pata.setFillColor(sf::Color(249, 121, 0));
    pata.setPosition(430, 660);

   
    






    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(mouth);
        window.draw(Head);
        window.draw(pata);
        window.draw(eye);
        window.draw(iris);
        
        window.draw(Body);
        window.draw(mano);
        window.display();

    }

    return 0;
}