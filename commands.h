#ifndef COMMANDS_H
#define COMMANDS_H

using namespace std;


/*********** Prototypes ***********/

const string PULL = "pull";

const string ADD = "add";

const string COMMIT = "commit";

const string PUSH = "push";

const string BRANCH = "branch";

const string CHECKOUT = "checkout";

/***********************************/



/**
 * @brief 
 * 
 * @param params parameters
 */
void pull(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void add(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void commit(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void push(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void commit(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void push(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void branch(char* const* params);



/**
 * @brief 
 * 
 * @param params parameters
 */
void checkout(char* const* params);



#endif