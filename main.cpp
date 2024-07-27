#include <iostream>

int main(){

    //create an image
    int image_w = 256;
    int image_h = 256;

    //render the image 

    std::cout<< "P3\n" << image_w << ' ' <<  image_h << "\n255\n";

    for (int j = 0; j < image_h; j++){
        for ( int i = 0; i <image_w; i++){
           //red colour (left to right)
            auto r = double(i) / (image_w-1);
           //green colour 
        auto g = double(j)/(image_h-1);
           //blue colour 
        auto b = 0.0;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);
        std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}