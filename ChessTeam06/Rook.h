#pragma once
#include "Piece.h"
class Rook : Piece
{
public:

	bool virtual isValidMovement(const Piece& dest, const std::vector<std::vector<Piece*>>& board) const;
};