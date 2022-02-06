#ifndef COMMIT_H
#define COMMIT_H

#include <ctime>
#include <string>

using namespace std;


class Commit
{
// private variables
private:
    unsigned long id;           // commit id
    string committer_email;     // email of the person who made the commit
    time_t commit_time;         // the time the commit was made

public:

    /**
     * @brief constructor
     */
    Commit();

    /**
     * @brief Get the commit time
     * @return time_t object
     */
    time_t get_commit_time();
};


#endif