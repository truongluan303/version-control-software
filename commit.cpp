#include "commit.h"

using namespace std;



Commit::Commit()
{
    commit_time = time(0);
}



time_t Commit::get_commit_time()
{
    return commit_time;
}