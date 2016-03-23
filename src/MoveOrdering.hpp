#ifndef MOVEORDERING_H_INCLUDED
#define MOVEORDERING_H_INCLUDED


#include "Board.hpp"
#include "MoveGen.hpp"
#include "Eval.hpp"
#include "Move.hpp"


class MoveOrdering
{
public:
    MoveOrdering();

    void rateMoves(std::vector<Move>& moveList);
    Move getBestCandidate(std::vector<Move>& moveList);

private:

// 

};

#endif // MOVEORDERING_H_INCLUDED
