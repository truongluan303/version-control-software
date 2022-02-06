// Program to illustrate the getopt()
// function in C

#include <unistd.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <map>
#include "commands.h"

#define VERSION "1.0.0"
#define GITHUB_URL "https://github.com/truongluan303/version_control_software"

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
    if (argc == 2)
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
    map<string, string> commands_to_usage =
    {
            {PULL, "Clone a repository into a new repository"},
            {ADD, "Add file/folder(s) to the index"},
            {COMMIT, "Save changes to the current repository"},
            {PUSH, "Update remove refs along with associated objects"},
            {BRANCH, "Show or modify branches"},
    };
    cout << "Common commands and usage:" << endl
         << "==========================" << endl;
    for (auto& kvp : commands_to_usage)
    {
        string command = kvp.first;
        string usage = kvp.second;
        cout << setw(7) << command << " --- " << usage << endl;
    }
    cout << endl << "VCS is a distributed version control software."
         << endl << "Source code can be found at: " << GITHUB_URL
         << endl << endl;
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
    cout << "VCS " << VERSION << endl;
}