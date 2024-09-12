#include <iostream>
#include <fstream>

using namespace std;

int main () {
    // Read images
    ifstream image;
    // write a image
    ofstream new_image;

    image.open("shark.ppm");
    new_image.open("shark_blue.ppm");

    // copy over header information
    string type = "", width = "", height = "", RGB = "";
    image >> type;
    image >> width;
    image >> height;
    image >> RGB;

    // copy header to new image
    new_image << type;
    new_image << width << " " << height << endl;
    new_image << RGB;

    // reading strings
    string red = "", green = "", blue = "";
    // int value
    int int_red = 0, int_green = 0, int_blue = 0;
    // continue here



    if (image.is_open()) {
        // Place header info
        image << "P3" << endl;
        image << "1920 1200" << endl; // Image size
        image << "255" << endl; // Set RGB max
    }

    // Across the images
    for (int y = 0; y < 1200; y++) {
        for (int x = 0; x < 1920; x++) {
            image << R << " " << G << " " << B << endl;
        }
    }
    
    return 0;
}