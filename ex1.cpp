#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream image;

    image.open("image.ppm");

    int color = 255;

    if (image.is_open()) {
        // Place header info
        image << "P3" << endl;
        image << "250 250" << endl; // Image size
        image << "255" << endl; // Set RGB max
    }

    // Across the images
    for (int y = 0; y < 250; y++) {
        if (y > 125) {
            color = 0;
        }
        for (int x = 0; x < 250; x++) {
            image << color << " " << color << " " << color << endl;
        }
    }
    
    return 0;
}