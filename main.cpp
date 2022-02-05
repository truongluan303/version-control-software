// Program to illustrate the getopt()
// function in C

#include <stdio.h> 
#include <unistd.h>
#include <iostream>
#include <string>
#include "commands.h"

#define VERSION "1.0.0"

using namespace std;


/********* Function Prototypes **********/

void print_help();

void print_man_page();

void print_version();

/****************************************/


/***************************
 *      Main Function      *
 **************************/

int main(int argc, char** argv) 
{
    if (argc == 1)
    {
        print_help();
        return 0;
    }
    if (argc < 2)
    {
        switch(getopt(argc, argv, "HhPpVv"))
        {
            case 'p':
            case 'P':
            print_man_page();
                return 0;
            case 'V':
            case 'v':
                print_version();
                return 0;
            case 'H':
            case 'h':
                print_help();
                return 0;
            case -1:
                break;
        }
    }

    string command = argv[1];
    char** params = &argv[2];
    
    return 0;
}




/**
 * @brief print help instruction
 * 
 */
void print_help()
{
    cout << "Help Page" << endl;
}




/**
 * @brief print manual page
 * 
 */
void print_man_page()
{
    cout << "man page" << endl;
}




/**
 * @brief print software version
 * 
 */
void print_version()
{
    cout << "version control software " << VERSION << endl;
}