#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <string>

using namespace std;


/**
 * @brief encrypt a string
 * 
 * @param str   the string to be encrypted
 * @param key   the encryption key
 * @return the encrypted version of the given string
 */
string encrypt(string str, int key);


/**
 * @brief decrypt a string
 * 
 * @param enc_str   an encrypted string
 * @param key       the encryption key
 * @return the decrypted string
 */
string decrypt(string enc_str, int key);


#endif