#ifndef _STAGE_H_
#define _STAGE_H_

class Stage
{
public:
    int turn;
    bool doGetKey;
    std::pair<int, int> playerPos;
    std::vector<std::vector<std::vector<int>>> cell;
};

#endif