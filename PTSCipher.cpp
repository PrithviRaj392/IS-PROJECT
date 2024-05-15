#include "PTSCipher.h"


void PTSCipher::pad(std::string& text) {
    uint8_t paddingLength = text.length() % 4;
    text.insert(text.end(), paddingLength, '\0');
}

void PTSCipher::substitute(std::string& text, Key key) {

    for (size_t i = 0; i < text.length(); i++) {
        
    }
}





