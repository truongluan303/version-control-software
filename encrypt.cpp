#include <cmath>
#include "encrypt.h"

// range of ascii characters
#define ASCII_MIN 0
#define ASCII_MAX 127



string encrypt(string str, int key)
{
    const unsigned short RANGE = ASCII_MAX - ASCII_MIN;
    string encrypted(str.length(), ' ');
    for (unsigned int i = 0; i < str.length(); i++)
    {
        int ch = (int)str[i];
        int num_to_add = key % RANGE;
        int new_val = ch + num_to_add;
        if (new_val > ASCII_MAX)
        {
            new_val = ASCII_MIN + (abs(ASCII_MAX - new_val) - 1);
        }
        char new_char = static_cast<char>(new_val);
        encrypted[i] = new_char;
    }
    return encrypted;
}



string decrypt(string enc_str, int key)
{
    const unsigned short RANGE = ASCII_MAX - ASCII_MIN;
    string decrypted(enc_str.length(), ' ');
    for (unsigned int i = 0; i < enc_str.length(); i++)
    {
        int ch = (int)enc_str[i];
        int num_to_sub = key % RANGE;
        int new_val = ch - num_to_sub;
        if (new_val < ASCII_MIN)
        {
            new_val = ASCII_MAX - (abs(ASCII_MIN - new_val) - 1);
        }
        char new_char = static_cast<char>(new_val);
        decrypted[i] = new_char;
    }
    return decrypted;
}