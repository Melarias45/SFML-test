#ifndef rectangle_hpp
#define rectangle_hpp
#include <SFML/Graphics.hpp>
using namespace sf;


class Rectangle{
     
    private: 
    Vector2f speed; 
    RectangleShape shape;

    public:
    Rectangle(Vector2f size);
    
    void update (); 
    void drawTo (RenderWindow &window); 

}; 


#endif