#include "../header/rectangle.hpp"

Rectangle::Rectangle(){
    this->width = 0;
    this->height = 0;
}
Rectangle::Rectangle(int w, int h){
    this->width = w;
    this->height = h;
}

void Rectangle::set_width(int w){
    this->width = w;
}

void Rectangle::set_height(int h){
    this->height = h;
}

int Rectangle::get_width() const{
    return this->width;
}

int Rectangle::get_height() const{
    return this->height;
}


int Rectangle::area(){
    return this->width * this->height;
}

int Rectangle::perimeter(){
    int d_width = this->width * 2;
    int d_height = this->height * 2;
    return d_width + d_height;
}
