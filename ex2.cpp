#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream image;

    image.open("image.ppm");

    int R = 255;
    int G = 255;
    int B = 255;

    if (image.is_open()) {
        // Place header info
        image << "P3" << endl;
        image << "250 250" << endl; // Image size
        image << "255" << endl; // Set RGB max
    }

    // Across the images
    for (int y = 0; y < 250; y++) {
        if (y == 50) {
            R = 0;
            G = 255;
            B = 0;
        }
        if (y == 100) {
            R = 0;
            G = 0;
            B = 255;
        }
        if (y == 150) {
            R = 255;
            G = 0;
            B = 0;
        }
        if (y == 200) {
            R = 0;
            G = 0;
            B = 0;
        }
        for (int x = 0; x < 250; x++) {
            image << R << " " << G << " " << B << endl;
        }
    }
    
    return 0;
}