#include "color.h"
#include "vec3.h"

#include <iostream>


int main(){

    //create an image
    int image_w = 256;
    int image_h = 256;

    //render the image 
    //header for the image
    std::cout<< "P3\n" << image_w << ' ' <<  image_h << "\n255\n";

    for (int j = 0; j < image_h; j++){
        // counts how many colours to render (so you know how long it takes)
        std::clog<< "\rScanlines remaining:" << (image_h - j) << ' ' << std::flush;
        for ( int i = 0; i <image_w; i++){
        auto pixel_color = color(double(i)/(image_w-1), double(j)/(image_h-1), 0);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDone.                 \n";
}